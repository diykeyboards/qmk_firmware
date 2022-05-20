#include QMK_KEYBOARD_H

// Define layer nicknames
#define _QWERTY 0
#define _RAISE 2
#define _LOWER 4

// Define key nicknames to make mapping easier
#define _______ KC_TRNS
#define SFT_ESC  SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT  SFT_T(KC_ENT)
#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1
#define RAISE MO(1)
#define LOWER MO(2)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* QWERTY Layer
   * +-----------------------------------------+                    +-----------------------------------------+
   * | TAB  |   q  |   w  |   e  |   r  |   t  |                    |   y  |   u  |   i  |   o  |   p  |  -   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * | CTL  |   a  |   s  |   d  |   f  |   g  |                    |   h  |   j  |   k  |   l  |   ;  |  '   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * | SHFT |   z  |   x  |   c  |   v  |   b  |                    |   n  |   m  |   ,  |   .  |   /  |  \   |
   * +------+------+------+------+-------------+                    +-------------+------+------+------+------+
   *               |  [   |   ]  |                                                |  +   |  =   |
   *               +-------------+-------------+                    +-------------+-------------+
   *                      |RAISE | SPACE | ESC  |                    |  END | ENT  | LOWER|
   *                      |------|------+------|                    |------+------+------|
   *                             | HOME  | BSPC |                    |  DEL | LALT |
   *                             +-------------+                    +-------------+   */
  [0] = LAYOUT_6x4(

     KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_MINS,
    KC_LCTL,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,   KC_QUOT,
    KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH, KC_BSLASH,
                    KC_LBRC,KC_RBRC,                                                KC_PLUS, KC_EQL,
                              MO(1), KC_SPC, KC_ESC,                 KC_END, KC_ENT,  MO(2),
                                     KC_HOME, KC_BSPC,                KC_DEL, KC_LALT

  ),

  /* RAISE Layer
   * +-----------------------------------------+                    +-----------------------------------------+
   * |      |      |      |      |      |   [  |                    |   ]  | NP7  | NP8  | NP9  |      |  +   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |      | HOME | PGUP | PGDN |  END |   (  |                    |   )  | NP4  | NP5  | NP6  |  -   |  |   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |RESET |      |      |      |      |      |                    |      | NP1  | NP2  | NP3  |  =   |  _   |
   * +------+------+------+------+-------------+                    +-------------+------+------+------+------+
   *               |      | PSCR |                                                | NP0  | NP0  |
   *               +-------------+-------------+                    +-------------+-------------+
   *                      |      |      |      |                    |      |      |      |
   *                      |------|------+------|                    |------+------+------|
   *                             |      ||                    |      |      |
   *                             +-------------+                    +-------------+   */

  [1] = LAYOUT_6x4(
//QK_BOOT
    _______, _______, _______, _______, _______, KC_LBRC,           KC_RBRC,  KC_P7, KC_P8,  KC_P9, _______, KC_PLUS,
    _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END , KC_LPRN,           KC_RPRN,  KC_P4, KC_P5,  KC_P6, KC_MINS, KC_PIPE,
      RESET, _______, _______, _______, _______, _______,           _______,  KC_P1, KC_P2,  KC_P3,  KC_EQL, KC_UNDS,
                      _______, KC_PSCR,                                              KC_P0,  KC_P0,
                               _______, _______, _______,           _______, _______, _______,
                                        _______, _______,           _______, _______
  ),

  /* LOWER Layer
   * +-----------------------------------------+                    +-----------------------------------------+
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  |  F10 | F11  | F12  |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |  1   |   2  |  3   |  4   |  5   |  6   |                    |  7   |  8   |  9   |  0   |  -   |  =   |
   * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                    |  UP  |  DN  | LEFT | RGHT |      |RESET |
   * +------+------+------+------+-------------+                    +-------------+------+------+------+------+
   *       RGB-->  |  TOG  | MODE|                                                |CLICK |AUDIO |
   *               +-------------+-------------+                    +-------------+-------------+
   *             RGB-->   |      | HUE  | SAT  |                    | TOG  | MODE |      |  <-- MUSIC MODE
   *                      |------|------+------|                    |------+------+------|
   *                     RGB-->  | VAL+ | VAL- |                    |CLICK+|CLICK-|
   *                             +-------------+                    +-------------+   */

  [2] = LAYOUT_6x4(

         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,           KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,            KC_7,    KC_8,    KC_9,   KC_0,  KC_MINS,  KC_EQL,
       _______, _______, _______, _______, _______, _______,           KC_UP, KC_DOWN, KC_LEFT, KC_RIGHT, _______,  RESET,
                         RGB_TOG, RGB_MOD,                                             CK_TOGG,   AU_TOG,
                                  _______, RGB_HUI, RGB_SAI,          MU_TOG,  MU_MOD, _______,
                                           RGB_VAI, RGB_VAD,           CK_UP, CK_DOWN
  ),

};


#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

//#define _QWERTY 0
//#define _RAISE 1
//#define _LOWER 2
#define _ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case _QWERTY:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
        case _LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case _RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case _ADJUST:
        case _ADJUST|_LOWER:
        case _ADJUST|_RAISE:
        case _ADJUST|_LOWER|_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

static void oled_render_logo(void) {
    static const char PROGMEM raw_logo[] = {
      // 'diyk_bit_logo_128x32', 128x32px
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
      0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0x80, 0xf8, 0xf8, 0xf8,
      0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0x80,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
      0xf8, 0x38, 0x08, 0x00, 0x80, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0x38, 0xd8,
      0xe0, 0x38, 0x38, 0xf8, 0xf8, 0xf8, 0xf8, 0x78, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x0f, 0x07, 0x03, 0x03, 0x81, 0xf1,
      0xf1, 0xf1, 0xf1, 0x01, 0x03, 0x03, 0x07, 0x0f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xfe, 0xf0, 0x80, 0xc0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x0f, 0x03,
      0xc0, 0xe0, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xe0, 0xf0, 0x7c, 0x9f, 0xe7, 0x7b, 0xbc, 0xcf, 0xf3,
      0xf9, 0xfe, 0x3f, 0x1f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x80, 0x07, 0x07, 0x07, 0x0f, 0x7f,
      0x7f, 0x7f, 0x7f, 0x07, 0x07, 0x07, 0x07, 0x80, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0x07, 0x1f, 0x7f, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x1f, 0x07, 0x01, 0xc0, 0xf0, 0xfc, 0xff,
      0x0f, 0xcf, 0xff, 0x03, 0xfd, 0xfd, 0xfd, 0x1d, 0x7c, 0xff, 0xf3, 0xcd, 0xbe, 0x7f, 0xff, 0xff,
      0xff, 0xfc, 0xf0, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc,
      0xfc, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x1f, 0x0f, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
      0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
      0x00, 0xff, 0xff, 0xc0, 0xcf, 0xff, 0xff, 0x00, 0x00, 0x01, 0x07, 0x0f, 0x3f, 0xfe, 0xf9, 0xf7,
      0xcf, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0xf0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

void oled_task_user(void) {
    if (is_master) {
        //oled_render_logo();
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
