#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,   KC_NO,   KC_2,
        KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D
    )
};
