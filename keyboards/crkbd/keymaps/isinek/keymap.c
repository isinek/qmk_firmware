/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "keycodes.h"
#include QMK_KEYBOARD_H

#define L_BASE          0
#define L_MEDIA         1
#define L_NAVIGATION    2
#define L_MOUSE         3
#define L_NUMBERS       4
#define L_FUNCTIONS     5

#define HR_A    LSFT_T(KC_A)
#define HR_S    LCTL_T(KC_S)
#define HR_D    LALT_T(KC_D)
#define HR_F    LGUI_T(KC_F)
#define HR_J    RGUI_T(KC_J)
#define HR_K    RALT_T(KC_K)
#define HR_L    RCTL_T(KC_L)
#define HR_SCLN RSFT_T(KC_SCLN)

#define MED_ESC LT(L_MEDIA, KC_ESCAPE)
#define NAV_TAB LT(L_NAVIGATION, KC_TAB)
#define MSE_SPC LT(L_MOUSE, KC_SPACE)
#define NUM_BSP LT(L_NUMBERS, KC_BACKSPACE)
#define FUN_DEL LT(L_FUNCTIONS, KC_DELETE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO ,  KC_Q ,  KC_W ,  KC_E ,  KC_R ,  KC_T ,          KC_Y ,  KC_U ,  KC_I ,  KC_O ,  KC_P , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,  HR_A ,  HR_S ,  HR_D ,  HR_F ,  KC_G ,          KC_H ,  HR_J ,  HR_K ,  HR_L ,HR_SCLN, KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,  KC_Z ,  KC_X ,  KC_C ,  KC_V ,  KC_B ,          KC_N ,  KC_M ,KC_COMM, KC_DOT,KC_SLSH, KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                     MED_ESC,NAV_TAB,MSE_SPC,         KC_ENT,NUM_BSP,FUN_DEL
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

    [L_MEDIA] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI, KC_NO ,        KC_MPRV,KC_MSTP,KC_MPLY,KC_MNXT, KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                      KC_NO , KC_NO , KC_NO ,        KC_VOLD,KC_VOLU,KC_MUTE
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

    [L_NAVIGATION] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,        KC_PGUP, KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI, KC_NO ,        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT, KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,        KC_PGDN,KC_HOME, KC_INS, KC_END, KC_NO , KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                      KC_NO , KC_NO , KC_NO ,         KC_ENT,KC_BSPC, KC_DEL
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

    [L_MOUSE] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,        KC_WH_U, KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI, KC_NO ,        KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R, KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,        KC_WH_D,KC_WH_L,KC_WH_R, KC_NO , KC_NO , KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                      KC_NO , KC_NO , KC_NO ,        KC_BTN1,KC_BTN3,KC_BTN2
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

    [L_NUMBERS] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO ,KC_LBRC,  KC_7 ,  KC_8 ,  KC_9 ,KC_RBRC,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO ,KC_QUOT,  KC_4 ,  KC_5 ,  KC_6 , KC_EQL,         KC_NO ,KC_RGUI,KC_RALT,KC_RCTL,KC_RSFT, KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_GRV,  KC_1 ,  KC_2 ,  KC_3 ,KC_BSLS,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                      KC_DOT,  KC_0 ,KC_MINS,         KC_NO , KC_NO , KC_NO
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

    [L_FUNCTIONS] = LAYOUT_split_3x6_3(
        //  ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗       ╔═══════╤═══════╤═══════╤═══════╤═══════╤═══════╗
              KC_NO , KC_F12, KC_F7 , KC_F8 , KC_F9 ,KC_PSCR,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_F11, KC_F4 , KC_F5 , KC_F6 ,KC_SCRL,         KC_NO ,KC_RGUI,KC_RALT,KC_RCTL,KC_RSFT, KC_NO ,
        //  ╟───────┼───────┼───────┼───────┼───────┼───────╢       ╟───────┼───────┼───────┼───────┼───────┼───────╢
              KC_NO , KC_F10, KC_F1 , KC_F2 , KC_F3 ,KC_PAUS,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,
        //  ╚═══════╧═══════╧═══════╗───────┼───────┼───────╢       ╟───────┼───────┼───────╔═══════╧═══════╧═══════╝
                                      KC_NO , KC_NO , KC_NO ,         KC_NO , KC_NO , KC_NO
        //                          ╚═══════╧═══════╧═══════╝       ╚═══════╧═══════╧═══════╝
        ),

};

#ifdef OLED_ENABLE

/* 32 * 32 logo */
__attribute__((unused)) static void render_logo(void) {
    static const char PROGMEM hexagram_logo[] = {
            0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
            0xc0, 0x70, 0x18, 0x06, 0x06, 0x18, 0x70, 0xc0, 0x80, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07,
            0x1f, 0x32, 0x66, 0xc4, 0x6c, 0x38, 0x1e, 0x37, 0x61, 0xc0, 0x80, 0x80,
            0x80, 0x80, 0xc0, 0x61, 0x37, 0x1e, 0x38, 0x6c, 0xc4, 0x66, 0x32, 0x1f,
            0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0x4c, 0x66, 0x23,
            0x36, 0x1c, 0x78, 0xec, 0x86, 0x03, 0x01, 0x01, 0x01, 0x01, 0x03, 0x86,
            0xec, 0x78, 0x1c, 0x36, 0x23, 0x66, 0x4c, 0xf8, 0xe0, 0x80, 0x00, 0x00,
            0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
            0x03, 0x0e, 0x18, 0x60, 0x60, 0x18, 0x0e, 0x03, 0x01, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00};
    oled_write_raw_P(hexagram_logo, sizeof(hexagram_logo));
}

/* KEYBOARD PET START */

/* settings */
#define MIN_WALK_SPEED 10
#define MIN_RUN_SPEED 40

/* advanced settings */
#define ANIM_FRAME_DURATION 200 // how long each frame lasts in ms
#define ANIM_SIZE                                                                                                                            \
    96 // number of bytes in array. If you change sprites, minimize for adequate
         // firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping = false;
bool showedJump = true;
bool isBarking = false;

/* logic */
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {
            /* 'sit1', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04,
                    0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08,
                    0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06,
                    0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20,
                    0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            },

            /* 'sit2', 32x22px */
            {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
             0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9,
             0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
             0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00,
             0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00,
             0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
             0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20,
             0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {
            /* 'walk1', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90,
                    0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90,
                    0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00,
                    0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f,
                    0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e,
                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            },

            /* 'walk2', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20,
                    0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20,
                    0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01,
                    0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
                    0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05,
                    0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32,
                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {
            /* 'run1', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80,
                    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04,
                    0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00,
                    0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03,
                    0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32,
                    0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
            },

            /* 'run2', 32x22px */
            {
                    0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10,
                    0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01,
                    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10,
                    0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e,
                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {
            /* 'bark1', 32x22px */
            {
                    0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18,
                    0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01,
                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48,
                    0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28,
                    0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
                    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            },

            /* 'bark2', 32x22px */
            {
                    0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90,
                    0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01,
                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0,
                    0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28,
                    0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05,
                    0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {
            /* 'sneak1', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40,
                    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80,
                    0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02,
                    0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09,
                    0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11,
                    0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04,
                    0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
            },

            /* 'sneak2', 32x22px */
            {
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80,
                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40,
                    0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03,
                    0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04,
                    0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09,
                    0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06,
                    0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
            }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("         ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("         ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (isBarking) {
            oled_write_raw_P(bark[abs(1 - current_frame)], ANIM_SIZE);
        } else if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);
        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);
        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);
        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }

    /* this fixes the screen on and off bug */
    if (current_wpm > 0) {
        oled_on();
        anim_sleep = timer_read32();
    } else if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0, 0);
        oled_write("                                                                                                                             "
                             "                                                                         ",
                             false);
        oled_off();
        oled_set_cursor(LUNA_X, LUNA_Y);
    }
}
/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    // render_logo();
}

static void print_status_narrow(void) {
    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 3);

    switch (get_highest_layer(layer_state)) {
    case L_BASE:
        oled_write("Base ", false);
        break;
    case L_MEDIA:
        oled_write("Media", false);
        break;
    case L_NAVIGATION:
        oled_write("Navig", false);
        break;
    case L_NUMBERS:
        oled_write("Nums ", false);
        break;
    case L_MOUSE:
        oled_write("Mouse", false);
        break;
    case L_FUNCTIONS:
        oled_write("Funcs", false);
        break;
    default:
        oled_write("Undef", false);
    }

    /* wpm counter */
    oled_set_cursor(0, 7);
    oled_write(" ", false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);
    oled_set_cursor(0, 8);
    oled_write(" wpm", false);

    render_luna(0, 13);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
    return false;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    /* KEYBOARD PET STATUS START */
    case KC_LCTL:
        isSneaking = record->event.pressed;
        break;
    case KC_SPC:
        isJumping = record->event.pressed;
        if (isJumping)
            showedJump = false;
        break;
    case KC_LSFT:
    case KC_RSFT:
        isBarking = record->event.pressed;
        break;
        /* KEYBOARD PET STATUS END */
    }

    return true;
}
