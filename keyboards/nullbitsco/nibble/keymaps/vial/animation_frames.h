/* Copyright 2021 Jay Greco
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
#pragma once
#ifdef OLED_ENABLE

// Enable OLED bitmpa compression selectively.
#define USE_OLED_BITMAP_COMPRESSION

#define NUM_IDLE_FRAMES 2
#define NUM_TAP_FRAMES 2
#define NUM_OLED_BYTES 512

#ifdef USE_OLED_BITMAP_COMPRESSION

static const char PROGMEM idle_1_block_map[] = { //IDLE_1 and IDLE_2
    0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x00, 0xc0, 0x0f, 0x00, 0x00, 0xff, 0x19, 0x00, 0xfc, 0xf1, 0x1d, 0x00, 0x38, 0x00, 0xf3, 0x0f,
    0xe0, 0x83, 0x0d, 0x0f, 0x00, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// static const char PROGMEM idle_2_block_map[] = { //IDLE_3
//     0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
//     0x00, 0xc0, 0x0f, 0x00, 0x00, 0xfe, 0x19, 0x00, 0xfe, 0xe3, 0x1f, 0x00, 0x7c, 0x00, 0xf6, 0x0f,
//     0xc0, 0x07, 0x1b, 0x0f, 0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
//     0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
// };

// static const char PROGMEM idle_3_block_map[] = { //IDLE_4
//     0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
//     0x00, 0xc0, 0x0f, 0x00, 0x00, 0xff, 0x19, 0x00, 0xff, 0xf1, 0x1d, 0x00, 0x3e, 0x00, 0xf3, 0x0f,
//     0xe0, 0x83, 0x0d, 0x0f, 0x80, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
//     0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
// };

static const char PROGMEM idle_4_block_map[] = { //IDLE_5
    0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x00, 0xc0, 0x0f, 0x00, 0x00, 0xff, 0x19, 0x00, 0xfe, 0xf1, 0x1d, 0x00, 0x3c, 0x00, 0xf3, 0x0f,
    0xe0, 0x83, 0x0d, 0x0f, 0x00, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const char PROGMEM tap_1_block_map[] = { //TAP_1
    0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x80, 0x7f, 0xfc, 0x00,
    0xf8, 0xff, 0xff, 0x03, 0xf8, 0xff, 0x19, 0x00, 0xff, 0xb1, 0x1d, 0x00, 0x3e, 0x00, 0x73, 0x00,
    0xe0, 0x83, 0xff, 0x01, 0x80, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const char PROGMEM tap_2_block_map[] = { //TAP_2
    0x80, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x00, 0xfc, 0x01, 0x00, 0x00, 0xff, 0x07, 0x00, 0xff, 0xb1, 0x1d, 0x00, 0x3e, 0x00, 0xf3, 0x8f,
    0xe0, 0x83, 0x01, 0x3f, 0x80, 0xff, 0xff, 0x7b, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const char PROGMEM idle_1_block_list[] = { //IDLE_1 and IDLE_2
    0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x01, 0x1e, 0xe0, 0x01, 0x1e, 0xe0, 0x80, 0x80, 0x80,
    0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1, 0x01, 0xc0, 0x3f, 0xe0, 0x10, 0x08, 0x08, 0x04,
    0x02, 0x01, 0x18, 0x18, 0x03, 0x43, 0xc0, 0x03, 0x7c, 0x80, 0x03, 0x7c, 0x80, 0x13, 0x0c, 0x07,
    0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x07, 0x18, 0x20, 0x40, 0x80, 0x03, 0x03, 0x1e, 0x1e,
    0x80, 0x60, 0x18, 0x07, 0x1f, 0x20, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x10, 0x20, 0x40, 0x40,
    0x40, 0x80, 0x80, 0x9f, 0xe0, 0x01, 0x3e, 0xc0, 0x07, 0xf8, 0x1f, 0xe0, 0x03, 0x7c
};

// static const char PROGMEM idle_2_block_list[] = { //IDLE_3
//     0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x01, 0x1e, 0xe0, 0x01, 0x1e, 0xe0, 0x80, 0x80, 0x80,
//     0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1, 0xc0, 0x3f, 0xc0, 0x20, 0x10, 0x10, 0x08, 0x08,
//     0x04, 0x02, 0x01, 0x18, 0x18, 0x03, 0x43, 0xc0, 0x03, 0x7c, 0x80, 0x01, 0x02, 0x04, 0x78, 0x80,
//     0x13, 0x0c, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x07, 0x18, 0x20, 0x40, 0x80, 0x03,
//     0x03, 0x1e, 0x1e, 0x80, 0x60, 0x18, 0x07, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
//     0x10, 0x10, 0x20, 0x60, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x01, 0x3e, 0xc0, 0x07, 0xf8, 0x1f, 0xe0,
//     0x03, 0x7c
// };

// static const char PROGMEM idle_3_block_list[] = { //IDLE_4
//     0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x01, 0x1e, 0xe0, 0x01, 0x1e, 0xe0, 0x80, 0x80, 0x80,
//     0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1, 0x01, 0xc0, 0x3f, 0xc0, 0x20, 0x10, 0x10, 0x08,
//     0x08, 0x04, 0x02, 0x01, 0x18, 0x18, 0x03, 0x43, 0xc0, 0x03, 0x7c, 0x80, 0x01, 0x02, 0x04, 0x78,
//     0x80, 0x13, 0x0c, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x07, 0x18, 0x20, 0x40, 0x80,
//     0x03, 0x03, 0x1e, 0x1e, 0x80, 0x60, 0x18, 0x07, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20,
//     0x20, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x01, 0x3e, 0xc0, 0x07, 0xf8,
//     0x1f, 0xe0, 0x03, 0x7c
// };

static const char PROGMEM idle_4_block_list[] = { //IDLE_5
    0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x01, 0x1e, 0xe0, 0x01, 0x1e, 0xe0, 0x80, 0x80, 0x80,
    0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1, 0x01, 0xc0, 0x3f, 0xe0, 0x10, 0x08, 0x08, 0x08,
    0x04, 0x02, 0x01, 0x18, 0x18, 0x03, 0x43, 0xc0, 0x03, 0x7c, 0x80, 0x01, 0x06, 0x78, 0x80, 0x13,
    0x0c, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x07, 0x18, 0x20, 0x40, 0x80, 0x03, 0x03,
    0x1e, 0x1e, 0x80, 0x60, 0x18, 0x07, 0x18, 0x27, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10,
    0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x01, 0x3e, 0xc0, 0x07, 0xf8, 0x1f, 0xe0, 0x03,
    0x7c
};

static const char PROGMEM tap_1_block_list[] = { //TAP_1
    0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0x81, 0x1e, 0xe0, 0xe0,
    0xe0, 0xc0, 0xc0, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0xc3, 0x87, 0x8f, 0x1f, 0x1f, 0x1c,
    0x01, 0x1e, 0xe0, 0x80, 0xbf, 0xbf, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x83, 0x43, 0x21, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0xc0, 0x3f, 0xc0, 0x20, 0x10, 0x10,
    0x08, 0x08, 0x04, 0x02, 0x01, 0x18, 0x18, 0x40, 0xc0, 0x03, 0x7c, 0x80, 0x01, 0x02, 0x04, 0x78,
    0x80, 0x13, 0x0c, 0x07, 0x38, 0xc0, 0x07, 0x18, 0x20, 0x40, 0x80, 0x73, 0xab, 0x08, 0x94, 0x64,
    0x64, 0x04, 0x0f, 0x70, 0x80, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x11,
    0x21, 0x22, 0x42, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x01, 0x3e, 0xc0, 0x07, 0xf8, 0x1f, 0xe0, 0x03,
    0x7c
};

static const char PROGMEM tap_2_block_list[] = { //TAP_2
    0x07, 0x78, 0x80, 0x07, 0xf8, 0x1f, 0xe0, 0x01, 0x1e, 0xe0, 0x80, 0x80, 0x80, 0x80, 0x81, 0x1e,
    0xe0, 0x9e, 0x61, 0x24, 0x51, 0x4c, 0x8c, 0x80, 0x81, 0x01, 0x0e, 0xf0, 0xc0, 0x20, 0x10, 0x10,
    0x08, 0x08, 0x04, 0x02, 0x01, 0x18, 0x18, 0x40, 0xc0, 0x03, 0x7c, 0x80, 0x01, 0x02, 0x04, 0x78,
    0x80, 0x13, 0x0c, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0xf0, 0x07, 0x18, 0x20, 0x40,
    0x80, 0x03, 0x03, 0x80, 0x60, 0x18, 0x07, 0x80, 0x80, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20,
    0x20, 0x20, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x7f, 0x7f, 0x7f, 0x7e,
    0x01, 0x3e, 0xc0, 0x07, 0xf8, 0x1f, 0xe0, 0x03, 0x7c
};

// idle_1 and idle_2 are identical, so share them and save some space
const char* idle_frames[NUM_IDLE_FRAMES] = {
    idle_1_block_list,
    // idle_1_block_list,
    // idle_2_block_list,
    // idle_3_block_list,
    idle_4_block_list
};

const char* tap_frames[NUM_TAP_FRAMES] = {
    tap_1_block_list,
    tap_2_block_list
};

// idle_1 and idle_2 are identical, so save some space
const char* idle_block_map[NUM_IDLE_FRAMES] = {
    idle_1_block_map,
    //idle_1_block_map,
    // idle_2_block_map,
    // idle_3_block_map,
    idle_4_block_map
};

const char* tap_block_map[NUM_TAP_FRAMES] = {
    tap_1_block_map,
    tap_2_block_map
};

#else

static const char PROGMEM idle_frames[NUM_IDLE_FRAMES][NUM_OLED_BYTES] = {
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
    0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1,
    0x01, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x03, 0x43,
    0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x40, 0x20, 0x20, 0x10,
    0x10, 0x10, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    // {
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
    // 0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1,
    // 0x01, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x03, 0x43,
    // 0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    // 0x03, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0x40, 0x40, 0x20, 0x20, 0x10,
    // 0x10, 0x10, 0x20, 0x40, 0x40, 0x40, 0x80, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    // },
    // {
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
    // 0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2,
    // 0xc1, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0xc0, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x03,
    // 0x43, 0xc0, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x01, 0x02, 0x04, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x13, 0x0c, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x03, 0x03, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20,
    // 0x20, 0x10, 0x10, 0x20, 0x60, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    // },
    // {
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
    // 0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1,
    // 0x01, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0xc0, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x03, 0x43,
    // 0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x01, 0x02, 0x04, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    // 0x03, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
    // 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    // },
    {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e,
    0xe0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0xc2, 0xc1,
    0x01, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xe0, 0x10, 0x08, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x03, 0x43,
    0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x00, 0x1e, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x27, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
    0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    }
  };
static const char PROGMEM tap_frames[NUM_TAP_FRAMES][NUM_OLED_BYTES] = {
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0x81, 0x1e, 0xe0, 0x00,
    0x00, 0x00, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0xc3, 0x87, 0x8f, 0x1f, 0x1f, 0x1c, 0x01, 0x1e,
    0xe0, 0x80, 0xbf, 0xbf, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0x43, 0x21, 0x10, 0x08, 0x04, 0x02, 0x01,
    0x01, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x40,
    0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x04, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73,
    0xab, 0x08, 0x94, 0x64, 0x64, 0x04, 0x0f, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
    0x10, 0x11, 0x21, 0x22, 0x42, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
    {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x81, 0x1e,
    0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x61, 0x24, 0x51, 0x4c, 0x8c, 0x80, 0x81,
    0x01, 0x0e, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x40,
    0xc0, 0x00, 0x03, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x04, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x13, 0x0c, 0x00, 0x00, 0x07, 0x38, 0x40, 0x20, 0x20, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x07, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x26, 0x41, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20,
    0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x9f, 0xe0, 0x00, 0x7f, 0x7f, 0x7f, 0x7e, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    },
  };
#endif //USE_BITMAP_COMPRESSION
#endif //OLED_ENABLE
