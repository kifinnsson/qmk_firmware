/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers {
    _MACRO
};

enum planck_keycodes {
  MCRO_00 = SAFE_RANGE,
  MCRO_01,
  MCRO_02,
  MCRO_03,
  MCRO_04,
  MCRO_05,
  MCRO_06,
  MCRO_07,
  MCRO_08,
  MCRO_09,
  MCRO_0A,
  MCRO_0B,
  MCRO_10,
  MCRO_11,
  MCRO_12,
  MCRO_13,
  MCRO_14,
  MCRO_15,
  MCRO_16,
  MCRO_17,
  MCRO_18,
  MCRO_19,
  MCRO_1A,
  MCRO_1B,
  MCRO_20,
  MCRO_21,
  MCRO_22,
  MCRO_23,
  MCRO_24,
  MCRO_25,
  MCRO_26,
  MCRO_27,
  MCRO_28,
  MCRO_29,
  MCRO_2A,
  MCRO_2B,
  MCRO_30,
  MCRO_31,
  MCRO_32,
  MCRO_33,
  MCRO_34,
  MCRO_35,
  MCRO_36,
  MCRO_37,
  MCRO_38,
  MCRO_39,
  MCRO_3A,
  MCRO_3B
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MACRO] = LAYOUT_planck_grid(
    MCRO_00, MCRO_01, MCRO_02, MCRO_03, MCRO_04, MCRO_05, MCRO_06, MCRO_07, MCRO_08, MCRO_09, MCRO_0A, MCRO_0B,
    MCRO_10, MCRO_11, MCRO_12, MCRO_13, MCRO_14, MCRO_15, MCRO_16, MCRO_17, MCRO_18, MCRO_19, MCRO_1A, MCRO_1B,
    MCRO_20, MCRO_21, MCRO_22, MCRO_23, MCRO_24, MCRO_25, MCRO_26, MCRO_27, MCRO_28, MCRO_29, MCRO_2A, MCRO_2B,
    MCRO_30, MCRO_31, MCRO_32, MCRO_33, MCRO_34, MCRO_35, MCRO_36, MCRO_37, MCRO_38, MCRO_39, MCRO_3A, MCRO_3B
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MCRO_00:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_01:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_02:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_03:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_04:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_05:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_06:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_07:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_08:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_09:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_0A:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_0B:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_10:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_11:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_12:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_13:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_14:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_15:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_16:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_17:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_18:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_19:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_1A:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_1B:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_20:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_21:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_22:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_23:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_24:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_25:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_26:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_27:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_28:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_29:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_2A:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_2B:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_30:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_31:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_32:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_33:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_34:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_35:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_36:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_37:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_38:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_39:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_3A:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
    case MCRO_3B:
      if (record->event.pressed) {
        //
      }
      return false;
      break;
  }
  return true;
}

void matrix_scan_user(void) {

}
