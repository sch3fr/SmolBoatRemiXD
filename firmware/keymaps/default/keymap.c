#include QMK_KEYBOARD_H
#include "keymap_czech.h"

enum layer_names {
  _QWERTY,
  _RAISE,
  _LOWER,
  _FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  ;   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |-----------------------------------------------------------------------------------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  ú   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ů  |   §  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |SftEnt|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LCtrl| Func | LGUI | LAlt | Raise|    Space    | Lower| Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

	[_QWERTY] = LAYOUT_ortho_5x12(
		CZ_SCLN, CZ_PLUS,   CZ_ECAR, CZ_SCAR, CZ_CCAR, CZ_RCAR,   CZ_ZCAR,    CZ_YACU, CZ_AACU, CZ_IACU, CZ_EACU, KC_BSPC, 
		KC_TAB,  KC_Q,      KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,    CZ_UACU, 
		KC_ESC,  KC_A,      KC_S,    KC_D,    KC_F,    KC_G,      KC_H,       KC_J,    KC_K,    KC_L,    CZ_URNG, CZ_SECT, 
		KC_LSFT, KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,      KC_N,       KC_M,    CZ_COMM, CZ_DOT,  CZ_MINS, KC_SFTENT, 
		KC_RCTL, MO(_FUNC), KC_LGUI, KC_LALT, MO(_RAISE), KC_SPC, MO(_LOWER), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |-----------------------------------------------------------------------------------|
 * |      |      |      |      |      |      |      |      |      |  Del |PrtScn|  ()  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |  \   |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Func |      |      | Raise|             | Lower| Home | PgDn | PgUp |  End |
 * `-----------------------------------------------------------------------------------'
 */

	[_RAISE] = LAYOUT_ortho_5x12(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_PSCR, CZ_RPRN, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,     KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |  =   |   '  | Del  |
 * |-----------------------------------------------------------------------------------|
 * |      |      |      |   €  |      |      |      |      |      |  ÷   |   ×  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ~  |      |      |  [   |  ]   |  \   |   |  |   /  |  $   |  ß   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   #  |   &  |   @  |   {  |   }  |   ^  |   <  |   >  |   *  |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Func |      |      | Raise|             | Lower|      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

	[_LOWER] = LAYOUT_ortho_5x12(
		KC_TRNS, CZ_TILD,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, CZ_EQL,  CZ_ACUT, KC_DEL, 
		KC_TRNS, KC_TRNS,    KC_TRNS, CZ_EURO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, CZ_DIV,  CZ_MUL,  KC_PSCR, 
		KC_TRNS, ALGR(CZ_A), KC_TRNS, KC_TRNS, CZ_LBRC, CZ_RBRC, CZ_BSLS, KC_PIPE,    CZ_SLSH, CZ_DLR,  CZ_SS, KC_TRNS, 
		KC_TRNS, KC_TRNS,    CZ_HASH, CZ_AMPR, CZ_AT,   CZ_LCBR, CZ_RCBR, ALGR(CZ_M), CZ_LABK, CZ_RABK, CZ_ASTR, KC_TRNS, 
		KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS),

/* Func
 * ,-----------------------------------------------------------------------------------.
 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
 * |-----------------------------------------------------------------------------------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | BriU | BriD |      |      | 
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Func |      |      | Lower|    Play     | Raise| Prev | VolD | VolU | Next |
 * `-----------------------------------------------------------------------------------'
 */

	[_FUNC] = LAYOUT_ortho_5x12(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIU, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_MPLY,     KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT),

};
