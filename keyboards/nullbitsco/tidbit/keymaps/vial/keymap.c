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
    _VIA2
};

#define MAX_LEN_LINE 6

#include "oled_management.h"

const rgblight_segment_t PROGMEM l_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, 2, 158, 255}
);

const rgblight_segment_t PROGMEM l_envir_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM l_mcro1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 7, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    l_base_layer,
    l_envir_layer,
    l_mcro1_layer
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
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _VIA1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _VIA2));
    return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
                            KC_PSLS, KC_PAST, KC_PMNS,
    KC_VOLD, KC_VOLU, KC_P7, KC_P8,   KC_P9,   KC_PPLS,
    KC_TRNS, KC_TRNS, KC_P4, KC_P5,   KC_P6,   KC_PPLS,
    KC_TRNS, KC_TRNS, KC_P1, KC_P2,   KC_P3,   KC_PENT,
    KC_TRNS, KC_TRNS, KC_P0, KC_P0,   KC_PDOT, KC_PENT
    ),

    [_VIA1] = LAYOUT(
                    ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___
    ),

    [_VIA2] = LAYOUT(
                    ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___
    )
};
