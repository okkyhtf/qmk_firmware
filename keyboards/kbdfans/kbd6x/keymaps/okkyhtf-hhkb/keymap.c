/* Copyright 2018 MechMerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// stock hhkb as referenced by https://i.imgur.com/QoBTDHf.png 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
      KC_TRNS, KC_LALT, KC_LGUI,                   KC_SPACE,                 KC_RGUI, KC_RALT, KC_TRNS
      ),

  [1] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
      KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, RESET,
      KC_TRNS, KC_VOLU, KC_VOLD, KC_MUTE, KC_MSTP, KC_TRNS, KC_ASTR, KC_SLSH, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PLUS, KC_UNDS, KC_END,  KC_PGDN, KC_DOWN, RGB_TOG, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   RGB_MODE_RGBTEST,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),
};



void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

