#pragma once

#include "partycl.h"
#include "quantum.h"
#include "split_util.h"
#ifdef SSD1306OLED
#    include "ssd1306.h"
#endif

#define LAYOUT_4x6(\
  L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
  L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
            L42, L43,                                              R42, R43,           \
                  L06, L16, L26,                         R26, R16, R06,                \
                       L36, L46,                         R46, R36                      \
  ) \
  { \
    { L00,   L01,   L02, L03, L04, L05, L06 }, \
    { L10,   L11,   L12, L13, L14, L15, L16 }, \
    { L20,   L21,   L22, L23, L24, L25, L26 }, \
    { L30,   L31,   L32, L33, L34, L35, L36 }, \
    { KC_NO, KC_NO, L42, L43, KC_NO, KC_NO, L46  }, \
                                          \
    { R00, R01, R02, R03, R04,   R05, R06   }, \
    { R10, R11, R12, R13, R14,   R15, R16   }, \
    { R20, R21, R22, R23, R24,   R25, R26   }, \
    { R30, R31, R32, R33, R34,   R35, R36   }, \
    { KC_NO, KC_NO, R42, R43, KC_NO, KC_NO, R46 } \
}
