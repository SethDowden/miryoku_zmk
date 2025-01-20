// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_MOUSEKEYSPR

// #define XXX &none

#define MIRYOKU_LAYER_BASE \
&kp Q,              &kp W,             &kp E,              &kp R,              &kp T,              &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,                 \
U_MT(LSHFT, A),     U_MT(LCTRL, S),    U_MT(LALT, D),      U_MT(LGUI, F),      &kp G,              &kp H,             U_MT(LGUI, J),     U_MT(LALT, K),     U_MT(LCTRL, L),    U_MT(LSHFT, SQT),      \
U_LT(U_BUTTON, Z),  U_MT(RALT, X),     &kp C,              &kp V,              &kp B,              &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH), \
U_NP,               U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            U_NU,              \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_WH_L,            U_WH_U,            U_WH_D,            U_WH_R,            U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP
  
#define MIRYOKU_LAYER_NUM \
&kp EXCL,          &kp AT,            &kp HASH,           &kp DLLR,           &kp PRCNT,          &kp CARET,         &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RPAR,        \
U_MT(LSHFT, N1),   U_MT(LCTRL, N2),   U_MT(LALT, N3),     U_MT(LGUI, N4),     &kp N5,             &kp N6,            U_MT(LGUI, N7),    U_MT(LALT, N8),    U_MT(LCTRL, N9),   U_MT(LSHFT, N0), \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,              &kp V,              &kp B,              &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              &kp DOT,            &kp MINUS,          &kp PLUS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp QUOT,         &kp LABK,          &kp GT,            &kp DQT,           &kp DOT,           &kp AMPS,          &kp COLON,         &kp LBRC,          &kp RBRC,          &kp PERC,          \
&kp EXCL,         &kp MINUS,         &kp PLUS,          &kp EQL,           &kp HASH,          &kp PIPE,          &kp COLON,         &kp LPAR,          &kp RPAR,          &kp QUES,          \
&kp CIRC,         &kp SLSH,          &kp ASTRK,         &kp BSLS,          &kp DOT,           &kp DLR,           &kp LCBR,          &kp RCBR,          &kp AT,            U_NA,              \
U_NP,             U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP               





// // Direct custom layer access
// #define MIRYOKU_LAYOUTMAPPING_CORNE(\
// K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
// K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
// K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
// N30, N31, K32, K33, K34,                         K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K33  K34       K35  K36  K37



// #define MIRYOKU_LAYER_LIST \
// MIRYOKU_X(BASE,   "Base") \
// MIRYOKU_X(EXTRA,  "Extra") \
// MIRYOKU_X(TAP,    "Tap") \
// MIRYOKU_X(BUTTON, "Button") \
// MIRYOKU_X(NAV,    "Nav") \
// MIRYOKU_X(MOUSE,  "Mouse") \
// MIRYOKU_X(MEDIA,  "Media") \
// MIRYOKU_X(NUM,    "Num") \
// MIRYOKU_X(SYM,    "Sym") \
// MIRYOKU_X(FUN,    "Fun")

// #define U_BASE   0
// #define U_EXTRA  1
// #define U_TAP    2
// #define U_BUTTON 3
// #define U_NAV    4
// #define U_MOUSE  5
// #define U_MEDIA  6
// #define U_NUM    7
// #define U_SYM    8
// #define U_FUN    9