
/*
** This is a generated file, do not edit it. This file is created by
** genhash.pl
*/

#include "plstr.h"
#include "nsCSSProps.h"
#define TOTAL_KEYWORDS 136
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 659
/* maximum key range = 655, duplicates = 0 */


struct StaticNameTable {
  char* tag;
  PRInt32 id;
};

static const unsigned char kLowerLookup[256] = {
  0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
  16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
  32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
  48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
  64,
    97,98,99,100,101,102,103,104,105,106,107,108,109,
    110,111,112,113,114,115,116,117,118,119,120,121,122,

   91, 92, 93, 94, 95, 96, 97, 98, 99,100,101,102,103,104,105,106,107,108,109,110,111,
  112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,

  128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
  144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
  160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
  176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
  192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
  208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
  224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
  240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255
};

#define MYLOWER(x) kLowerLookup[((x) & 0x7f)]

/**
 * Map a name to an ID or -1
 */
PRInt32 nsCSSProps::LookupName(const char* str)
{
  static unsigned short asso_values[] =
    {
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660,  95, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660, 660, 660, 660,
     660, 660, 660, 660, 660, 660, 660,   5,   0, 150,
       5,  15, 125,  15, 235, 190, 660,   0,  60,  35,
     110,   0,   0,  10,   0,   0,  40,  80,   0,  35,
      15, 110,  45, 660, 660, 660, 660, 660,
    };
  static unsigned char lengthtable[] =
    {
      0,  0,  0,  0,  0,  5,  6,  0,  0,  0, 10,  0, 12,  0,
      0,  0,  0,  0,  0, 19, 10,  0,  0,  0,  4,  5, 16,  0,
      0,  0,  0, 16,  0,  0, 19, 15,  6, 17,  0,  0,  0,  0,
     12,  3,  0,  5,  6,  0, 13,  0,  0, 11,  0,  0,  0,  0,
      0,  0, 18,  0,  0,  0, 17,  0,  0,  0,  0,  0,  0,  0,
      0, 21,  0, 18,  0,  0,  6, 12,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0, 11, 12,  0,  0,  0,  6,  0,
      0,  0,  0, 11,  0,  8,  0, 10,  0, 12, 13,  0,  0, 11,
     17,  0,  0,  0,  0,  7,  0,  4,  0,  0,  0,  0,  0,  0,
     11, 17,  0,  0,  0,  0,  0,  0, 19,  0,  0,  7,  0,  0,
      0,  0, 12,  0, 14,  0,  0, 17,  0,  9, 10, 21,  0,  0,
      0,  5, 11,  7,  0,  0, 10,  0,  0,  0,  0,  0, 16, 17,
     18,  4,  0, 16,  0, 13,  0,  0,  0,  7, 13,  0, 10,  0,
      0,  0,  0,  0, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0, 12, 13,  0,  0, 11,  0, 13, 14,  0,  0, 12,  0,  4,
      0, 11,  7,  8,  4,  5,  0, 12,  0, 14,  0,  0, 17,  0,
      0, 15, 16, 17,  0,  0,  5,  6, 12, 13,  9,  5,  6,  0,
      0,  0,  0,  0, 12,  0,  0,  0, 21,  0,  3,  0,  0,  0,
      0,  0, 19,  0, 11,  0,  8,  0, 10, 11,  0,  0,  0,  0,
      6,  0,  0,  0, 10,  0, 12, 13,  0, 10,  0,  0, 13,  0,
      0,  0,  0,  0,  0,  0, 16,  0,  0,  0, 10,  0,  0, 18,
     14,  0, 11,  0,  0,  0,  0,  0, 17,  0,  0,  0,  0,  7,
      8,  0,  0, 11,  0,  0,  0,  0,  0,  7,  0,  9, 15,  6,
      0,  0,  0,  0,  0, 12,  0,  0,  0,  0,  7,  0,  0,  0,
      6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 17,  0,  0,
      0,  0,  0,  0,  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      9,  0,  0,  0,  0,  0,  0, 11,  0,  0,  0,  0,  0,  0,
      0, 19,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 11,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 13,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  5,  0,  0,  0,  0,  0, 16,  0,  0,  9,  0,
      0,  0, 13, 14,  0,  0, 12,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 12,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  9,
    };
  static struct StaticNameTable wordlist[] =
    {
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"speak",  109},
      {"border",  10},
      {"",}, {"",}, {"",}, 
      {"border-top",  27},
      {"",}, 
      {"border-color",  16},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"border-bottom-color",  12},
      {"background",  1},
      {"",}, {"",}, {"",}, 
      {"page",  94},
      {"pause",  98},
      {"page-break-after",  95},
      {"",}, {"",}, {"",}, {"",}, 
      {"border-top-style",  29},
      {"",}, {"",}, 
      {"border-bottom-style",  13},
      {"border-collapse",  15},
      {"volume",  130},
      {"page-break-before",  96},
      {"",}, {"",}, {"",}, {"",}, 
      {"border-style",  26},
      {"top",  125},
      {"",}, 
      {"marks",  77},
      {"stress",  114},
      {"",}, 
      {"border-bottom",  11},
      {"",}, {"",}, 
      {"border-left",  17},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"border-right-color",  22},
      {"",}, {"",}, {"",}, 
      {"background-repeat",  9},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"background-attachment",  2},
      {"",}, 
      {"border-right-style",  23},
      {"",}, {"",}, 
      {"bottom",  32},
      {"word-spacing",  134},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, 
      {"play-during",  103},
      {"border-right",  21},
      {"",}, {"",}, {"",}, 
      {"quotes",  105},
      {"",}, {"",}, {"",}, {"",}, 
      {"text-shadow",  119},
      {"",}, 
      {"overflow",  88},
      {"",}, 
      {"max-height",  78},
      {"",}, 
      {"speak-header",  110},
      {"marker-offset",  76},
      {"",}, {"",}, 
      {"pause-after",  99},
      {"border-left-color",  18},
      {"",}, {"",}, {"",}, {"",}, 
      {"orphans",  83},
      {"",}, 
      {"left",  64},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"padding-top",  93},
      {"border-left-style",  19},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"background-position",  6},
      {"",}, {"",}, 
      {"padding",  89},
      {"",}, {"",}, {"",}, {"",}, 
      {"pause-before",  100},
      {"",}, 
      {"text-transform",  124},
      {"",}, {"",}, 
      {"background-filter",  4},
      {"",}, 
      {"font-size",  57},
      {"font-style",  60},
      {"background-x-position",  7},
      {"",}, {"",}, {"",}, 
      {"color",  40},
      {"empty-cells",  52},
      {"opacity",  82},
      {"",}, {"",}, 
      {"margin-top",  75},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"border-top-color",  28},
      {"text-shadow-color",  120},
      {"text-shadow-radius",  123},
      {"font",  55},
      {"",}, 
      {"background-color",  3},
      {"",}, 
      {"speak-numeral",  111},
      {"",}, {"",}, {"",}, 
      {"z-index",  135},
      {"text-shadow-x",  121},
      {"",}, 
      {"text-align",  116},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"font-size-adjust",  58},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, 
      {"caption-side",  33},
      {"margin-bottom",  72},
      {"",}, {"",}, 
      {"margin-left",  73},
      {"",}, 
      {"outline-color",  85},
      {"padding-bottom",  90},
      {"",}, {"",}, 
      {"padding-left",  91},
      {"",}, 
      {"size",  108},
      {"",}, 
      {"font-weight",  62},
      {"outline",  84},
      {"richness",  106},
      {"clip",  35},
      {"clear",  34},
      {"",}, 
      {"font-variant",  61},
      {"",}, 
      {"border-spacing",  25},
      {"",}, {"",}, 
      {"counter-increment",  42},
      {"",}, {"",}, 
      {"text-decoration",  117},
      {"background-image",  5},
      {"page-break-inside",  97},
      {"",}, {"",}, 
      {"float",  54},
      {"widows",  132},
      {"table-layout",  115},
      {"counter-reset",  43},
      {"elevation",  51},
      {"right",  107},
      {"cursor",  47},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"margin-right",  74},
      {"",}, {"",}, {"",}, 
      {"background-y-position",  8},
      {"",}, 
      {"cue",  44},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"border-bottom-width",  14},
      {"",}, 
      {"clip-bottom",  36},
      {"",}, 
      {"clip-top",  39},
      {"",}, 
      {"clip-right",  38},
      {"speech-rate",  113},
      {"",}, {"",}, {"",}, {"",}, 
      {"margin",  71},
      {"",}, {"",}, {"",}, 
      {"cue-before",  46},
      {"",}, 
      {"cursor-image",  48},
      {"text-shadow-y",  122},
      {"",}, 
      {"list-style",  67},
      {"",}, {"",}, 
      {"outline-style",  86},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"border-top-width",  30},
      {"",}, {"",}, {"",}, 
      {"min-height",  80},
      {"",}, {"",}, 
      {"border-right-width",  24},
      {"letter-spacing",  65},
      {"",}, 
      {"text-indent",  118},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"speak-punctuation",  112},
      {"",}, {"",}, {"",}, {"",}, 
      {"content",  41},
      {"position",  104},
      {"",}, {"",}, 
      {"pitch-range",  102},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"display",  50},
      {"",}, 
      {"clip-left",  37},
      {"list-style-type",  70},
      {"filter",  53},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"voice-family",  129},
      {"",}, {"",}, {"",}, {"",}, 
      {"azimuth",  0},
      {"",}, {"",}, {"",}, 
      {"height",  63},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, 
      {"border-left-width",  20},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"direction",  49},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"cue-after",  45},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"font-family",  56},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"list-style-position",  69},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, 
      {"white-space",  131},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, 
      {"padding-right",  92},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"pitch",  101},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"width",  133},
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"list-style-image",  68},
      {"",}, {"",}, 
      {"max-width",  79},
      {"",}, {"",}, {"",}, 
      {"outline-width",  87},
      {"vertical-align",  127},
      {"",}, {"",}, 
      {"border-width",  31},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"visibility",  128},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"line-height",  66},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"unicode-bidi",  126},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"font-stretch",  59},
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"",}, {"",}, {"",}, {"",}, {"",}, {"",}, 
      {"min-width",  81},
    };

  if (str != NULL) {
    int len = PL_strlen(str);
    if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH) {
  register int hval = len;

  switch (hval)
    {
      default:
      case 12:
        hval += asso_values[MYLOWER(str[11])];
      case 11:
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
        hval += asso_values[MYLOWER(str[5])];
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[MYLOWER(str[1])];
      case 1:
        hval += asso_values[MYLOWER(str[0])];
        break;
    }
  hval += asso_values[MYLOWER(str[len - 1])];
      if (hval <= MAX_HASH_VALUE && hval >= MIN_HASH_VALUE) {
        if (len == lengthtable[hval]) {
          register const char *tag = wordlist[hval].tag;

          /*
          ** While not at the end of the string, if they ever differ
          ** they are not equal.  We know "tag" is already lower case.
          */
          while ((*tag != '\0')&&(*str != '\0')) {
            if (*tag != (char) MYLOWER(*str)) {
              return -1;
            }
            tag++;
            str++;
          }

          /*
          ** One of the strings has ended, if they are both ended, then they
          ** are equal, otherwise not.
          */
          if ((*tag == '\0')&&(*str == '\0')) {
            return wordlist[hval].id;
          }
        }
      }
    }
  }
  return -1;
}

const nsCSSProps::NameTableEntry nsCSSProps::kNameTable[] = {
  { "azimuth", 0 }, 
  { "background", 1 }, 
  { "background-attachment", 2 }, 
  { "background-color", 3 }, 
  { "background-filter", 4 }, 
  { "background-image", 5 }, 
  { "background-position", 6 }, 
  { "background-x-position", 7 }, 
  { "background-y-position", 8 }, 
  { "background-repeat", 9 }, 
  { "border", 10 }, 
  { "border-bottom", 11 }, 
  { "border-bottom-color", 12 }, 
  { "border-bottom-style", 13 }, 
  { "border-bottom-width", 14 }, 
  { "border-collapse", 15 }, 
  { "border-color", 16 }, 
  { "border-left", 17 }, 
  { "border-left-color", 18 }, 
  { "border-left-style", 19 }, 
  { "border-left-width", 20 }, 
  { "border-right", 21 }, 
  { "border-right-color", 22 }, 
  { "border-right-style", 23 }, 
  { "border-right-width", 24 }, 
  { "border-spacing", 25 }, 
  { "border-style", 26 }, 
  { "border-top", 27 }, 
  { "border-top-color", 28 }, 
  { "border-top-style", 29 }, 
  { "border-top-width", 30 }, 
  { "border-width", 31 }, 
  { "bottom", 32 }, 
  { "caption-side", 33 }, 
  { "clear", 34 }, 
  { "clip", 35 }, 
  { "clip-bottom", 36 }, 
  { "clip-left", 37 }, 
  { "clip-right", 38 }, 
  { "clip-top", 39 }, 
  { "color", 40 }, 
  { "content", 41 }, 
  { "counter-increment", 42 }, 
  { "counter-reset", 43 }, 
  { "cue", 44 }, 
  { "cue-after", 45 }, 
  { "cue-before", 46 }, 
  { "cursor", 47 }, 
  { "cursor-image", 48 }, 
  { "direction", 49 }, 
  { "display", 50 }, 
  { "elevation", 51 }, 
  { "empty-cells", 52 }, 
  { "filter", 53 }, 
  { "float", 54 }, 
  { "font", 55 }, 
  { "font-family", 56 }, 
  { "font-size", 57 }, 
  { "font-size-adjust", 58 }, 
  { "font-stretch", 59 }, 
  { "font-style", 60 }, 
  { "font-variant", 61 }, 
  { "font-weight", 62 }, 
  { "height", 63 }, 
  { "left", 64 }, 
  { "letter-spacing", 65 }, 
  { "line-height", 66 }, 
  { "list-style", 67 }, 
  { "list-style-image", 68 }, 
  { "list-style-position", 69 }, 
  { "list-style-type", 70 }, 
  { "margin", 71 }, 
  { "margin-bottom", 72 }, 
  { "margin-left", 73 }, 
  { "margin-right", 74 }, 
  { "margin-top", 75 }, 
  { "marker-offset", 76 }, 
  { "marks", 77 }, 
  { "max-height", 78 }, 
  { "max-width", 79 }, 
  { "min-height", 80 }, 
  { "min-width", 81 }, 
  { "opacity", 82 }, 
  { "orphans", 83 }, 
  { "outline", 84 }, 
  { "outline-color", 85 }, 
  { "outline-style", 86 }, 
  { "outline-width", 87 }, 
  { "overflow", 88 }, 
  { "padding", 89 }, 
  { "padding-bottom", 90 }, 
  { "padding-left", 91 }, 
  { "padding-right", 92 }, 
  { "padding-top", 93 }, 
  { "page", 94 }, 
  { "page-break-after", 95 }, 
  { "page-break-before", 96 }, 
  { "page-break-inside", 97 }, 
  { "pause", 98 }, 
  { "pause-after", 99 }, 
  { "pause-before", 100 }, 
  { "pitch", 101 }, 
  { "pitch-range", 102 }, 
  { "play-during", 103 }, 
  { "position", 104 }, 
  { "quotes", 105 }, 
  { "richness", 106 }, 
  { "right", 107 }, 
  { "size", 108 }, 
  { "speak", 109 }, 
  { "speak-header", 110 }, 
  { "speak-numeral", 111 }, 
  { "speak-punctuation", 112 }, 
  { "speech-rate", 113 }, 
  { "stress", 114 }, 
  { "table-layout", 115 }, 
  { "text-align", 116 }, 
  { "text-decoration", 117 }, 
  { "text-indent", 118 }, 
  { "text-shadow", 119 }, 
  { "text-shadow-color", 120 }, 
  { "text-shadow-x", 121 }, 
  { "text-shadow-y", 122 }, 
  { "text-shadow-radius", 123 }, 
  { "text-transform", 124 }, 
  { "top", 125 }, 
  { "unicode-bidi", 126 }, 
  { "vertical-align", 127 }, 
  { "visibility", 128 }, 
  { "voice-family", 129 }, 
  { "volume", 130 }, 
  { "white-space", 131 }, 
  { "widows", 132 }, 
  { "width", 133 }, 
  { "word-spacing", 134 }, 
  { "z-index", 135 }, 
};
