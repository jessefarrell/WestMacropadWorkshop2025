// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// define layers
#define _NUM 0
#define _BACKLIGHT 1

// define custom keycodes
#define KC_WEST_1 LT(_BACKLIGHT, KC_1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_NUM] = LAYOUT(
        KC_WEST_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6,
        KC_7,   KC_8,   KC_9
    ),
    [_BACKLIGHT] = LAYOUT(
        _______,QK_BACKLIGHT_TOGGLE,   QK_BACKLIGHT_STEP,
        QK_BACKLIGHT_UP,   QK_BACKLIGHT_DOWN,   QK_BACKLIGHT_TOGGLE_BREATHING,
        KC_7,   QK_BACKLIGHT_ON,   QK_BACKLIGHT_OFF
    )
};
