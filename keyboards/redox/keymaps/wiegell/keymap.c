#include QMK_KEYBOARD_H
#include "keymap_danish.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _COL 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3
#define _NUM 4
#define _WIN 5
#define _NAV_WIN 6
#define _SYMB_WIN 7
#define _NUM_WIN 8

enum custom_keycodes {
  COL = SAFE_RANGE,
  EMPFUNC,
  LSLAH,
  HOME,
  DIRUP,
  THIS,
  VOID,
  MAIL,
  MAIL_WIN,
  SYMB,
  NAV,
  ADJUST,
  NUM,
  WIN,
  WDH,
  WINTILT,
  WINCAR,
  WINBS,
  WINPIPE,
  WINFORWQ
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
       case WINBS:
            if (record->event.pressed) {
          register_code(KC_LALT);
          register_code(KC_KP_9);
          unregister_code(KC_KP_9);
          register_code(KC_KP_2);
          unregister_code(KC_KP_2);
          unregister_code(KC_LALT);

            }
            break;  
      case WINFORWQ:
            if (record->event.pressed) {
          register_code(KC_LALT);
          register_code(KC_KP_9);
          unregister_code(KC_KP_9);
          register_code(KC_KP_6);
          unregister_code(KC_KP_6);
          unregister_code(KC_LALT);

            }
            break; 
   case WINCAR:
            if (record->event.pressed) {
          register_code(KC_LALT);
          register_code(KC_KP_9);
          unregister_code(KC_KP_9);
          register_code(KC_KP_4);
          unregister_code(KC_KP_4);
          unregister_code(KC_LALT);

            }
            break;
    case WINTILT:
            if (record->event.pressed) {
          register_code(KC_LALT);
          register_code(KC_KP_1);
          unregister_code(KC_KP_1);
          register_code(KC_KP_2);
          unregister_code(KC_KP_2);
          register_code(KC_KP_6);
          unregister_code(KC_KP_6);
          unregister_code(KC_LALT);

            }
            break;
     case WINPIPE:
            if (record->event.pressed) {
          register_code(KC_LALT);
          register_code(KC_KP_1);
          unregister_code(KC_KP_1);
          register_code(KC_KP_2);
          unregister_code(KC_KP_2);
          register_code(KC_KP_4);
          unregister_code(KC_KP_4);
          unregister_code(KC_LALT);

            }
            break;
   case LGUI_T(LGUI(KC_C)):
    // Macos copy command
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_C)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
    // Macos paste
   case LSFT_T(LGUI(KC_V)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_V)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
     // Macos cut
   case MT(MOD_LALT,LGUI(KC_X)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_X)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
    //Win copy
   case LCTL_T(LCTL(KC_C)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LCTL(KC_C)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
    // Win paste
   case RSFT_T(RCTL(KC_V)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(RCTL(KC_V)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
   // Win cut
   case MT(MOD_LSFT,LALT(KC_X)):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LCTL(KC_X)); 
                return false;        // Return false to ignore further processing of key
            }
            break;
   case WDH:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_LSFT(SS_TAP(X_HOME)));
            SEND_STRING(SS_TAP(X_BSPC));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case EMPFUNC:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_LSFT(SS_TAP(X_8))"inp"SS_DOWN(X_LSFT)SS_TAP(X_9)" "SS_TAP(X_0)SS_TAP(X_GRV)" "SS_LALT(SS_TAP(X_8))SS_LALT(SS_TAP(X_9))SS_UP(X_LSFT)SS_TAP(X_LEFT)SS_TAP(X_ENT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case THIS:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("this.");
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case VOID:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("public void ");
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case LSLAH:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("ls "SS_TAP(X_SLSH)"lah"SS_TAP(X_ENT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case DIRUP:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("cd .."SS_TAP(X_ENT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case HOME:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("cd ");
          register_code(KC_ALGR);
          SEND_STRING(SS_TAP(X_RBRC));
          unregister_code(KC_ALGR);
            SEND_STRING(SS_TAP(X_ENT));
            SEND_STRING(SS_TAP(X_ENT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case MAIL_WIN:

        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("bj.wiegell"SS_ALGR(SS_TAP(X_2))"gmail.com");
        } else {
            // when keycode QMKBEST is released
        }
        break;
   case MAIL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("bj.wiegell"SS_ALGR(SS_TAP(X_NUHS))"gmail.com");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)
#define NUM_L   MO(_NUM)

#define KC_ALAS LALT_T(KC_PAST)

#define KC_NAPD LT(_NAV, KC_PGDN)
#define KC_NAME LT(_NAV, KC_SPACE)
#define KC_NAW LT(_NAV_WIN, KC_SPACE)

#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)

#define KC_NUMD LT(_NUM, KC_DEL)
#define KC_NUWD LT(_NUM_WIN, KC_DEL)
#define KC_SYMV LT(_SYMB, KC_F17)
#define MT_CMDD MT(MOD_LGUI, KC_BSPC)
#define MT_CMDDD MT(MOD_LGUI, KC_F19)

#define KC_NAMS LT(_NAV, KC_SPACE)
#define KC_SYMBS LT(_SYMB, KC_BSPC)
#define KC_SYW LT(_SYMB_WIN, KC_BSPC)
#define MACC LGUI_T(LGUI(KC_C))
#define MACP MT(MOD_LSFT,LGUI(KC_V))
#define MACX MT(MOD_LALT,LGUI(KC_X))
#define WINC MT(MOD_LCTL,LCTL(KC_C))
#define WINP MT(MOD_RSFT,RCTL(KC_V))
#define WINX MT(MOD_LALT,LALT(KC_X))
#define MT_LST MT(MOD_LSFT,KC_TAB)
#define MT_LSENT MT(MOD_LSFT,KC_ENT)
#define DEVTOOLS LGUI(LALT(KC_I))
#define DEVTS LGUI(LSFT(KC_C))
#define KC_CTC LCTL_T(KC_F17)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC ,KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F14    ,                                       KC_F6    ,KC_F7   ,KC_F8   ,LSG(KC_A),LSG(KC_R),KC_F11 ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     DEVTOOLS  ,DEVTS    ,KC_W    ,KC_F    ,KC_P    ,KC_G    ,KC_SLCK   ,                        KC_PAUS ,KC_J    ,KC_L    ,KC_U    ,KC_Y    ,DK_MINS   ,TG(_WIN)  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     LGUI(KC_Z) ,KC_Q    ,KC_R    ,KC_S    ,KC_T     ,KC_D    ,KC_LBRC ,                          KC_TAB  ,KC_H    ,KC_N    ,KC_E    ,KC_I    ,DK_AE ,DK_ARNG ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB ,KC_A      ,KC_X    ,KC_C   ,KC_V   ,KC_B    ,KC_NAPD ,KC_ADPU ,        LGUI(KC_Z) ,KC_RGUI ,KC_K    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_O ,DK_OSTR ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LCTRL ,KC_Z ,KC_PMNS ,MACX ,         MACC ,  KC_SYMBS ,MACP         ,MT_LSENT ,KC_NAMS     ,KC_NUMD ,  RGUI(KC_S) ,RGUI(KC_T) ,RGUI(KC_W)   ,RGUI(KC_F) 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,DK_AMPR ,DK_LABK ,DK_CIRC ,DK_TILD  ,KC_TRNS,                            KC_TRNS,DK_HASH ,DK_QUES ,DK_ASTR ,ALGR(KC_I),_______,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,DK_PERC,DK_LPRN,DK_LBRC ,DK_HALF ,DK_DQUO,KC_TRNS                            ,KC_TRNS,DK_QUOT ,DK_SECT ,DK_RBRC ,DK_RPRN ,_______,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     MAIL    ,LSA(DK_8),ALGR(DK_QUOT),DK_SLSH,S(ALGR(KC_7)),VOID   ,KC_TRNS ,KC_TRNS          ,KC_TRNS ,KC_TRNS,LSFT(DK_ACUT) ,DK_EXLM ,DK_EQL ,DK_PLUS ,LSA(DK_9) , XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,EMPFUNC ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,   _______   ,   _______  ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ), 
    [_SYMB_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,DK_AMPR ,DK_LABK ,WINCAR ,WINTILT  ,KC_TRNS,                            KC_TRNS,DK_HASH ,DK_QUES ,DK_ASTR ,WINPIPE,_______,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,DK_PERC,DK_LPRN,DK_LBRC ,DK_HALF ,DK_DQUO,KC_TRNS                            ,KC_TRNS,DK_QUOT ,DK_SECT ,DK_RBRC ,DK_RPRN ,_______,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     MAIL_WIN ,DK_LCBR,DK_AT,DK_SLSH,WINBS,VOID   ,KC_TRNS ,KC_TRNS          ,KC_TRNS ,KC_TRNS,WINFORWQ ,DK_EXLM ,DK_EQL ,DK_PLUS ,DK_RCBR , XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,EMPFUNC ,_______ ,_______ ,     _______ ,    _______ ,_______ ,        _______ ,_______ ,   _______   ,   _______  ,_______ ,_______ ,_______ 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ), 
    [_NAV_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,KC_MS_U ,XXXXXXX ,KC_WH_D ,XXXXXXX ,_______ ,                          _______ ,HOME ,WDH,C(KC_BSPC),C(KC_DEL),XXXXXXX ,RESET ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_U ,XXXXXXX ,_______ ,                          _______ ,DIRUP ,KC_LEFT  ,KC_DOWN  ,KC_UP ,C(KC_END) ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,        _______ ,XXXXXXX ,LSLAH ,KC_HOME,C(KC_LEFT),C(KC_RIGHT),KC_RIGHT ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_LALT ,     XXXXXXX ,    _______ ,_______ ,        _______ ,_______ ,    XXXXXXX ,   C(KC_C) ,XXXXXXX ,KC_END ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
      [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,KC_MS_U ,XXXXXXX ,KC_WH_D ,XXXXXXX ,_______ ,                          _______ ,HOME ,LGUI(KC_BSPC),LALT(KC_BSPC),LALT(KC_DEL),XXXXXXX ,RESET ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_U ,XXXXXXX ,_______ ,                          _______ ,DIRUP ,KC_LEFT ,KC_DOWN ,KC_UP   ,LGUI(KC_DEL) ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,        _______ ,XXXXXXX ,LSLAH ,LGUI(KC_LEFT),LALT(KC_LEFT),LALT(KC_RIGHT),KC_RIGHT ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_LALT ,     XXXXXXX ,    _______ ,_______ ,        _______ ,_______ ,    XXXXXXX ,   LCTL(KC_C) ,XXXXXXX ,LGUI(KC_RIGHT) ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX   ,RGB_M_P ,RGB_TOG ,RGB_MOD ,RGB_HUD ,RGB_HUI ,                          RGB_SAD ,RGB_SAI ,RGB_VAD ,RGB_VAI ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,        XXXXXXX ,_______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     XXXXXXX ,    XXXXXXX ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,    XXXXXXX ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

    [_NUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                 XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,KC_7    ,KC_8    ,KC_9    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,KC_4    ,KC_5    ,KC_6    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,        XXXXXXX ,_______ ,XXXXXXX ,KC_1    ,KC_2    ,KC_3    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     XXXXXXX ,    XXXXXXX ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,    XXXXXXX ,     KC_0    ,XXXXXXX ,XXXXXXX ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
        [_NUM_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,                                 XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX   ,XXXXXXX  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,KC_KP_7    ,KC_KP_8    ,KC_KP_9    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                          XXXXXXX ,XXXXXXX ,KC_KP_4    ,KC_KP_5    ,KC_KP_6    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,XXXXXXX ,        XXXXXXX ,_______ ,XXXXXXX ,KC_KP_1    ,KC_KP_2    ,KC_KP_3    ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     XXXXXXX ,    XXXXXXX ,XXXXXXX ,        XXXXXXX ,XXXXXXX ,    XXXXXXX ,     KC_KP_0    ,XXXXXXX ,XXXXXXX ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

        [_WIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC ,KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5                                           , KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0  ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     DEVTOOLS  ,KC_E  ,KC_W    ,KC_F    ,KC_P    ,KC_G    ,KC_SLCK   ,                        KC_PAUS ,KC_J ,KC_L  ,KC_U    ,KC_Y    ,_______   ,TG(_WIN)  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     C(KC_Z) ,KC_Q    ,KC_R    ,KC_S    ,KC_T    ,KC_D    ,KC_SLCK                            ,KC_PAUS,KC_H    ,KC_N    ,KC_E    ,KC_I    ,DK_AE    ,DK_ARNG ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB ,KC_A    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_NAPD   ,_______        ,_______ ,KC_RGUI ,KC_K    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_O  ,DK_OSTR ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_RCTRL ,KC_Z ,KC_PMNS ,WINX ,   WINC ,        KC_SYW ,WINP          ,MT_LSENT ,KC_NAW     ,KC_NUWD ,  C(KC_S),C(KC_T),C(KC_W),C(KC_F) 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),



};

enum combos {
  WIN_KEY,
  ALT_F4
};
const uint16_t PROGMEM win_key[] = {WINC, KC_NAW, COMBO_END};
const uint16_t PROGMEM alt_f4[] = {WINC, KC_Q, COMBO_END};
combo_t key_combos[] = {
  [WIN_KEY] = COMBO(win_key, KC_LGUI),
  [ALT_F4] = COMBO_ACTION(alt_f4),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case ALT_F4:
      if (pressed) {
      register_code(KC_LALT);
      tap_code16(KC_F4); 
      unregister_code(KC_LALT);
      }
      break;
  }
}