/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, KC_SCLN, KC_COMM,  KC_DOT,    KC_P,    KC_Y,                         KC_F,    KC_G,    KC_C,    KC_R,    KC_L, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                         KC_D,    KC_H,    KC_T,    KC_N,    KC_S,   MO(3),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_QUOT,    KC_Q,    KC_J,    KC_K,    KC_X,                         KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_ENT,     KC_SPC,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, XXXXXXX, XXXXXXX, KC_PSCR, KC_SCRL, KC_PAUS,                      XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB, XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,                      KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX,  KC_INS, KC_HOME, KC_PGUP,                      XXXXXXX,  KC_DEL,  KC_END, KC_PGDN, XXXXXXX, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, XXXXXXX,  KC_ENT,     KC_SPC, XXXXXXX, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, XXXXXXX, KC_HASH,  KC_DLR, KC_PERC, KC_AMPR,                      KC_TILD, KC_LBRC, KC_RBRC, KC_PIPE, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB, XXXXXXX, KC_SLSH,   KC_AT, KC_CIRC, KC_DQUO,                      KC_EXLM, KC_LPRN, KC_RPRN, KC_DQUO, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, KC_PLUS, KC_MINS, KC_UNDS,                      KC_QUES, KC_LCBR, KC_RCBR, KC_ASTR, XXXXXXX, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(4),  KC_ENT,     KC_SPC, XXXXXXX, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC, XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_TAB, XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8,                      XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,                      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_0, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(4),  KC_ENT,     KC_SPC, XXXXXXX, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX,RGB_RMOD, RGB_MOD, RGB_VAI, RGB_VAD,                      RGB_M_P, RGB_M_B, RGB_M_R,RGB_M_SW, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, RGB_SAI, RGB_SAD,                     RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_HUD,                      RGB_M_T,   BL_UP, BL_DOWN, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    KC_TRNS, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;
  }
  return rotation;
}
#endif

#define L_DVORAK 0
#define L_NAVIGATE 2
#define L_SYMBOLS 4
#define L_NUMPAD 8
#define L_ADJUST 16

void oled_render_layer_state(void) {
  oled_write_P(PSTR("Layer: "), false);
  switch (layer_state) {
    case L_DVORAK:
      oled_write_ln_P(PSTR("Dvorak"), false);
      break;
    case L_NAVIGATE:
      oled_write_ln_P(PSTR("Navigate"), false);
      break;
    case L_SYMBOLS:
      oled_write_ln_P(PSTR("Symbols"), false);
      break;
    case L_NUMPAD:
      oled_write_ln_P(PSTR("Numpad"), false);
      break;
    case L_ADJUST:
    case L_ADJUST|L_NAVIGATE:
    case L_ADJUST|L_SYMBOLS:
    case L_ADJUST|L_NAVIGATE|L_SYMBOLS:
      oled_write_ln_P(PSTR("Adjust"), false);
      break;
  }
}
