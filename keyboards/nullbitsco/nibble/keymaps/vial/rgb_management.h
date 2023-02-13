const rgblight_segment_t PROGMEM l_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, 2, 158, 255}
);

const rgblight_segment_t PROGMEM l_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 10, HSV_BLUE}
);

// const rgblight_segment_t PROGMEM l_via2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 10, HSV_CORAL}
// );

// const rgblight_segment_t PROGMEM l_via3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 10, HSV_GREEN}
// );

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    l_base_layer,
    l_fn_layer
    // l_via2_layer,
    // l_via3_layer
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
    //oled_on();
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _VIA1));
    // rgblight_set_layer_state(2, layer_state_cmp(state, _VIA2));
    // rgblight_set_layer_state(3, layer_state_cmp(state, _VIA3));
    return state;
}
