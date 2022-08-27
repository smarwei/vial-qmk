#include QMK_KEYBOARD_H

#define _LOWER 3
#define _RAISE 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │F7 │F8 │F9 │F10│F11|F12|
     * ├───┼───┼───┼───┼───┼───┤
     * │ ~ │ 1 │ 2 │ 3 │ 4 | 5 |
     * ├───┼───┼───┼───┼───┼───┤
     * │ A │ Q │ W │ F │ P | B |
     * ├───┼───┼───┼───┼───┼───┤
     * │ A │ A │ R │ S │ T | G |
     * ├───┼───┼───┼───┼───┼───┤
     * │ A │ Z │ , │ . │ / |PRT|
     * └───┴───┼───┼───┼───┴───┘
     *         │B1 │B2 |
     *         └───┼───┼───┬───┐
     *             │RET│SPC│ - │
     *             └───┼───┼───┤
     *                 │LUP│LDN│
     *                 └───┴───┘
     */

    [0] = LAYOUT_left(
        KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,    KC_F6,
        KC_TILD, KC_1,    KC_2,     KC_3,    KC_4,     KC_5,
        KC_TAB,  KC_Q,    KC_W,     KC_F,    KC_P,     KC_B,
        KC_ESC,  KC_A,    KC_R,     KC_S,    KC_T,     KC_G,
        KC_LSFT, KC_Z,    KC_X,     KC_C,    KC_D,     KC_V,
                          KC_BTN1,  KC_BTN2,

                                    KC_A,    MO(3),    KC_LSFT,
                                             KC_LCTL,  KC_LALT
    ),

    [1] = LAYOUT_left(
      _______, _______, _______, _______, _______, _______,
      _______, _______, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC,
      _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,
      _______, KC_HASH, KC_DLR,  KC_PIPE, KC_TILD, KC_GRV, 
      _______, _______, _______, _______, _______, _______,
                        _______, _______,

                                 KC_A,    MO(2),    KC_LSFT,
                                          KC_LCTL,  KC_LALT
    ),

    [2] = LAYOUT_left(
      _______, _______, _______, _______, _______, _______,
      _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN,
      _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
      _______, _______, KC_TAB,  _______, KC_ENT,  _______,
      _______, _______, _______, _______, _______, _______,
                        _______, _______,

                                 _______, _______,  _______,
                                          _______,  _______ 
    ),

    [3] = LAYOUT_left(
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
      _______, KC_ESC,  KC_WH_U, KC_WBAK, KC_WFWD, KC_MS_U,
      _______, KC_LALT, KC_WH_D, KC_LSFT, KC_LCTL, KC_MS_D,
      _______, KC_WH_L, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, 
                        _______, _______,

                                 KC_A,    _______,  KC_LSFT,
                                          KC_LCTL,  KC_LALT
    )

};
