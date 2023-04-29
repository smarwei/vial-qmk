#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    LAYR,
};

//  Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // TD(0) = On Tap -> MO(2); On hold -> MO(2); On double tap -> TO(3)
    [LAYR] = ACTION_TAP_DANCE_DOUBLE(MO(2), TO(0)),
};

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
        RESET,   KC_Q,    KC_W,     KC_F,    KC_P,     KC_B,        KC_J,    KC_L,    KC_U,    KC_Y,     MO(3),    KC_NO,
        KC_ESC,  KC_A,    KC_R,     KC_S,    KC_T,     KC_G,        KC_M,    KC_N,    KC_E,    KC_I,     KC_O,     KC_NO,
        CAPSWRD, KC_Z,    KC_X,     KC_C,    KC_D,     KC_V,        KC_K,    KC_H,    KC_COMM, KC_DOT,   KC_SLASH, KC_NO,
                 KC_LGUI,  KC_LALT, MO(1),   KC_LSFT,  KC_NO,       KC_NO,   KC_SPACE,MO(2), KC_NO, KC_NO

    ),

    [1] = LAYOUT_std(
      _______, KC_ESC,  KC_WH_U, KC_WBAK, KC_WFWD, KC_MS_U,        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_ESC,
      _______, KC_LALT, KC_WH_D, KC_LSFT, KC_LCTL, KC_MS_D,        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_MENU,
      _______, KC_WH_L, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,        KC_BTN1, KC_BTN2, KC_BTN3, KC_MS_L, KC_MS_R, KC_WH_R,
                        _______, _______,                                            KC_0,    KC_INS,

                                          _______,  _______,       _______, _______,
                                                    _______,       _______

    ),

    [2] = LAYOUT_std(
       _______,    _______,    _______,    _______,    _______,   _______,       S(KC_1),    S(KC_COMM), S(KC_DOT),  KC_EQL,     S(KC_7),   _______,
       _______,    _______,    _______,    _______,    _______,   _______,       S(KC_SLSH), S(KC_9),    S(KC_0),    KC_MINS,    S(KC_SCLN),S(KC_2),
       _______,    _______,    _______,    _______,    _______,   _______,       S(KC_EQL),  S(KC_5),    S(KC_COMM), KC_DOT,     KC_SCLN,   _______,
                               _______,    _______,                                                      _______,    _______,
                                                        _______,  _______,       _______, _______,
                                                                  _______,       _______

    ),

    [3] = LAYOUT_std(
        _______,    _______,    _______,    _______,    _______,   _______,       KC_PSCR, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_F12,
        _______,    _______,    _______,    _______,    _______,   _______,       KC_0,    KC_4,    KC_5,    KC_6,    KC_0,    _______,
        _______,    _______,    _______,    _______,    _______,   _______,       KC_0,    KC_1,    KC_2,    KC_3,    KC_DOT,  KC_COMM,
                                _______,    _______,                                                _______, _______,

                                                         _______,  _______,       _______, TO(0),
                                                                   _______,       _______
    )
};
