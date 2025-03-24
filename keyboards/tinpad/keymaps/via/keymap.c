#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0]= LAYOUT(
		KC_ESC, KC_PSCR, KC_BSPC, 
		KC_NUM, KC_SLSH, KC_ASTR, KC_MINS, 
		KC_7, KC_8, KC_9, KC_PLUS, 
		KC_4, KC_5, KC_6, KC_ENT, 
		KC_1, KC_2, KC_3, KC_0, 
		KC_LCTL, KC_LSFT, KC_DOT, KC_LALT),

	[1]= LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[2]= LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[3]= LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
// 	keyevent_t event = record->event;

// 	switch (id) {

// 	}
// 	return MACRO_NONE;
// }

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

// void led_set_user(uint8_t usb_led) {

// 	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
// 	} else {
		
// 	}

// 	if (usb_led & (1 << USB_LED_KANA)) {
		
// 	} else {
		
// 	}

// }