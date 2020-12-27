/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom TFT Color Theme
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_TFT_COLOR_THEME in Configuration.h.
 *
 * See Marlin/src/lcd/tft/tft_color.h for full color options.
 */

#if ENABLED(TFT_CLASSIC_UI)
  #define TFT_MARLINUI_COLOR      COLOR_WHITE        // #FFFFFF
  #define TFT_MARLINBG_COLOR      COLOR_BLACK        // #000000
  #define TFT_DISABLED_COLOR      COLOR_DARK         // #000019
  #define TFT_BTCANCEL_COLOR      COLOR_RED          // #FF0000
  #define TFT_BTARROWS_COLOR      COLOR_BLUE         // #0000FF
  #define TFT_BTOKMENU_COLOR      COLOR_RED          // #FF0000
#elif ENABLED(TFT_COLOR_UI)
  #define COLOR_BACKGROUND        0x20AC             // #1E156E
  #define COLOR_SELECTION_BG      0x9930             // #992380
  #define COLOR_WEBSITE_URL       0x03B7             // #0075BD
  #define COLOR_INACTIVE          COLOR_GREY         // #808080
  #define COLOR_COLD              COLOR_AQUA         // #00FFFF
  #define COLOR_HOTEND            COLOR_SCARLET      // #FF2020
  #define COLOR_HEATED_BED        COLOR_DARK_ORANGE  // #FF8C00
  #define COLOR_CHAMBER           COLOR_DARK_ORANGE  // #C0C0C0
  #define COLOR_FAN               COLOR_AQUA         // #00FFFF
  #define COLOR_AXIS_HOMED        COLOR_WHITE        // #FFFFFF
  #define COLOR_AXIS_NOT_HOMED    COLOR_YELLOW       // #FFFF00
  #define COLOR_RATE_100          COLOR_VIVID_GREEN  // #7FFF00
  #define COLOR_RATE_ALTERED      COLOR_YELLOW       // #FFFF00
  #define COLOR_PRINT_TIME        COLOR_AQUA         // #00FFFF
  #define COLOR_PROGRESS_FRAME    COLOR_WHITE        // #FFFFFF
  #define COLOR_PROGRESS_BAR      COLOR_BLUE         // #0000FF
  #define COLOR_PROGRESS_BG       COLOR_BLACK        // #000000
  #define COLOR_STATUS_MESSAGE    COLOR_YELLOW       // #FFFF00
  #define COLOR_CONTROL_ENABLED   COLOR_WHITE        // #FFFFFF
  #define COLOR_CONTROL_DISABLED  COLOR_GREY         // #808080
  #define COLOR_CONTROL_CANCEL    COLOR_SCARLET      // #FF2020
  #define COLOR_CONTROL_CONFIRM   COLOR_VIVID_GREEN  // #7FFF00
  #define COLOR_BUSY              COLOR_SILVER       // #C0C0C0
  #define COLOR_MENU_TEXT         COLOR_YELLOW       // #FFFF00
  #define COLOR_MENU_VALUE        COLOR_WHITE        // #FFFFFF
  #define COLOR_SLIDER            COLOR_WHITE        // #FFFFFF
  #define COLOR_SLIDER_INACTIVE   COLOR_GREY         // #808080
  #define COLOR_UBL               COLOR_WHITE        // #FFFFFF
  #define COLOR_TOUCH_CALIBRATION COLOR_WHITE        // #FFFFFF
  #define COLOR_KILL_SCREEN_BG    COLOR_MAROON       // #800000
  #define COLOR_KILL_SCREEN_TEXT  COLOR_WHITE        // #FFFFFF
#endif
