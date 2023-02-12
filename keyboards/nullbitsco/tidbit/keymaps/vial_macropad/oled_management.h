
#ifdef OLED_ENABLE
#include <stdio.h>
oled_rotation_t oled_init_user(oled_rotation_t rotation) {

   return OLED_ROTATION_270;
}

bool oled_task_user(void) {

    oled_set_cursor(0,0);

    oled_write_ln("Base", IS_LAYER_ON(_BASE));
    oled_write_ln("Find", IS_LAYER_ON(_VIA1));
    oled_write_ln("Excl", IS_LAYER_ON(_VIA2));
    oled_write_ln("Git",  IS_LAYER_ON(_VIA3));
    oled_write_ln("Lyer", IS_LAYER_ON(_VIA4));
    oled_write_ln("", false);

    return true;
}

#endif
