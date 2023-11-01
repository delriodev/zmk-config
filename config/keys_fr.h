
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// letters
#define FR_A    KC_Q    // A
#define FR_B    KC_B    // B
#define FR_C    KC_C    // C
#define FR_D    KC_D    // D
#define FR_E    KC_E    // E
#define FR_F    KC_F    // F
#define FR_G    KC_G    // G
#define FR_H    KC_H    // H
#define FR_I    KC_I    // I
#define FR_J    KC_J    // J
#define FR_K    KC_K    // K
#define FR_L    KC_L    // L
#define FR_M    KC_SCLN // M
#define FR_N    KC_N    // N
#define FR_O    KC_O    // O
#define FR_P    KC_P    // P
#define FR_Q    KC_A    // Q
#define FR_R    KC_R    // R
#define FR_S    KC_S    // S
#define FR_T    KC_T    // T
#define FR_U    KC_U    // U
#define FR_V    KC_V    // V
#define FR_W    KC_Z    // W
#define FR_X    KC_X    // X
#define FR_Y    KC_Y    // Y
#define FR_Z    KC_W    // Z

// numbers
#define FR_1    S(FR_AMPR) // 1
#define FR_2    S(FR_EACU) // 2
#define FR_3    S(FR_DQUO) // 3
#define FR_4    S(FR_QUOT) // 4
#define FR_5    S(FR_LPRN) // 5
#define FR_6    S(FR_MINS) // 6
#define FR_7    S(FR_EGRV) // 7
#define FR_8    S(FR_UNDS) // 8
#define FR_9    S(FR_CCED) // 9
#define FR_0    S(FR_AGRV) // 0

// characters
#define FR_LPRN KC_5    // (
#define FR_LCBR ALGR(FR_QUOT) // {
#define FR_LBRC ALGR(FR_LPRN) // [
#define FR_LABK KC_NUBS // <

#define FR_RPRN KC_MINS // )
#define FR_RCBR ALGR(FR_EQL)  // }
#define FR_RBRC ALGR(FR_RPRN) // ]
#define FR_RABK S(FR_LABK) // >


#define FR_QUES S(FR_COMM) // ?
#define FR_EXLM KC_SLSH // !
#define FR_AMPR KC_1    // &

#define FR_EQL  KC_EQL  // =
#define FR_UNDS KC_8    // _
#define FR_MINS KC_6    // -

#define FR_DQUO KC_3    // "
#define FR_QUOT KC_4    // '
#define FR_GRV  ALGR(FR_EGRV) // ` (dead)
#define FR_CIRC KC_LBRC // ^ (dead)

#define FR_SLSH S(FR_COLN) // /
#define FR_BSLS ALGR(FR_UNDS) // (backslash)
#define FR_PIPE ALGR(FR_MINS) // |

#define FR_EACU KC_2    // é
#define FR_CCED KC_9    // ç
#define FR_DIAE S(FR_CIRC) // ¨ (dead)
#define FR_TILD ALGR(FR_EACU) // ~ (dead)

#define FR_AT   ALGR(FR_AGRV) // @
#define FR_HASH ALGR(FR_DQUO) // #
#define FR_DLR  KC_RBRC // $

#define FR_ASTR KC_NUHS // *
#define FR_PLUS S(FR_EQL)  // +
#define FR_PERC S(FR_UGRV) // %

#define FR_COMM KC_M    // ,
#define FR_SCLN KC_COMM // ;

#define FR_DOT  S(FR_SCLN) // .
#define FR_COLN KC_DOT  // :

// Unused
#define FR_SUP2 KC_GRV  // ²
#define FR_EGRV KC_7    // è
#define FR_AGRV KC_0    // à
#define FR_UGRV KC_QUOT // ù
#define FR_DEG  S(FR_RPRN) // °
#define FR_PND  S(FR_DLR)  // £
#define FR_MICR S(FR_ASTR) // µ
#define FR_SECT S(FR_EXLM) // §
#define FR_EURO ALGR(KC_E)    // €
#define FR_CURR ALGR(FR_DLR)  // ¤

