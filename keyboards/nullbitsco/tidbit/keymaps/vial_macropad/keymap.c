/* Copyright 2021 Jay Greco
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

enum layers {
    _BASE = 0,
    _VIA1,
    _VIA2,
    _VIA3,
    _VIA4
};

#define MAX_LEN_LINE 6

#include "oled_management.h"

const rgblight_segment_t PROGMEM l_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, 2, 158, 255}
);

const rgblight_segment_t PROGMEM l_find_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_BLUE}
);

const rgblight_segment_t PROGMEM l_excel_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_CORAL}
);

const rgblight_segment_t PROGMEM l_git_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_GREEN}
);
const rgblight_segment_t PROGMEM l_layer_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_RED}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    l_base_layer,
    l_find_layer,
    l_excel_layer,
    l_git_layer,
    l_layer_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    oled_on();
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _VIA1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _VIA2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _VIA3));
    rgblight_set_layer_state(4, layer_state_cmp(state, _VIA4));
    return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
                                                    LCTL(KC_X),    KC_F10,            LCTL(KC_N),
    KC_UP,              KC_DOWN,        KC_F24,     LCTL(KC_W),    LCTL(LSFT(KC_T)),  LCTL(KC_S),
    LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),   LALT(KC_X), LCTL(KC_Z),    LCTL(KC_Y),        KC_NO,
    ___,                ___,            ___,        KC_F2,         KC_F1,             LCTL(LSFT(KC_R)),
    KC_F17,             KC_F18,         KC_F14,     LCTL(KC_E),    KC_F12,            LCTL(KC_C)
    ),


    [_VIA1] = LAYOUT(
                                  KC_TRNS,         KC_TRNS,   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, LSFT(LCTL(KC_F)), LCTL(KC_H), KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, LCTL(KC_F),       KC_F12,     KC_TRNS
    ),

    [_VIA2] = LAYOUT(
                                              KC_TRNS, KC_TRNS,   KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
    LCTL(KC_PGUP), LCTL(KC_PGDN), KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS, KC_COLN,  KC_EQL,     KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS, KC_LPRN,  KC_RPRN,    KC_TRNS
    ),

    [_VIA3] = LAYOUT(
                                                    KC_TRNS, KC_TRNS,   KC_TRNS,
    KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS, KC_TRNS,   KC_TRNS,
    LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),   KC_TRNS,    KC_TRNS, KC_TRNS,   KC_TRNS,
    KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS, KC_TRNS,   KC_TRNS,
    KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS, KC_TRNS,   KC_TRNS,
    ),

    [_VIA4] = LAYOUT(
                    ___, ___, ___,
    ___, ___, ___, ___, ___, TO(4),
    ___, ___, ___, ___, ___, ___,
    ___, ___, TO(0), TO(1), TO(2), ___,
    ___, ___, ___,   TO(3), ___, ___
    )
};
