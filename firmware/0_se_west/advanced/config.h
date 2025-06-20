/* Copyright 2020 xxx
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
// Rotational encoder
// #define ENCODER_A_PINS { GP27 }
// #define ENCODER_B_PINS { GP28 }
#define ENCODER_RESOLUTION 5 
#define ENCODER_MAP_KEY_DELAY 1  
#define ENCODER_DIRECTION_FLIP   // Uncomment to flip the direction of the encoder

// OLED Setup
#define I2C_DRIVER I2CD0    // This is our i2c isntance ()
#define I2C1_SCL_PIN GP13
#define I2C1_SDA_PIN GP12
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_DISPLAY_128X32

// SE Logo
#define RGBLIGHT_LAYERS