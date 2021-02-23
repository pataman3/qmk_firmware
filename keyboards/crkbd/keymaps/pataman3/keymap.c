/*
 * Legume Keymap v1.0
 *
 * Copyright 2021 Bryan Bean <@pataman3>
 */

#include QMK_KEYBOARD_H

enum custom_keycodes {
  KC_DOCO = SAFE_RANGE,
  KC_COSE
};

#define R2_A LGUI_T(KC_A)
#define R2_R LALT_T(KC_R)
#define R2_S LCTL_T(KC_S)
#define R2_T LSFT_T(KC_T)
#define R2_N RSFT_T(KC_N)
#define R2_E RCTL_T(KC_E)
#define R2_I LALT_T(KC_I)
#define R2_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3( // base
            XXXXXXX,     KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,                         KC_J,     KC_L,     KC_U,     KC_Y,  KC_QUES,          XXXXXXX, \
    LT(5,   KC_SPC),     R2_A,     R2_R,     R2_S,     R2_T,     KC_G,                         KC_M,     R2_N,     R2_E,     R2_I,     R2_O,  LT(2,  KC_BSPC), \
            XXXXXXX,     KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,                         KC_K,     KC_H,  KC_COSE,  KC_DOCO,  KC_QUOT,          XXXXXXX, \
                        LT(6,   KC_ESC),    LT(5,   KC_SPC),    LT(4,   KC_TAB),    LT(3,   KC_ENT),    LT(2,  KC_BSPC),    LT(1,   KC_DEL)
  ),
  [1] = LAYOUT_split_3x6_3( // functions
			      XXXXXXX,   KC_F12,    KC_F7,    KC_F8,    KC_F9,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
			      KC_TRNS,   KC_F11,    KC_F4,    KC_F5,    KC_F6,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
		        XXXXXXX,   KC_F10,    KC_F1,    KC_F2,    KC_F3,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  ),
  [2] = LAYOUT_split_3x6_3( // brackets
			      XXXXXXX, KC_GRAVE,  KC_PIPE,  KC_SLSH,  KC_BSLS,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
			      KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_LPRN,  KC_RPRN,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
		        XXXXXXX,  KC_LABK,  KC_RABK,  KC_LCBR,  KC_RCBR,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  ),
  [3] = LAYOUT_split_3x6_3( // hotkeys
			      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
			      KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
		        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  ),
  [4] = LAYOUT_split_3x6_3( // numbers
	          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,     KC_7,     KC_8,     KC_9,  XXXXXXX,  XXXXXXX, \
			      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,     KC_4,     KC_5,     KC_6,     KC_0,  KC_TRNS, \
		        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,     KC_1,     KC_2,     KC_3,   KC_DOT,  XXXXXXX, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  ),
  [5] = LAYOUT_split_3x6_3( // symbols
			      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,  KC_AMPR,  KC_ASTR,  KC_UNDS,  KC_PLUS,  XXXXXXX, \
			      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_MINS,  KC_TRNS, \
		        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,  KC_EXLM,    KC_AT,  KC_HASH,   KC_EQL,  XXXXXXX, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  ),
  [6] = LAYOUT_split_3x6_3( // navigation
			      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    RESET, \
			      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_TRNS, \
		        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, \
                                                    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  )
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
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

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_COSE:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
          unregister_code16(KC_LSFT);
          register_code16(KC_SCLN);
          register_code16(KC_LSFT);
        } else if (get_mods() & MOD_BIT(KC_RSFT)) {
          unregister_code16(KC_RSFT);
          register_code16(KC_SCLN);
          register_code16(KC_RSFT);
        } else {
          register_code16(KC_COMM);
        }
      } else {
        unregister_code16(KC_COLN);
        unregister_code16(KC_COMM);
      }
      return false;
      break;
    case KC_DOCO:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT)) {
          register_code16(KC_COLN);
        } else {
          register_code16(KC_DOT);
        }
      } else {
        unregister_code16(KC_COLN);
        unregister_code16(KC_DOT);
      }
      return false;
      break;
    default:
      return true;
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
