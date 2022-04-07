#pragma once

#include "partycl.h"
#include "quantum.h"
#include "split_util.h"
//#ifdef SSD1306OLED
//#    include "ssd1306.h"
//#endif


// The layout below shows the general layout of each key. This determines the order the keys are read from the keymap.
// Note that thePartycl places the thumb cluster on its own column. Column and row numbering start at 0.

#define LAYOUT_6x4(\
  L05, L04, L03, L02, L01, L00,                          R00, R01, R02, R03, R04, R05, \
  L15, L14, L13, L12, L11, L10,                          R10, R11, R12, R13, R14, R15, \
  L25, L24, L23, L22, L21, L20,                          R20, R21, R22, R23, R24, R25, \
            L33, L32,                                              R32, R33,           \
                  L26, L16, L06,                         R06, R16, R26,                \
                       L46, L36,                         R36, R46                      \
  ) \
  { \
    { L00,   L01,   L02, L03, L04, L05, L06 }, \
    { L10,   L11,   L12, L13, L14, L15, L16 }, \
    { L20,   L21,   L22, L23, L24, L25, L26 }, \
    { KC_NO, KC_NO, L32, L33, KC_NO, KC_NO, L36  }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L46  }, \
                                          \
    { R00, R01, R02, R03, R04,   R05, R06   }, \
    { R10, R11, R12, R13, R14,   R15, R16   }, \
    { R20, R21, R22, R23, R24,   R25, R26   }, \
    { KC_NO, KC_NO, R32, R33, KC_NO, KC_NO, R36 }, \
    { KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, R46 } \
}
  // Above is the matrix of keys. All keys used in the layout above must be present in the matrix.
  // Unused keys in the series are escaped using the KC_NO code.
