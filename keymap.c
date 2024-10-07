// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LCTL, MO(3), KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_SPC, MO(2), KC_RALT, KC_RGUI, TO(4), KC_RCTL),
    [1] = LAYOUT_ortho_4x12(KC_TAB, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_7, KC_8, KC_9, KC_EQL, KC_BSPC, KC_ESC, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO, KC_F12, KC_4, KC_5, KC_6, KC_UNDS, KC_PPLS, KC_LSFT, KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_PMNS, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_0, KC_PDOT, KC_PSLS, KC_PAST),
    [2] = LAYOUT_ortho_4x12(KC_TAB, KC_SLSH, KC_BSLS, KC_LPRN, KC_RPRN, KC_HOME, KC_PGUP, KC_AMPR, KC_ASTR, KC_TILD, KC_NO, KC_BSPC, KC_ESC, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_END, KC_PGDN, KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_NO, KC_LSFT, KC_PIPE, KC_PIPE, KC_LCBR, KC_RCBR, KC_INS, KC_DEL, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [3] = LAYOUT_ortho_4x12(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_BSPC, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [4] = LAYOUT_ortho_4x12(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_BSPC, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_NO, TO(0), KC_NO)
    
};
