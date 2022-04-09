#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

#define LAYOUT(\
    L05, L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, R05, \
    L15, L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, R15, \
    L25, L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, R25, \
              L32, L33,                                        R32, R33,           \
                   L41, L42, L43,                     R43, R42, R41,                    \
                        L44, L45,                     R45, R44
    ) \
    { \
        { L00,   L01,   L02, L03, L04, L05 }, \
        { L10,   L11,   L12, L13, L14, L15 }, \
        { L20,   L21,   L22, L23, L24, L25 }, \
        { KC_NO, KC_NO, L32, L33, L34, L35 }, \
        { KC_NO,  L41, L42, L43, L44, L45 }, \
\
        { R00, R01, R02, R03, R04,   R05   }, \
        { R10, R11, R12, R13, R14,   R15   }, \
        { R20, R21, R22, R23, R24,   R25   }, \
        { R30, R31, R32, R33, KC_NO, KC_NO }, \
        { R40, R41, R42, R43, KC_NO, KC_NO } \
\
   }
