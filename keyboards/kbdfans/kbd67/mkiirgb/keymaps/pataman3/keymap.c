/*
 * Legume Preparation Keymap v1.0
 *
 * Copyright 2021 Bryan Bean <@pataman3>
 */

#include QMK_KEYBOARD_H

enum keymap_layers {
  _BASE,
  _FUNC,
  _BRAC,
  _HTKY,
  _SYMB,
  _NUMB,
  _NAVI,
  _G1,
  _G2
};
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

/*
#define R0_LL LT(NAVI, KC_ESC)
#define R0_LC LT(SYMB, KC_SPC)
#define R0_LR LT(NUMB, KC_TAB)
#define R0_RL LT(HTKY, KC_ENT)
#define R0_RC LT(BRAC, KC_BSPC)
#define R0_RR LT(FUNC, KC_DEL)
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65_ansi_blocker( // base
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,  KC_J,  KC_L,  KC_U,  KC_Y,  KC_QUES,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    LT(_NUMB,  KC_SPC),  R2_A,  R2_R,  R2_S,  R2_T,  KC_G,  KC_M,  R2_N,  R2_E,  R2_I,  R2_O,  LT(_BRAC,  KC_BSPC),  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,  KC_K,  KC_H,  KC_COSE,  KC_DOCO,  KC_QUOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  LT(_NAVI,  KC_ESC),  LT(_SYMB,  KC_TAB),  KC_SPC,  LT(_HTKY,  KC_ENT),  LT(_FUNC,  KC_DEL),  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [_FUNC] = LAYOUT_65_ansi_blocker( // functions
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,   KC_F12,    KC_F7,    KC_F8,    KC_F9,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,   KC_F11,    KC_F4,    KC_F5,    KC_F6,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,   KC_F10,    KC_F1,    KC_F2,    KC_F3,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [_BRAC] = LAYOUT_65_ansi_blocker( // brackets
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX, KC_GRAVE,  KC_PIPE,  KC_SLSH,  KC_BSLS,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_LPRN,  KC_RPRN,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_LABK,  KC_RABK,  KC_LCBR,  KC_RCBR,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [_HTKY] = LAYOUT_65_ansi_blocker( // hotkeys
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX
    ),
  [_SYMB] = LAYOUT_65_ansi_blocker( // symbols
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  KC_AMPR,  KC_ASTR,  KC_UNDS,  KC_PLUS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_MINS,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  KC_EXLM,    KC_AT,  KC_HASH,   KC_EQL,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [_NUMB] = LAYOUT_65_ansi_blocker( // numbers
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,     KC_7,     KC_8,     KC_9,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,     KC_4,     KC_5,     KC_6,     KC_0,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,     KC_1,     KC_2,     KC_3,   KC_DOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX

  ),
  [_NAVI] = LAYOUT_65_ansi_blocker( // navigation
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TO(_G1),  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,    RESET,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_TRNS,  XXXXXXX,  XXXXXXX,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_TOG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
    XXXXXXX,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [_G1] = LAYOUT_65_ansi_blocker( // games 1
     KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_MINS,   KC_EQL,  KC_BSPC,   KC_DEL,\
     KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_I,     KC_O,     KC_U,     KC_P,  KC_LBRC,  KC_RBRC,  KC_BSLS,  TO(_G1),\
    KC_CAPS,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,  KC_SCLN,  KC_QUOT,   KC_ENT,  TO(_G2),\
    KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SLSH,  KC_RSFT,    KC_UP,    TO(0),\
    KC_LCTL,  KC_LGUI,  KC_LALT,   KC_SPC,  KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),
  [_G2] = LAYOUT_65_ansi_blocker( // games 2
     KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_MINS,   KC_EQL,  KC_BSPC,   KC_DEL,\
     KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_I,     KC_O,     KC_U,     KC_P,  KC_LBRC,  KC_RBRC,  KC_BSLS,  TO(_G1),\
    KC_CAPS,     KC_A,     KC_S,     KC_D,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,     KC_K,     KC_L,  KC_SCLN,  KC_QUOT,   KC_ENT,  TO(_G2),\
    KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SLSH,  KC_RSFT,    KC_UP,    TO(0),\
    KC_LCTL,  KC_LGUI,  KC_LALT,   KC_SPC,  KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),
};

void matrix_init_user(void)
{
  //user initialization
}

void matrix_scan_user(void)
{
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
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
