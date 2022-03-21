#include QMK_KEYBOARD_H

/*
* ┌───┬───┬───┐
* │K00│   │K02│
* ├───┼───┼───┤
* │K10│K11│K12│
* ├───┼───┼───┤
* │K20│K21│K22│
* └───────┴───┘
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TO(0),  TO(1),
        KC_Q,   KC_W,   KC_E,
        KC_A,   KC_S,   KC_D
    ),
    [1] = LAYOUT(
        TO(0),  TO(1),
        KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6
    )
};
