/* Stellarium Web Engine - Copyright (c) 2018 - Noctua Software Ltd
 *
 * This program is licensed under the terms of the GNU AGPL v3, or
 * alternatively under a commercial licence.
 *
 * The terms of the AGPL v3 license can be found in the main directory of this
 * repository.
 */

#include "areas.h"
#include "utarray.h"
#include "utils/vec.h"
#include "utils/utils.h"

#include <assert.h>
#include <math.h>

typedef struct item item_t;

struct item
{
    double pos[2];
    double a; // Semi-major axis.
    double b; // Semi-minor axis.
    double angle;
    uint64_t oid;
    uint64_t hint;
};

struct areas
{
    UT_array *items;
};

/*
 * Compute the signed distance between a point and the closest point on an
 * ellipse.
 *
 * Return a negative value when we are inside the ellipse.
 */
static double ellipse_dist(const double center[2], double angle,
                           double a, double b, const double p_[2])
{
    double p[2], p2[2], t;

    // Circle: can use a faster algorithm.
    if (a == b)
        return vec2_dist(center, p_) - a;

    // Convert into ellipse frame.
    vec2_sub(p_, center, p);
    vec2_rotate(-angle, p, p);
    t = atan2(a * p[1], b * p[0]);
    p2[0] = a * cos(t);
    p2[1] = b * sin(t);
    return vec2_norm(p) - vec2_norm(p2);
}

areas_t *areas_create(void)
{
    static UT_icd item_icd = {sizeof(item_t), NULL, NULL, NULL};
    areas_t *areas;
    areas = calloc(1, sizeof(*areas));
    utarray_new(areas->items, &item_icd);
    return areas;
}

void areas_add_circle(areas_t *areas, const double pos[2], double r,
                      uint64_t oid, uint64_t hint)
{
    item_t item = {};
    memcpy(item.pos, pos, sizeof(item.pos));
    item.a = item.b = r;
    item.oid = oid;
    item.hint = hint;
    utarray_push_back(areas->items, &item);
}

void areas_add_ellipse(areas_t *areas, const double pos[2], double angle,
                       double a, double b,
                       uint64_t oid, uint64_t hint)
{
    item_t item = {};
    memcpy(item.pos, pos, sizeof(item.pos));
    item.angle = angle;
    item.a = a;
    item.b = b;
    item.oid = oid;
    item.hint = hint;
    utarray_push_back(areas->items, &item);
}

void areas_clear_all(areas_t *areas)
{
    utarray_clear(areas->items);
}

/*
 * Function: lookup_score.
 * Weight function to decide what item to return during a lookup.
 *
 * Parameters:
 *   item       - An area item.
 *   pos        - The search position.
 *   max_dist   - The search area.
 *
 * Returns:
 *   The lookup score.  The item with the highest value is the one that
 *   should be selected.
 */
static double lookup_score(const item_t *item, const double pos[static 2],
                           double max_dist)
{
    // This is an heuristic function.  Probably need to be adjusted:
    // Works more or less like this:
    // - If the distance is larger than the max dist, ignore the item.
    // - Sort items by size, with a small adjustment to favor the ones
    //   that are centered in the lookup area.
    // - Large item (DSO ellipse) area is clamped, to give a chance to other
    //   objects inside.
    // - If an item is extremely large, ignore it totally, so that when we
    //   zoom in a DSO, we can't select it anymore.
    double dist, area;
    dist = ellipse_dist(item->pos, item->angle, item->a, item->b, pos);
    dist = max(0, dist);
    if (dist > max_dist) return 0.0;
    area = item->a * item->b;
    if (area > 1000.0 * max_dist * max_dist) return 0.0;
    area = min(area, max_dist * max_dist / 10.0);
    return area + max_dist * max_dist - (dist * dist) * 0.2;
}

int areas_lookup(const areas_t *areas, const double pos[2], double max_dist,
                 uint64_t *oid, uint64_t *hint)
{
    item_t *item = NULL, *best = NULL;
    double score, best_score = 0.0;

    while ( (item = (item_t*)utarray_next(areas->items, item)) ) {
        score = lookup_score(item, pos, max_dist);
        if (score > best_score) {
            best_score = score;
            best = item;
        }
    }
    if (!best) return 0;
    *oid = best->oid;
    *hint = best->hint;
    return 1;
}
