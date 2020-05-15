/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf --output-file ./src/otypes.inl  */
/* Computed positions: -k'1-3' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif


/*
 * This file was generated by:
 * mobile/tools/make-synonyms.py
 */

struct otype_hash {
    const char *name;
    int index;
};
#include <string.h>

#define TOTAL_KEYWORDS 281
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 1278
/* maximum key range = 1278, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279,
      1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279,
      1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279,
      1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279, 1279,
      1279, 1279,   80, 1279, 1279,    5,    5,  290, 1279, 1279,
        38,    5,   95,   60, 1279, 1279, 1279, 1279, 1279, 1279,
      1279, 1279, 1279,  155, 1279,   33,    0,  505,    3,   13,
        50,   10,   20,  275,  315,  355,   85,  155,  170,   20,
       510,  135,  255,  125,    8,  300,  105,  480,  220,  230,
        85,   65,    8,    0,   85,  140, 1279,  390, 1279, 1279,
       195,   55,    0,   85,  400,  495,   55, 1279,   65,  245,
      1279,  490,  405,  185,  345,  280,    8,  370,   35,  110,
         3,    3,  490,   90,   15, 1279, 1279, 1279, 1279, 1279,
      1279, 1279, 1279
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]+3];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]+5];
        break;
    }
  return hval;
}

static const struct otype_hash wordlist[] =
  {
    {""},
    {"X", 17},
    {""},
    {"XB?", 42},
    {"?", 0},
    {""}, {""}, {""},
    {"XB*", 109},
    {""}, {""},
    {"of?", 134},
    {""},
    {"..?", 31},
    {"WD?", 71},
    {""},
    {"BD?", 76},
    {""}, {""},
    {"WD*", 160},
    {""},
    {"BD*", 163},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"OH?", 51},
    {""},
    {"BH?", 73},
    {"JTA", 273},
    {""},
    {"OH*", 165},
    {""}, {""}, {""}, {""},
    {"sv?", 67},
    {""},
    {"CH?", 52},
    {""}, {""},
    {"a2*", 182},
    {""},
    {"CH*", 166},
    {""}, {""}, {""}, {""},
    {"AB?", 64},
    {""}, {""}, {""}, {""},
    {"AB*", 151},
    {""}, {""}, {""}, {""},
    {"AG?", 219},
    {""}, {""},
    {"BAL", 215},
    {"gB", 21},
    {"Be?", 54},
    {""}, {""}, {""}, {""},
    {"Be*", 148},
    {""}, {""},
    {"gD*", 194},
    {""},
    {"Ce?", 58},
    {""}, {""}, {""}, {""},
    {"Ce*", 188},
    {""}, {""},
    {"G", 203},
    {""},
    {"CGb", 115},
    {""}, {""},
    {"sg?", 60},
    {"ev", 1},
    {"Cl*", 88},
    {""}, {""},
    {"sg*", 154},
    {""},
    {"BL?", 222},
    {""}, {""},
    {"s*y", 156},
    {"C*", 152},
    {"C*?", 49},
    {""}, {""}, {""}, {""},
    {"Ae?", 55},
    {""}, {""}, {""},
    {"rB", 8},
    {"Ae*", 146},
    {""}, {""}, {""}, {""},
    {"BLL", 235},
    {""}, {""},
    {"WV*", 191},
    {"rG", 216},
    {"Al*", 96},
    {""}, {""},
    {"Ati", 266},
    {""},
    {"CV?", 40},
    {""}, {""}, {""}, {""},
    {"CV*", 103},
    {""}, {""}, {""}, {""},
    {"BS?", 69},
    {""}, {""},
    {"s*b", 157},
    {""},
    {"BS*", 149},
    {"LyA", 211},
    {""}, {""},
    {"V*", 172},
    {"V*?", 142},
    {""}, {""},
    {"AEd", 248},
    {""},
    {"Gl?", 87},
    {""}, {""},
    {"blu", 15},
    {""},
    {"HB?", 56},
    {""}, {""}, {""}, {""},
    {"HB*", 144},
    {""}, {""}, {""}, {""},
    {"Y*?", 46},
    {""}, {""}, {""}, {""},
    {"Cld", 118},
    {""}, {""},
    {"s?y", 62},
    {"HH", 136},
    {"bL*", 97},
    {""}, {""}, {""},
    {"IG", 85},
    {"C?*", 86},
    {""}, {""}, {""}, {""},
    {"glb", 124},
    {""}, {""}, {""},
    {"UV", 16},
    {"Le?", 26},
    {""}, {""},
    {"Lev", 24},
    {""},
    {"AGN", 229},
    {""}, {""},
    {"LeQ", 228},
    {""},
    {"GlC", 89},
    {""}, {""}, {""},
    {"N*", 164},
    {"N*?", 72},
    {""}, {""}, {""}, {""},
    {"AM*", 105},
    {""}, {""},
    {"s?b", 63},
    {""},
    {"NL*", 106},
    {""}, {""}, {""}, {""},
    {"reg", 78},
    {""}, {""},
    {"Sy?", 39},
    {""},
    {"SB*", 100},
    {""}, {""},
    {"Sy*", 102},
    {""},
    {"ZZ*", 161},
    {""}, {""},
    {"St*", 92},
    {""},
    {"ULX", 19},
    {""}, {""},
    {"TT?", 48},
    {"G?", 32},
    {"ALS", 210},
    {""}, {""},
    {"TT*", 168},
    {""},
    {"BY*", 184},
    {""}, {""},
    {"AEn", 249},
    {""},
    {"red", 13},
    {""}, {""}, {""}, {""},
    {"gLS", 29},
    {""}, {""},
    {"MBA", 275},
    {"Q?", 220},
    {"LS?", 25},
    {""}, {""},
    {"WR?", 53},
    {""},
    {"HV*", 171},
    {""}, {""},
    {"WR*", 169},
    {""},
    {"Bla", 234},
    {""}, {""},
    {"LSB", 218},
    {""},
    {"LeI", 226},
    {""}, {""}, {""}, {""},
    {"HS?", 70},
    {""}, {""},
    {"Sy2", 233},
    {""},
    {"HS*", 158},
    {""}, {""},
    {"*", 137},
    {""},
    {"LM?", 75},
    {""}, {""}, {""}, {""},
    {"LM*", 162},
    {""}, {""},
    {"DOA", 274},
    {"S*", 153},
    {"S*?", 50},
    {""}, {""}, {""}, {""},
    {"UX?", 18},
    {""}, {""}, {""}, {""},
    {"HVC", 127},
    {""}, {""},
    {"WU*", 98},
    {""},
    {"EB?", 38},
    {""}, {""},
    {"Sy1", 232},
    {""},
    {"EB*", 95},
    {""}, {""}, {""}, {""},
    {"LLS", 214},
    {""}, {""}, {""}, {""},
    {"As?", 36},
    {""}, {""},
    {"AsA", 244},
    {""},
    {"As*", 91},
    {""}, {""}, {""}, {""},
    {"AsD", 253},
    {""}, {""},
    {"OVV", 236},
    {""},
    {"CGG", 83},
    {""}, {""}, {""}, {""},
    {"AsE", 247},
    {""}, {""},
    {"sr*", 198},
    {""},
    {"LX?", 43},
    {"Pec?", 45},
    {""},
    {"Or*", 174},
    {""},
    {"Pe*", 143},
    {""}, {""},
    {"DLA", 212},
    {"Pl", 202},
    {"Pl?", 201},
    {""}, {""},
    {"LXB", 110},
    {"**", 94},
    {"**?", 37},
    {""}, {""}, {""}, {""},
    {"HX?", 44},
    {""}, {""},
    {"su*", 200},
    {""},
    {"AsC", 243},
    {""}, {""}, {""}, {""},
    {"El*", 101},
    {""}, {""},
    {"HXB", 111},
    {""},
    {"SN?", 74},
    {""}, {""},
    {"NEO", 265},
    {""},
    {"SN*", 199},
    {""}, {""},
    {"mAL", 213},
    {""},
    {"ClG", 81},
    {""},
    {"sh", 130},
    {"pA?", 68},
    {""},
    {"ISt", 264},
    {""}, {""},
    {"pA*", 159},
    {""},
    {"LI?", 27},
    {""}, {""},
    {"grv", 23},
    {""},
    {"DQ*", 104},
    {""}, {""}, {""}, {""},
    {"Y*O", 145},
    {""}, {""}, {""},
    {"IR", 10},
    {"Fl*", 177},
    {""}, {""}, {""},
    {"HI", 7},
    {"Gr?", 35},
    {""}, {""}, {""}, {""},
    {"AsS", 245},
    {""}, {""}, {""}, {""},
    {"Ast", 279},
    {""}, {""}, {""}, {""},
    {"SX*", 195},
    {""}, {""}, {""}, {""},
    {"DN*", 108},
    {""}, {""},
    {"s*r", 155},
    {""},
    {"AsP", 254},
    {""}, {""},
    {"Ate", 267},
    {""},
    {"PM*", 170},
    {""}, {""},
    {"OpC", 90},
    {""},
    {"AsN", 256},
    {""}, {""}, {""},
    {"PN", 129},
    {"PN?", 114},
    {""}, {""}, {""}, {""},
    {"SR?", 131},
    {""}, {""}, {""},
    {"RB", 250},
    {"RB?", 59},
    {""}, {""}, {""}, {""},
    {"QSO", 237},
    {""}, {""},
    {"out", 135},
    {""},
    {"C?G", 34},
    {""}, {""}, {""}, {""},
    {"RG*", 150},
    {""}, {""}, {""}, {""},
    {"Bz?", 221},
    {""}, {""}, {""}, {""},
    {"LeG", 227},
    {""}, {""},
    {"H2G", 217},
    {""},
    {"bub", 116},
    {""}, {""}, {""}, {""},
    {"HII", 128},
    {""}, {""}, {""}, {""},
    {"Ir*", 173},
    {""}, {""}, {""}, {""},
    {"Asa", 242},
    {""}, {""},
    {"s?r", 61},
    {""}, {""}, {""}, {""}, {""}, {""},
    {"SBG", 224},
    {""}, {""},
    {"SyG", 231},
    {""},
    {"RB2", 252},
    {""}, {""}, {""}, {""},
    {"LIN", 230},
    {""}, {""}, {""}, {""},
    {"gLe", 28},
    {""}, {""}, {""}, {""},
    {"BiC", 206},
    {""}, {""}, {""}, {""},
    {"Pla", 240},
    {""}, {""}, {""}, {""},
    {"Em*", 147},
    {""}, {""}, {""}, {""},
    {"SFR", 126},
    {""}, {""}, {""}, {""},
    {"RB1", 251},
    {""}, {""}, {""}, {""},
    {"BNe", 120},
    {""}, {""}, {""}, {""},
    {"GWE", 30},
    {""}, {""}, {""},
    {"mm", 5},
    {"RV*", 190},
    {""}, {""}, {""}, {""},
    {"bC*", 192},
    {""}, {""}, {""},
    {"mR", 3},
    {"SSO", 238},
    {""}, {""}, {""}, {""},
    {"SsS", 246},
    {""}, {""}, {""}, {""},
    {"RS*", 185},
    {""}, {""}, {""}, {""},
    {"No?", 41},
    {""}, {""}, {""}, {""},
    {"No*", 107},
    {""}, {""}, {""}, {""},
    {"dS*", 189},
    {""}, {""}, {""}, {""},
    {"GiC", 205},
    {""}, {""}, {""}, {""},
    {"MGr", 93},
    {""}, {""}, {""}, {""},
    {"Amo", 269},
    {""}, {""}, {""},
    {"cm", 4},
    {"LP?", 65},
    {""}, {""}, {""}, {""},
    {"LP*", 196},
    {""}, {""},
    {"smm", 6},
    {""},
    {"GNe", 119},
    {""}, {""}, {""}, {""},
    {"FU*", 178},
    {""}, {""}, {""}, {""},
    {"Er*", 176},
    {""}, {""}, {""}, {""},
    {"vid", 79},
    {""}, {""}, {""}, {""},
    {"Pu*", 186},
    {""}, {""}, {""}, {""},
    {"Mas", 9},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"SNR", 132},
    {""}, {""}, {""}, {""},
    {"Con", 278},
    {""}, {""}, {""}, {""},
    {"NIR", 12},
    {""}, {""}, {""}, {""},
    {"GiP", 208},
    {""}, {""}, {""}, {""},
    {"Hun", 270},
    {""}, {""}, {""}, {""},
    {"pr?", 47},
    {""}, {""}, {""}, {""},
    {"pr*", 167},
    {""}, {""}, {""}, {""},
    {"SC?", 33},
    {""}, {""}, {""}, {""},
    {"SpS", 255},
    {""}, {""}, {""}, {""},
    {"RR?", 57},
    {""}, {""}, {""}, {""},
    {"RR*", 187},
    {""}, {""}, {""}, {""},
    {"GrG", 82},
    {""}, {""}, {""}, {""},
    {"Mi?", 66},
    {""}, {""}, {""}, {""},
    {"Mi*", 197},
    {""}, {""}, {""}, {""},
    {"RI*", 175},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"err", 22},
    {""}, {""}, {""}, {""},
    {"Sun", 239},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"IPS", 276},
    {""}, {""},
    {"*iA", 140},
    {""},
    {"*i*", 141},
    {""}, {""}, {""}, {""},
    {"MoC", 123},
    {""}, {""}, {""}, {""},
    {"Apo", 268},
    {""}, {""}, {""}, {""},
    {"ISM", 112},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"EmO", 117},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"ERO", 14},
    {""}, {""}, {""}, {""},
    {"EP*", 99},
    {""}, {""}, {""}, {""},
    {"*iC", 138},
    {""}, {""}, {""}, {""},
    {"PoC", 113},
    {""}, {""}, {""}, {""},
    {"DNe", 121},
    {""}, {""}, {""}, {""},
    {"XCo", 262},
    {""}, {""}, {""}, {""},
    {"Coo", 280},
    {""}, {""}, {""}, {""},
    {"gam", 20},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"CCo", 261},
    {""}, {""}, {""}, {""},
    {"EmG", 223},
    {""}, {""}, {""}, {""},
    {"Cul", 277},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
    {"GiG", 207},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"bCG", 225},
    {""}, {""}, {""}, {""},
    {"cC*", 193},
    {""}, {""}, {""}, {""},
    {"Com", 259},
    {""}, {""}, {""}, {""},
    {"*iN", 139},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"FIR", 11},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
    {"Psr", 183},
    {""}, {""}, {""}, {""},
    {"Rad", 2},
    {""}, {""}, {""}, {""},
    {"HzG", 209},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
    {"Ro*", 181},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"RC?", 180},
    {""}, {""}, {""}, {""},
    {"RC*", 179},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
    {"PaG", 84},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"SCG", 80},
    {""}, {""}, {""}, {""},
    {"Pho", 271},
    {""}, {""}, {""}, {""},
    {"RNe", 122},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""},
    {"Moo", 241},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
    {"PoG", 204},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""},
    {"DCo", 263},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""},
    {"Hil", 272},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"PCo", 260},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"mul", 77},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {""}, {""}, {""}, {""},
    {"MPl", 257},
    {""}, {""}, {""}, {""},
    {"cor", 125},
    {""}, {""}, {""}, {""},
    {"cir", 133},
    {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
    {"DPl", 258}
  };

const struct otype_hash *
otypes_in_word_set (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}


static int otypes_hash_search(const char *str, int len)
{
    const struct otype_hash* s;
    s = otypes_in_word_set(str, len);
    return s ? s->index : -1;
}

