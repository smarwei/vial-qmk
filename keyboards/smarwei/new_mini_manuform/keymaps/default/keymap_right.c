#include QMK_KEYBOARD_H

#define _LOWER 3
#define _RAISE 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ J │ L │ U │ Y │ ; |F24|
     * ├───┼───┼───┼───┼───┼───|
     * │ M │ N │ E │ I │ O |CPS|
     * ├───┼───┼───┼───┼───┼───|
     * │ K │ H │ , │ . │ / |PRT|
     * └───┴───┼───┼───┼───┴───┘
     *         │ - │ = |
     * ┌───┬───┼───┼───┘
     * │RET│SPC│MO1│
     * ├───┼───┼───┘
     * │LUP│LDN│
     * └───┴───┘
     */
    [0] = LAYOUT_std(
        KC_J,    KC_L,    KC_U,    KC_Y,     KC_SCLN,  KC_F24,
        KC_M,    KC_N,    KC_E,    KC_I,     KC_O,     KC_CAPS,
        KC_K,    KC_H,    KC_COMM, KC_DOT,   KC_SLASH, KC_RSFT,
                          KC_MINS, KC_EQL,

        KC_ENT,  MO(3),   KC_SPC,
        KC_LGUI, KC_LSFT
    ),

    [1] = LAYOUT_std(
        S(KC_1),    S(KC_COMM), S(KC_DOT),  KC_EQL,  S(KC_7),    _______,
        S(KC_SLSH), S(KC_9),    S(KC_0),    KC_MINS, S(KC_SCLN), S(KC_2),
        S(KC_EQL),  S(KC_5),    S(KC_COMM), KC_DOT,  KC_SCLN,    _______,
                                _______,    _______,

        _______,    _______,    _______,
        _______,    _______
    ),

    [2] = LAYOUT_std(
        KC_PSCR, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_F12,
        KC_0,    KC_4,    KC_5,    KC_6,    KC_0,    _______,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_DOT,  KC_COMM,
                          KC_0,    KC_0,

        _______, _______, _______,
        _______, _______
    ),

    [3] = LAYOUT_std(
        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_ESC,
        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_MENU,
        KC_BTN1, KC_BTN2, KC_BTN3, KC_MS_L, KC_MS_R, KC_WH_R,
                          KC_0,    KC_0,

        _______, _______, _______,
        _______, _______
    )
};
