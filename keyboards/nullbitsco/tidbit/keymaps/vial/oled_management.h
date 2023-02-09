
#ifdef OLED_DRIVER_ENABLE
#include <stdio.h>
oled_rotation_t oled_init_user(oled_rotation_t rotation) {

   return OLED_ROTATION_270;
}

void oled_task_user(void) {

    oled_set_cursor(0,0);

    for (enum layers layer = _BASE; layer < _VIA3; layer++) {
        // reading the string from flash memory - see https://www.arduino.cc/reference/en/language/variables/utilities/progmem/
        // This is why the array is const and PROGMEM'ed
        oled_write(layer_name[layer], IS_LAYER_ON(layer)); // we highlight the layer we're on
    }

    oled_write_ln("", false);

    // // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

#endif
