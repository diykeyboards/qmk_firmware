/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

//#define PRODUCT_ID      0x3636
//#define DEVICE_VER      0x0001
#define PRODUCT         Partycl (4x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, B7 }

#define DIODE_DIRECTION COL2ROW
//#define DIODE_DIRECTION ROW2COL

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 50
#define RGBLIGHT_SPLIT {25,25}
//#define RGBLIGHT_ANIMATIONS

/* Limit max LED brightness */
//#define RGBLIGHT_LIMIT_VAL 200

// Audio
#define AUDIO_PIN B6
#define NO_MUSIC_MODE

// Space Savings
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

// Define Variables
#define has_usb() is_keyboard_master()
#define is_master is_keyboard_master()
