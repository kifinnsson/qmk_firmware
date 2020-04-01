#include QMK_KEYBOARD_H

enum custom_layers {
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _EXTEND
};

enum custom_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  ADJUST,
  KI_SIG,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define EXTEND MO(_EXTEND)
#define CTRL_A LCTL(KC_A)
#define UNDO LCTL(KC_Z)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     EXTEND,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                               KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,          KC_APP,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, LOWER,   KC_ENT,                    LSFT_T(KC_SPC),  RAISE,   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, CTRL_A,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_LCBR, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, UNDO,    CUT,     COPY,    PASTE,   XXXXXXX, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_END,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______,          _______, KC_F12,  XXXXXXX, XXXXXXX, KC_PGUP, KC_PGDN, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_EXTEND] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ESC,  KC_WH_U, KC_WBAK, KC_WFWD, KC_MS_U,                            KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_ESC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, CTRL_A,  KC_WH_D, KC_LSFT, KC_LCTL, KC_MS_D,                            KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_APP,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, UNDO,    CUT,     COPY,    PASTE,   KC_BTN1, _______,          _______, KC_BTN2, KC_BTN3, KC_MS_L, KC_MS_R, XXXXXXX, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RESET,   _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KI_SIG:
      if (record->event.pressed) {
        SEND_STRING("Ki Finnsson");
      } else {

      }
      return false;
      break;
  }
  return true;
}

//combos for arstneio chorded layout
enum combos {
  //
  // Chorded ARSTNEIO Alphas
  //
  // A (HOME)
  // B (T+N)
  T_N_B,
  // C (R+T)
  R_T_C,
  // D (S+T)
  S_T_D,
  // E (HOME)
  // F (R+S)
  R_S_F,
  // G (T+I)
  T_I_G,
  // H (N+E)
  N_E_H,
  // I (HOME)
  // J (A+N)
  A_N_J,
  // K (R+N)
  R_N_K,
  // L (N+O)
  N_O_L,
  // M (S+N)
  S_N_M,
  // N (HOME)
  // O (HOME)
  // P (A+T)
  A_T_P,
  // Q (A+E)
  A_E_Q,
  // R (HOME)
  // S (HOME)
  // T (HOME)
  // U (E+I)
  E_I_U,
  // V (T+E)
  T_E_V,
  // W (A+R)
  A_R_W,
  // X (A+S)
  A_S_X,
  // Y (N+I)
  N_I_Y,
  // Z (R+E)
  R_E_Z,
  //
  // Chorded ARSTNEIO Characters
  //
  // Backspace (A+O)
  A_O_BSPC,
  // ; (I+O)
  I_O_SCLN,
  // , (S+E)
  S_E_COMM,
  // . (R+I)
  R_I_DOT,
  // / (T+O+Shift)
  T_O_LSFT_SLSH,
  T_O_RSFT_SLSH,
  // ? (T+O)
  T_O_QUES,
  // ' (S+O)
  S_O_QUOT,
  // ! (E+O)
  E_O_EXLM,
  // @ (E+O+Shift)
  E_O_LSFT_AT,
  E_O_RSFT_AT,
  // - (S+I)
  S_I_MINS,
  // ( (A+I)
  A_I_LPRN,
  // ) (R+O)
  R_O_RPRN,
  // [ (A+I+Shift)
  A_I_LSFT_LBRC,
  A_I_RSFT_LBRC,
  // ] (R+O+Shift)
  R_O_LSFT_RBRC,
  R_O_RSFT_RBRC,
  //
  // Chorded ARSTNEIO Whitespace
  //
  // <TAB> (A+R+S+T)
  A_R_S_T_TAB,
  // <ENTER> (N+E+I+O)
  N_E_I_O_ENT,
  // <SPACE> (A+R+S+T+N+E+I+O)
  A_R_S_T_N_E_I_O_SPC,
}


//
// Chorded ARSTNEIO Alphas
//
// A (HOME)
// B (T+N)
const uint16_t PROGMEM t_n_b[] = { KC_T, KC_N, COMBO_END};
// C (R+T)
const uint16_t PROGMEM r_t_c[] = { KC_R, KC_T, COMBO_END};
// D (S+T)
const uint16_t PROGMEM s_t_d[] = { KC_S, KC_T, COMBO_END};
// E (HOME)
// F (R+S)
const uint16_t PROGMEM r_s_f[] = { KC_R, KC_S, COMBO_END};
// G (T+I)
const uint16_t PROGMEM t_i_g[] = { KC_T, KC_I, COMBO_END};
// H (N+E)
const uint16_t PROGMEM n_e_h[] = { KC_N, KC_E, COMBO_END};
// I (HOME)
// J (A+N)
const uint16_t PROGMEM a_n_j[] = { KC_A, KC_N, COMBO_END};
// K (R+N)
const uint16_t PROGMEM r_n_k[] = { KC_R, KC_N, COMBO_END};
// L (N+O)
const uint16_t PROGMEM n_o_l[] = { KC_N, KC_O, COMBO_END};
// M (S+N)
const uint16_t PROGMEM s_n_m[] = { KC_S, KC_N, COMBO_END};
// N (HOME)
// O (HOME)
// P (A+T)
const uint16_t PROGMEM a_t_p[] = { KC_A, KC_T, COMBO_END};
// Q (A+E)
const uint16_t PROGMEM a_e_q[] = { KC_A, KC_E, COMBO_END};
// R (HOME)
// S (HOME)
// T (HOME)
// U (E+I)
const uint16_t PROGMEM e_i_u[] = { KC_E, KC_I, COMBO_END};
// V (T+E)
const uint16_t PROGMEM t_e_v[] = { KC_T, KC_E, COMBO_END};
// W (A+R)
const uint16_t PROGMEM a_r_w[] = { KC_A, KC_R, COMBO_END};
// X (A+S)
const uint16_t PROGMEM a_s_x[] = { KC_A, KC_S, COMBO_END};
// Y (N+I)
const uint16_t PROGMEM n_i_y[] = { KC_N, KC_I, COMBO_END};
// Z (R+E)
const uint16_t PROGMEM r_e_z[] = { KC_R, KC_E, COMBO_END};
//
// Chorded ARSTNEIO Characters
//
// Backspace (A+O)
const uint16_t PROGMEM a_o_bspc[] = { KC_A, KC_O, COMBO_END};
// ; (I+O)
const uint16_t PROGMEM i_o_scln[] = { KC_I, KC_O, COMBO_END};
// , (S+E)
const uint16_t PROGMEM s_e_comm[] = { KC_S, KC_E, COMBO_END};
// . (R+I)
const uint16_t PROGMEM r_i_dot[] = { KC_R, KC_I, COMBO_END};
// / (T+O+Shift)
const uint16_t PROGMEM t_o_lsft_slsh[] = { KC_T, KC_O, KC_LSFT, COMBO_END};
const uint16_t PROGMEM t_o_rsft_slsh[] = { KC_T, KC_O, KC_RSFT, COMBO_END};
// ? (T+O)
const uint16_t PROGMEM t_o_ques[] = { KC_T, KC_O, COMBO_END};
// ' (S+O)
const uint16_t PROGMEM s_o_quot[] = { KC_S, KC_O, COMBO_END};
// ! (E+O)
const uint16_t PROGMEM e_o_exlm[] = { KC_E, KC_O, COMBO_END};
// @ (E+O+Shift)
const uint16_t PROGMEM e_o_lsft_at[] = { KC_E, KC_O, KC_LSFT, COMBO_END};
const uint16_t PROGMEM e_o_rsft_at[] = { KC_E, KC_O, KC_RSFT, COMBO_END};
// - (S+I)
const uint16_t PROGMEM s_i_mins[] = { KC_S, KC_I, COMBO_END};
// ( (A+I)
const uint16_t PROGMEM a_i_lprn[] = { KC_A, KC_I, COMBO_END};
// ) (R+O)
const uint16_t PROGMEM r_o_rprn[] = { KC_R, KC_O, COMBO_END};
// [ (A+I+Shift)
const uint16_t PROGMEM a_i_lsft_lbrc[] = { KC_A, KC_I, KC_LSFT, COMBO_END};
const uint16_t PROGMEM a_i_rsft_lbrc[] = { KC_A, KC_I, KC_RSFT, COMBO_END};
// ] (R+O+Shift)
const uint16_t PROGMEM r_o_lsft_rbrc[] = { KC_R, KC_O, KC_LSFT, COMBO_END};
const uint16_t PROGMEM r_o_rsft_rbrc[] = { KC_R, KC_O, KC_RSFT, COMBO_END};
//
// Chorded ARSTNEIO Whitespace
//
// <TAB> (A+R+S+T)
const uint16_t PROGMEM a_r_s_t_tab[] = { KC_A, KC_R, KC_S, KC_T, COMBO_END};
// <ENTER> (N+E+I+O)
const uint16_t PROGMEM n_e_i_o_ent[] = { KC_N, KC_E, KC_I, KC_O, COMBO_END};
// <SPACE> (A+R+S+T+N+E+I+O)
const uint16_t PROGMEM a_r_s_t_n_e_i_o_spc[] = { KC_A, KC_R, KC_S, KC_T, KC_N, KC_E, KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  //
  // Chorded ARSTNEIO Alphas
  //
  // A (HOME)
  // B (T+N)
  [T_N_B] = COMBO(t_n_b_combo, KC_B),
  // C (R+T)
  [R_T_C] = COMBO(r_t_c_combo, KC_C),
  // D (S+T)
  [S_T_D] = COMBO(s_t_d_combo, KC_D),
  // E (HOME)
  // F (R+S)
  [R_S_F] = COMBO(r_s_f_combo, KC_F),
  // G (T+I)
  [T_I_G] = COMBO(t_i_g_combo, KC_G),
  // H (N+E)
  [N_E_H] = COMBO(n_e_h_combo, KC_H),
  // I (HOME)
  // J (A+N)
  [A_N_J] = COMBO(a_n_j_combo, KC_J),
  // K (R+N)
  [R_N_K] = COMBO(r_n_k_combo, KC_K),
  // L (N+O)
  [N_O_L] = COMBO(n_o_l_combo, KC_L),
  // M (S+N)
  [S_N_M] = COMBO(s_n_m_combo, KC_M),
  // N (HOME)
  // O (HOME)
  // P (A+T)
  [A_T_P] = COMBO(a_t_p_combo, KC_P),
  // Q (A+E)
  [A_E_Q] = COMBO(a_e_q_combo, KC_Q),
  // R (HOME)
  // S (HOME)
  // T (HOME)
  // U (E+I)
  [E_I_U] = COMBO(e_i_u_combo, KC_U),
  // V (T+E)
  [T_E_V] = COMBO(t_e_v_combo, KC_V),
  // W (A+R)
  [A_R_W] = COMBO(a_r_w_combo, KC_W),
  // X (A+S)
  [A_S_X] = COMBO(a_s_x_combo, KC_X),
  // Y (N+I)
  [N_I_Y] = COMBO(n_i_y_combo, KC_Y),
  // Z (R+E)
  [R_E_Z] = COMBO(r_e_z_combo, KC_Z),
  //
  // Chorded ARSTNEIO Characters
  //
  // Backspace (A+O)
  [A_O_BSPC] = COMBO(a_o_bspc_combo, KC_BSPC),
  // ; (I+O)
  [I_O_SCLN] = COMBO(i_o_scln_combo, KC_SCLN),
  // , (S+E)
  [S_E_COMM] = COMBO(s_e_comm_combo, KC_COMM),
  // . (R+I)
  [R_I_DOT] = COMBO(r_i_dot_combo, KC_DOT),
  // / (T+O+Shift)
  [T_O_LSFT_SLSH] = COMBO(t_o_lsft_slsh_combo, KC_SLSH),
  [T_O_RSFT_SLSH] = COMBO(t_o_rsft_slsh_combo, KC_SLSH),
  // ? (T+O)
  [T_O_QUES] = COMBO(t_o_ques_combo, KC_QUES),
  // ' (S+O)
  [S_O_QUOT] = COMBO(s_o_quot_combo, KC_QUOT),
  // ! (E+O)
  [E_O_EXLM] = COMBO(e_o_exlm_combo, KC_EXLM),
  // @ (E+O+Shift)
  [E_O_LSFT_AT] = COMBO(e_o_lsft_at_combo, KC_AT),
  [E_O_RSFT_AT] = COMBO(e_o_rsft_at_combo, KC_AT),
  // - (S+I)
  [S_I_MINS] = COMBO(s_i_mins_combo, KC_MINS),
  // ( (A+I)
  [A_I_LPRN] = COMBO(a_i_lprn_combo, KC_LPRN),
  // ) (R+O)
  [R_O_RPRN] = COMBO(r_o_rprn_combo, KC_RPRN),
  // [ (A+I+Shift)
  [A_I_LSFT_LBRC] = COMBO(a_i_lsft_lbrc_combo, KC_LBRC),
  [A_I_RSFT_LBRC] = COMBO(a_i_rsft_lbrc_combo, KC_LBRC),
  // ] (R+O+Shift)
  [R_O_LSFT_RBRC] = COMBO(r_o_lsft_rbrc_combo, KC_RBRC),
  [R_O_RSFT_RBRC] = COMBO(r_o_rsft_rbrc_combo, KC_RBRC),
  //
  // Chorded ARSTNEIO Whitespace
  //
  // <TAB> (A+R+S+T)
  [A_R_S_T_TAB] = COMBO(a_r_s_t_tab_combo, KC_TAB),
  // <ENTER> (N+E+I+O)
  [N_E_I_O_ENT] = COMBO(n_e_i_o_ent_combo, KC_ENT),
  // <SPACE> (A+R+S+T+N+E+I+O)
  [A_R_S_T_N_E_I_O_SPC] = COMBO(a_r_s_t_n_e_i_o_spc_combo, KC_SPC),

};
