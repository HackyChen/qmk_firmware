/* Copyright 2020 foostan
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

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LGUI_T(KC_S)
#define HOME_R LALT_T(KC_R)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RGUI_T(KC_E)
#define HOME_O RCTL_T(KC_O)
#define HOME_I LALT_T(KC_I)


const uint16_t PROGMEM colon_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM caps_word_combo[] = {HOME_T, HOME_N, COMBO_END};
const uint16_t PROGMEM bang_combo[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = { KC_H, KC_COMMA, COMBO_END};

combo_t key_combos[] = {
    COMBO(colon_combo, KC_COLN),
    COMBO(bang_combo, KC_EXLM),
    COMBO(caps_word_combo, CW_TOGG),
    COMBO(underscore_combo, KC_UNDS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
     KC_GRV, KC_Q, KC_W,    KC_F,    KC_P,    KC_B,    KC_J,   KC_L,          KC_U,          KC_Y,    KC_SCLN, _______,
     CTL_T(KC_ESC), HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,   KC_M,          HOME_N,        HOME_E,   HOME_I,  HOME_O, KC_QUOT,
     _______, KC_Z, KC_X,    KC_C,    KC_D,    KC_V,    KC_K,   KC_H,          KC_COMMA,      KC_DOT,  LT(3, KC_SLSH), _______,
     _______, _______, _______, LT(5, KC_ESC),  LT(1, KC_SPC),  LT(3, KC_TAB), LT(1, KC_ENT), LT(2, KC_BSPC), LT(2, KC_DEL), _______,  _______, _______
  ),
  [1] = LAYOUT( // Numbers
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
     _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,  _______
  ),
  [2] = LAYOUT( // Symbols
     _______, KC_GRV, KC_DOLLAR, KC_HASH, KC_PERC, KC_EXLM,   KC_PIPE, KC_PLUS,  KC_LPRN, KC_RPRN,  KC_LT,   KC_GT,
     _______, KC_AMPR, KC_AT, KC_ASTR, _______, KC_GRV,       _______, KC_EQUAL, KC_LBRC, KC_RBRC,  KC_GT,   KC_DQT,
     _______, KC_PERC, KC_EXLM, KC_CIRC, KC_DOLLAR, _______,  _______, KC_MINS,  KC_LCBR, KC_RCBR,  KC_BSLS, _______,
     _______, _______, _______, _______, _______, _______,    _______, _______, _______,  _______, _______,  _______
  ),
  [3] = LAYOUT( // Navigation
     _______, _______, _______, MS_UP,   _______, _______, _______, _______, _______, _______,  _______, _______,
     _______, _______, MS_LEFT, MS_DOWN, MS_RGHT, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______,
     _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,   _______, _______,
     _______, _______, _______, _______, _______, _______, MS_BTN2, MS_BTN1, MS_BTN3, _______, _______, _______
  ),
  [4] = LAYOUT(
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [5] = LAYOUT(
     QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
};
