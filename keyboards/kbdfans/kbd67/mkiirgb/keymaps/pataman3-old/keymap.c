/*
 * CRKBD Preparation "Cornelius" Keymap v1.0
 *
 * Copyright 2021 Bryan Bean <@pataman3>
 */

#include QMK_KEYBOARD_H

enum custom_keycodes {
  KC_DOCO = SAFE_RANGE,
  KC_COSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_65_ansi_blocker(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		   KC_TAB,     KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_J,     KC_L,     KC_U,     KC_Y,  KC_QUES,  KC_GESC,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
	    KC_BSPC,     KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_M,     KC_N,     KC_E,     KC_I,     KC_O,   KC_ENT,  XXXXXXX,  XXXXXXX,\
		  KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,     KC_K,     KC_H,  KC_COSE,  KC_DOCO,  KC_QUOT,  KC_RSFT,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,  KC_LCTL,    TG(2),   KC_SPC,  KC_RALT,  KC_RCTL,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [1] = LAYOUT_65_ansi_blocker(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		   KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_I,     KC_O,     KC_U,     KC_P,  KC_GESC,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
	    KC_BSPC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,  KC_QUES,   KC_ENT,  XXXXXXX,  XXXXXXX,\
		  KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  KC_COSE,  KC_DOCO,  KC_QUOT,  KC_RSFT,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,  KC_LCTL,    TG(2),   KC_SPC,  KC_RALT,  KC_RCTL,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [2] = LAYOUT_65_ansi_blocker(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		   KC_TAB,  KC_EXLM,    KC_AT,  KC_HASH,   KC_DLR,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_MINS,   KC_EQL,  KC_GESC,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
	    KC_BSPC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_ENT,  XXXXXXX,  XXXXXXX,\
		  KC_LSFT,  KC_LABK,  KC_LCBR,  KC_LBRC,  KC_LPRN,  KC_SLSH,  KC_BSLS,  KC_RPRN,  KC_RBRC,  KC_RCBR,  KC_RABK,  KC_RSFT,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,  KC_LCTL,    TG(2),   KC_SPC,    TO(3),  KC_RCTL,  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [3] = LAYOUT_65_ansi_blocker(
			XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
	    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,    TO(1),    TO(0),  XXXXXXX,    TO(3),    TO(4),  XXXXXXX,  XXXXXXX,  XXXXXXX
  ),
  [4] = LAYOUT_65_ansi_blocker(
		  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
			  RESET,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
			XXXXXXX,  RGB_MOD, RGB_RMOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  RGB_SPI,  RGB_SPD,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,\
		  XXXXXXX,    TO(1),    TO(0),  RGB_TOG,    TO(3),    TO(4),  XXXXXXX,  XXXXXXX,  XXXXXXX
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
