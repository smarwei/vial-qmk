
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_std(
        KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,       KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,   KC_F12,
        KC_TILD, KC_1,    KC_2,     KC_3,     KC_4,     KC_5,        KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     SH_TG,
        KC_TAB,  KC_Q,    KC_W,     KC_F,     KC_P,     KC_B,        KC_J,    KC_L,    KC_U,     KC_Y,     TT(3),    KC_F24,
        KC_ESC,  KC_A,    KC_R,     KC_S,     KC_T,     KC_G,        KC_M,    KC_N,    KC_E,     KC_I,     KC_O,     KC_CAPS,
        CAPSWRD, KC_Z,    KC_X,     KC_C,     KC_D,     KC_V,        KC_K,    KC_H,    KC_COMM,  KC_DOT,   KC_SLASH, TT(3),
                          KC_LGUI,  KC_LALT,                                           KC_MINS,  KC_EQL,

                                    OSL(1),  KC_LCTL,  KC_LGUI,      KC_LALT, KC_SPACE,  MO(2),
                                             KC_LSFT,  KC_LSFT,      KC_RALT, KC_ENT

    ),

    [1] = LAYOUT_std(
      _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,
      _______, KC_ESC,  KC_WH_U, KC_WBAK, KC_WFWD, KC_MS_U,        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_ESC,
      _______, KC_TAB,  KC_WH_D, KC_LSFT, KC_LCTL, KC_MS_D,        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_MENU,
      _______, KC_WH_L, KC_UNDO, KC_CUT,  KC_COPY, C(S(KC_V)),     KC_BTN1, KC_BTN2, KC_BTN3, KC_MS_L, KC_MS_R, KC_WH_R,
                        _______, _______,                                            _______, _______,

                                 _______, _______,  _______,       KC_ENT,  _______, _______,
                                          _______,  _______,       _______, _______

    ),

    [2] = LAYOUT_std(
       _______,    _______,    _______,    _______,    _______,   _______,       _______,    _______,    _______,    _______,    _______,   _______,
       _______,    _______,    _______,    _______,    _______,   _______,       _______,    _______,    _______,    _______,    _______,   _______,
       _______,    S(KC_2),    S(KC_MINS), S(KC_LBRC), S(KC_RBRC),S(KC_6),       S(KC_1),    S(KC_COMM), S(KC_DOT),  KC_EQL,     S(KC_7),   _______,
       _______,    KC_NUBS,    KC_SLSH,    KC_LBRC,    KC_RBRC,   S(KC_8),       S(KC_SLSH), S(KC_9),    S(KC_0),    KC_MINS,    S(KC_SCLN),S(KC_2),
       _______,    S(KC_3),    S(KC_4),    S(KC_NUBS), S(KC_GRV), KC_GRV,        S(KC_EQL),  S(KC_5),    S(KC_QUOT), KC_QUOT,    KC_SCLN,   _______,
                                _______,    _______,                                                   _______,    _______,

                                     _______,       _______,      _______,       _______, TO(0),   _______,
                                                    _______,      _______,       _______, _______
    ),

    [3] = LAYOUT_std(
        _______,    _______,    _______,    _______,    _______,   _______,       _______, _______, _______, _______, _______, _______,
        _______,    _______,    _______,    _______,    _______,   _______,       _______, _______, _______, _______, _______, _______,
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,     _______,       KC_PSCR, KC_7,    KC_8,    KC_9,    TO(0),   _______,
        _______,    KC_F5,      KC_F6,      KC_F7,      KC_F8,     _______,       KC_0,    KC_4,    KC_5,    KC_6,    KC_0,    _______,
        QK_BOOT,    KC_F9,      KC_F10,     KC_F11,     KC_F12,    _______,       KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,
                                _______,    _______,                                                _______,    _______,

                                         _______,    _______,      _______,       _______, _______, TO(0),
                                                     _______,      _______,       _______, _______
    )
};
