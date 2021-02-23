#include "_example.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KI_QUOT:  // Compiles the firmware, and adds the flash command based on keyboard bootloader
        SEND_STRING("RESERVED");
        break;

  }
return process_record_keymap(keycode, record) && process_record_secrets(keycode, record);
}

__attribute__ ((weak))
layer_state_t layer_state_set_kifinnsson (layer_state_t state) {
  return state;
}

layer_state_t layer_state_set_user (layer_state_t state) {
  state = update_tri_layer_state(state, KI_RAISE, KI_LOWER, KI_MERGE);
  return layer_state_set_keymap (state);
}

__attribute__ ((weak))
bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void my_custom_function(void) {
    
}