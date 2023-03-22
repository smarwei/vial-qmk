#include QMK_KEYBOARD_H
#ifdef CONSOLE_ENABLE
#include "print.h"
#endif


// XMonad Combos
// #define TRMNAL G(S(KC_ENT))
// // #define SHNK_AR G(S(KC_ENT))
// #define TRMNAL G(S(KC_ENT))
// #define TRMNAL G(S(KC_ENT))
// #define TRMNAL G(S(KC_ENT))

// TD(0) = On Tap -> MO(2); On hold -> MO(2); On double tap -> TO(3)
// TD(0) = On hold -> MO(2); On double tap -> TO(2)

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A:
            return true;
        case KC_B ... KC_Z:
        case TD(4):
        case TD(5):
        case TD(6):
            uprintf("Keycode 6: %d\n", keycode);
        case TD(7):
            uprintf("Keycode 7: %d\n", keycode);
            print("-------\n");
        case KC_MINS:
            print("Shifting\n");
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

#ifdef CONSOLE_ENABLE
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  //debug_mouse=true;


static uint16_t underglow_brightness = 0;
static uint16_t perkey_brightness = 0;

for (i = 0; i < RGBLED_NUM; i++) {
  if (i < 6) {
    rgblight_config.val = underglow_brightness;
  } else {
    rgblight_config.val = perkey_brightness;
  }
}
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_std(
        KC_TAB,  KC_Q,    KC_W,     KC_F,    KC_P,     KC_B,        KC_J,    KC_L,    KC_U,    KC_Y,     KC_SCLN,  KC_F24,
        KC_ESC,  KC_A,    KC_R,     KC_S,    KC_T,     KC_G,        KC_M,    KC_N,    KC_E,    KC_I,     KC_O,     KC_CAPS,
        CAPSWRD, KC_Z,    KC_X,     KC_C,    KC_D,     KC_V,        KC_K,    KC_H,    KC_COMM, KC_DOT,   KC_SLASH, TT(3),
        KC_NO,   KC_LGUI, KC_LALT,  KC_LCTL, MO(1),    KC_LSFT,     KC_ENT,  MO(2),   KC_SPC,  KC_MINS,  KC_EQL,   KC_RSFT 
    ),

    [1] = LAYOUT_std(
        _______, KC_ESC,  KC_WH_U, KC_WBAK, KC_WFWD, KC_MS_U,        KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_ESC,
        _______, KC_LALT, KC_WH_D, KC_LSFT, KC_LCTL, KC_MS_D,        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_MENU,
        _______, KC_WH_L, KC_UNDO, KC_CUT,  KC_COPY, C(S(KC_V)),     KC_BTN1, KC_BTN2, KC_BTN3, KC_MS_L, KC_MS_R, KC_WH_R,
        _______, _______, _______, _______, _______, _______,        _______, TO(0),   _______, _______, _______, _______
    ),

    [2] = LAYOUT_std(
        _______, _______, S(KC_MINS), KC_LBRC,    KC_RBRC,    S(KC_6),    S(KC_1),    S(KC_COMM), S(KC_DOT),  KC_EQL,  S(KC_7),   _______,
        _______, KC_NUBS, KC_SLSH,    S(KC_LBRC), S(KC_RBRC), S(KC_8),    S(KC_SLSH), S(KC_9),    S(KC_0),    KC_MINS, S(KC_SCLN),S(KC_2),
        _______, S(KC_3), S(KC_4),    S(KC_NUBS), S(KC_GRV),  KC_GRV,     S(KC_EQL),  S(KC_5),    S(KC_QUOT), KC_QUOT, KC_SCLN,   _______,
        _______, _______, _______,    _______,    _______,    _______,    _______,    TO(0),      _______,    _______, _______,   _______
    ),

    [3] = LAYOUT_std(
        _______, _______, _______, _______, _______, _______,       KC_PSCR, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_F12,
        _______, _______, _______, _______, _______, _______,       KC_0,    KC_4,    KC_5,    KC_6,    KC_0,    _______,
        _______, _______, _______, _______, _______, _______,       KC_0,    KC_1,    KC_2,    KC_3,    KC_DOT,  KC_COMM,
        QK_BOOT, _______, _______, _______, _______, _______,       _______, TO(0),   _______, _______, _______, TO(0)
    )

    // [4] = LAYOUT_std(
    //     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    //     _______, TERMNAL, _______, _______, _______, _______,       SHNK_AR, NXT_WND, PRV_WND, EXND_AR, _______, _______,
    //     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    //     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______
    // )
};