#pragma once

#include "quantum.h"

#define LAYOUT_ortho_5x14( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
  k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, k412, k413 \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013 }, \
  { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113 }, \
  { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213 }, \
  { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313 }, \
  { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, k412, k413 } \
}

#define LAYOUT_ortho_2x2u( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
  k40, k41, k42, k43, k44,   k45,     k47,     k49, k410, k411, k412, k413  \
) \
{ \
  { k00,   k01, k02, k03, k04, k05, k06,   k07, k08,   k09, k010, k011, k012, k013   }, \
  { k10,   k11, k12, k13, k14, k15, k16,   k17, k18,   k19, k110, k111, k112, k113   }, \
  { k20,   k21, k22, k23, k24, k25, k26,   k27, k28,   k29, k210, k211, k212, k213   }, \
  { k30,   k31, k32, k33, k34, k35, k36,   k37, k38,   k39, k310, k311, k312, k313   }, \
  { k40,   k41, k42, k43, k44, k45, KC_NO, k47, KC_NO, k49, k410, k411, k412, k413   } \
}

#define LAYOUT_ortho_hhkb( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
       k41, k42, k43, k44,   k45,     k47,     k49, k410, k411, k412       \
) \
{ \
  { k00,   k01, k02, k03, k04, k05, k06,   k07, k08,   k09, k010, k011, k012, k013   }, \
  { k10,   k11, k12, k13, k14, k15, k16,   k17, k18,   k19, k110, k111, k112, k113   }, \
  { k20,   k21, k22, k23, k24, k25, k26,   k27, k28,   k29, k210, k211, k212, k213   }, \
  { k30,   k31, k32, k33, k34, k35, k36,   k37, k38,   k39, k310, k311, k312, k313   }, \
  { KC_NO, k41, k42, k43, k44, k45, KC_NO, k47, KC_NO, k49, k410, k411, k412, KC_NO } \
}

#define LAYOUT_ortho_7u( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
       k41, k42,                       k46,               k411, k412        \
) \
{ \
  { k00,   k01, k02, k03,   k04,   k05,   k06, k07,   k08,   k09,   k010,  k011, k012, k013   }, \
  { k10,   k11, k12, k13,   k14,   k15,   k16, k17,   k18,   k19,   k110,  k111, k112, k113   }, \
  { k20,   k21, k22, k23,   k24,   k25,   k26, k27,   k28,   k29,   k210,  k211, k212, k213   }, \
  { k30,   k31, k32, k33,   k34,   k35,   k36, k37,   k38,   k39,   k310,  k311, k312, k313   }, \
  { KC_NO, k41, k42, KC_NO, KC_NO, KC_NO, k46, KC_NO, KC_NO, KC_NO, KC_NO, k411, k412, KC_NO } \
}

#define LAYOUT_2u_arrow( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
  k40, k41, k42, k43,    k44,      k46,   k48, k49, k410, k411, k412, k413 \
) \
{ \
  { k00, k01, k02, k03, k04, k05,   k06, k07,   k08, k09, k010, k011, k012, k013 }, \
  { k10, k11, k12, k13, k14, k15,   k16, k17,   k18, k19, k110, k111, k112, k113 }, \
  { k20, k21, k22, k23, k24, k25,   k26, k27,   k28, k29, k210, k211, k212, k213 }, \
  { k30, k31, k32, k33, k34, k35,   k36, k37,   k38, k39, k310, k311, k312, k313 }, \
  { k40, k41, k42, k43, k44, KC_NO, k46, KC_NO, k48, k49, k410, k411, k412, k413 } \
}

#define LAYOUT_625u_arrow( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
  k40, k41, k42,              k45,             k49, k410, k411, k412, k413 \
) \
{ \
  { k00, k01, k02, k03,   k04,   k05,   k06,   k07,   k08,   k09, k010, k011, k012, k013 }, \
  { k10, k11, k12, k13,   k14,   k15,   k16,   k17,   k18,   k19, k110, k111, k112, k113 }, \
  { k20, k21, k22, k23,   k24,   k25,   k26,   k27,   k28,   k29, k210, k211, k212, k213 }, \
  { k30, k31, k32, k33,   k34,   k35,   k36,   k37,   k38,   k39, k310, k311, k312, k313 }, \
  { k40, k41, k42, KC_NO, KC_NO, k45,   KC_NO, KC_NO, KC_NO, k49, k410, k411, k412, k413 } \
}

#define LAYOUT_wiegell( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, \
  k20, k21, k22, k23, k24, k25,           k28, k29, k210, k211, k212, k213, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, \
  k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, k412, k413 \
) \
{ \
  { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k410, k411, k412, k413 }, \
  { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311, k312, k313 }, \
  { k20, k21, k22, k23, k24, k25, KC_NO, KC_NO, k28, k29, k210, k211, k212, k213 }, \
  { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113 }, \
  { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013 } \
}
