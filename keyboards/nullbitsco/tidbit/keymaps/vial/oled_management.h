
#ifdef OLED_ENABLE
#include <stdio.h>
oled_rotation_t oled_init_user(oled_rotation_t rotation) {

   return OLED_ROTATION_270;
}

bool oled_task_user(void) {

    oled_set_cursor(0,0);

    oled_write_ln("Base", IS_LAYER_ON(_BASE));
    oled_write_ln("Evnir", IS_LAYER_ON(_VIA1));
    oled_write_ln("Mcro1", IS_LAYER_ON(_VIA2));
    oled_write_ln("", false);

    // // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    return true;
}

#endif
