#include QMK_KEYBOARD_H

// TD(0) = On Tap -> MO(2); On hold -> MO(2); On double tap -> TO(3)

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A:
            return true;
        case KC_B ... KC_Z:
        case TD(4):
        case TD(5):
        case TD(6):
        case TD(7):
        case KC_MINS:
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

#include "../common_layout.c"