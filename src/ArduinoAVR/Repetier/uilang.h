/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#if !defined(UI_DISPLAY_CHARSET) || UI_DISPLAY_CHARSET > 3
#define UI_DISPLAY_CHARSET 1
#endif

//Symbolic character values for specific symbols.
//May be overridden for different controllers, character sets, etc.
#define cUP "\001"
#define cDEG "\002"
#define cSEL "\003"
#define cUNSEL "\004"
#define cTEMP "\005"
#define cFOLD "\006"
#define bFOLD 6
#define cARROW "\176"

#if UI_DISPLAY_CHARSET == 0 // ASCII fall back
#define CHAR_RIGHT '-'
#define CHAR_SELECTOR '>'
#define CHAR_SELECTED '*'
#define STR_auml "ae"
#define STR_Auml "Ae"
#define STR_uuml "ue"
#define STR_Uuml "Ue"
#define STR_ouml "oe"
#define STR_Ouml "Oe"
#define STR_szlig "ss"
#endif

#if UI_DISPLAY_CHARSET == 1 // HD44870 charset with knji chars
#define CHAR_RIGHT 0x7e
#define CHAR_SELECTOR '>'
#define CHAR_SELECTED '*'
#define STR_auml "\xe1"
#define STR_Auml "Ae"
#define STR_uuml "\365"
#define STR_Uuml "Ue"
#define STR_ouml "\357"
#define STR_Ouml "Oe"
#define STR_szlig "\342"
#endif

#if UI_DISPLAY_CHARSET == 2 // Western charset
#define CHAR_RIGHT 0xbc
#define CHAR_SELECTOR 0xf6
#define CHAR_SELECTED '*'
#define STR_auml "\204"
#define STR_Auml "\216"
#define STR_uuml "\201"
#define STR_Uuml "\212"
#define STR_ouml "\204"
#define STR_Ouml "\211"
#define STR_szlig "160"
#endif


#if UI_DISPLAY_CHARSET==3 // U8glib
#define CHAR_RIGHT 187 //>>
#define CHAR_SELECTOR 255 //'>'
#define CHAR_SELECTED 254 //'*'
#define STR_auml "\344"
#define STR_Auml "\304"
#define STR_uuml "\374"
#define STR_Uuml "\334"
#define STR_ouml "\366"
#define STR_Ouml "\326"
#define STR_szlig "\337"
#endif

#define LANGUAGE_EN_ID 0
#define LANGUAGE_DE_ID 1
#define LANGUAGE_NL_ID 2
#define LANGUAGE_PT_ID 3
#define LANGAUGE_IT_ID 4
#define LANGUAGE_ES_ID 5
#define LANGUAGE_SE_ID 6
#define LANGUAGE_FR_ID 7
#define LANGUAGE_CZ_ID 8
#define LANGUAGE_PL_ID 9
#define LANGUAGE_TR_ID 10
#define LANGUAGE_FI_ID 11

#define NUM_LANGUAGES_KNOWN 12
#define NUM_TRANSLATED_WORDS 347

// For selectable translations we refer to each text by a id which gets
// defined here. The list starts at 0 and defines the position in the
// translation index.

#define UI_TEXT_ON_ID 0 //               "On"
#define UI_TEXT_OFF_ID 1 //              "Off"
#define UI_TEXT_NA_ID 2 //               "N/A" // Output for not available
#define UI_TEXT_YES_ID 3 //              "Yes"
#define UI_TEXT_NO_ID 4 //               "No"
#define UI_TEXT_PRINT_POS_ID 5 //        "Printing..."
#define UI_TEXT_PRINTING_ID 6 //         "Printing"
#define UI_TEXT_IDLE_ID 7 //             "Idle"
#define UI_TEXT_NOSDCARD_ID 8 //         "No SD Card"
#define UI_TEXT_ERROR_ID 9 //            "**** ERROR ****"
#define UI_TEXT_BACK_ID 10 //             "Back " cUP
#define UI_TEXT_QUICK_SETTINGS_ID 11 //   "Quick Settings"
#define UI_TEXT_ERRORMSG_ID 12 //         "%oe"
#define UI_TEXT_CONFIGURATION_ID 13 //    "Configuration"
#define UI_TEXT_POSITION_ID 14 //         "Position"
#define UI_TEXT_EXTRUDER_ID 15 //         "Extruder"
#define UI_TEXT_SD_CARD_ID 16 //          "SD Card"
#define UI_TEXT_DEBUGGING_ID 17 //        "Debugging"
#define UI_TEXT_HOME_DELTA_ID 18 //       "Home Delta"
#define UI_TEXT_HOME_ALL_ID 19 //         "Home All"
#define UI_TEXT_HOME_X_ID 20 //           "Home X"
#define UI_TEXT_HOME_Y_ID 21 //           "Home Y"
#define UI_TEXT_HOME_Z_ID 22 //           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_ID 23 //      "Preheat PLA"
#define UI_TEXT_PREHEAT_ALL_ID 24 //      "Preheat All"
#define UI_TEXT_LIGHTS_ONOFF_ID 25 //     "Lights :%lo"
#define UI_TEXT_COOLDOWN_ID 26 //         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN_ID 27 //    "Set to Origin"
#define UI_TEXT_DISABLE_STEPPER_ID 28 //  "Disable stepper"
#define UI_TEXT_X_POSITION_ID 29 //       "X Position"
#define UI_TEXT_X_POS_FAST_ID 30 //       "X Pos. Fast"
#define UI_TEXT_Y_POSITION_ID 31 //       "Y Position"
#define UI_TEXT_Y_POS_FAST_ID 32 //       "Y Pos. Fast"
#define UI_TEXT_Z_POSITION_ID 33 //       "Z Position"
#define UI_TEXT_Z_POS_FAST_ID 34 //       "Z Pos. Fast"
#define UI_TEXT_E_POSITION_ID 35 //       "Extr. position"
#define UI_TEXT_BED_TEMP_ID 36 //         "Bed Temp: %Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_ID 37 //       "Temp. 1 : %E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_ID 38 //       "Temp. 2 : %E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_ID 39 //       "Temp. 3 : %E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_ID 40 //        "Turn Extr. 1 Off"
#define UI_TEXT_EXTR1_OFF_ID 41 //        "Turn Extr. 2 Off"
#define UI_TEXT_EXTR2_OFF_ID 42 //        "Turn Extr. 3 Off"
#define UI_TEXT_EXTR0_SELECT_ID 43 //     "%X0 Select Extr. 1"
#define UI_TEXT_EXTR1_SELECT_ID 44 //     "%X1 Select Extr. 2"
#define UI_TEXT_EXTR2_SELECT_ID 45 //     "%X2 Select Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_ID 46 //      "Set Origin"
#define UI_TEXT_PRINT_X_ID 47 //          "Print X:%ax"
#define UI_TEXT_PRINT_Y_ID 48 //          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_ID 49 //          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_ID 50 //    "Print:%az"
#define UI_TEXT_MOVE_X_ID 51 //           "Move X :%aX"
#define UI_TEXT_MOVE_Y_ID 52 //           "Move Y :%aY"
#define UI_TEXT_MOVE_Z_ID 53 //           "Move Z :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_ID 54 //     "Move:%aZ"
#define UI_TEXT_JERK_ID 55 //             "Jerk   :%aj"
#define UI_TEXT_ZJERK_ID 56 //            "Z-Jerk :%aJ"
#define UI_TEXT_ACCELERATION_ID 57 //     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_ID 58 //  "Store to EEPROM"
#define UI_TEXT_LOAD_EEPROM_ID 59 //      "Load f. EEPROM"
#define UI_TEXT_DBG_ECHO_ID 60 //         "Echo   :%do"
#define UI_TEXT_DBG_INFO_ID 61 //         "Info   :%di"
#define UI_TEXT_DBG_ERROR_ID 62 //        "Errors :%de"
#define UI_TEXT_DBG_DRYRUN_ID 63 //       "Dry run:%dd"
#define UI_TEXT_OPS_OFF_ID 64 //          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_ID 65 //      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_ID 66 //         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_ID 67 //      "Retract   :%Or"
#define UI_TEXT_OPS_BACKSLASH_ID 68 //    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_ID 69 //      "Min.dist  :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_ID 70 //   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_ID 71 //        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_ID 72 //       "Print file"
#define UI_TEXT_PAUSE_PRINT_ID 73 //      "Pause Print"
#define UI_TEXT_CONTINUE_PRINT_ID 74 //   "Continue Print"
#define UI_TEXT_UNMOUNT_CARD_ID 75 //     "Unmount Card"
#define UI_TEXT_MOUNT_CARD_ID 76 //       "Mount Card"
#define UI_TEXT_DELETE_FILE_ID 77 //      "Delete file"
#define UI_TEXT_FEEDRATE_ID 78 //         "Feedrate"
#define UI_TEXT_FEED_MAX_X_ID 79 //       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_ID 80 //       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_ID 81 //       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_ID 82 // "Max:%fz"
#define UI_TEXT_FEED_HOME_X_ID 83 //      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_ID 84 //      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_ID 85 //      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_ID 86 // "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_ID 87 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_ID 88 // "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_ID 89 // "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_ID 90 // ""
#define UI_TEXT_ACTION_YPOSITION4A_ID 91 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_ID 92 // "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_ID 93 // "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_ID 94 // ""
#define UI_TEXT_ACTION_ZPOSITION4A_ID 95 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_ID 96 // "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_ID 97 // "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_ID 98 // ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_ID 99 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_ID 100 // "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_ID 101 // "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_ID 102 // ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_ID 103 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_ID 104 // "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_ID 105 // "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_ID 106 // ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_ID 107 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_ID 108 // "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_ID 109 // "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_ID 110 // ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_ID 111 // "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_ID 112 // "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_ID 113 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_ID 114 // "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_ID 115 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_ID 116 // "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_ID 117 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_ID 118 // "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_ID 119 // "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_ID 120 // "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_ID 121 // "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_ID 122 // "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_ID 123 // "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_ID 124 // "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_ID 125 //          "Fan speed"
#define UI_TEXT_ACTION_FANSPEED_ID 126 //   "Fan speed:%Fs%%%"
#define UI_TEXT_FAN_OFF_ID 127 //           "Turn Fan Off"
#define UI_TEXT_FAN_25_ID 128 //            "Set Fan 25%%%"
#define UI_TEXT_FAN_50_ID 129 //            "Set Fan 50%%%"
#define UI_TEXT_FAN_75_ID 130 //            "Set Fan 75%%%"
#define UI_TEXT_FAN_FULL_ID 131 //          "Set Fan Full"
#define UI_TEXT_STEPPER_INACTIVE_ID 132 //  "Stepper Inactive"
#define UI_TEXT_STEPPER_INACTIVE2A_ID 133 // "Dis. After: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_ID 134 // "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_ID 135 //    "Max. Inactive"
#define UI_TEXT_POWER_INACTIVE2A_ID 136 //   "Dis. After: %ip"
#define UI_TEXT_POWER_INACTIVE2B_ID 137 //   "[min] 0=Off"
#define UI_TEXT_GENERAL_ID 138 //           "General"
#define UI_TEXT_BAUDRATE_ID 139 //          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_ID 140 //        "Steps/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_ID 141 //   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_ID 142 //     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_ID 143 //        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_ID 144 //        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_ID 145 //    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_ID 146 //    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_ID 147 //      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_ID 148 //        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_ID 149 //     "Deadtime:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_ID 150 //      "Control PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_ID 151 //        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_ID 152 //        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_ID 153 //         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_ID 154 //         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_ID 155 //         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_ID 156 //         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_ID 157 //         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_ID 158 // "BangBang"
#define UI_TEXT_STRING_HM_PID_ID 159 //     "PID"
#define UI_TEXT_STRING_ACTION_ID 160 //     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_ID 161//  "Heating Extruder"
#define UI_TEXT_HEATING_BED_ID 162 //       "Heating Bed"
#define UI_TEXT_KILLED_ID 163 //            "Killed"
#define UI_TEXT_STEPPER_DISABLED_ID 164 //  "Stepper Disabled"
#define UI_TEXT_EEPROM_STOREDA_ID 165 //     "Configuration"
#define UI_TEXT_EEPROM_STOREDB_ID 166 //     "stored in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_ID 167 //     "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_ID 168 //     "loaded f. EEPROM"
#define UI_TEXT_UPLOADING_ID 169 //         "Uploading..."
#define UI_TEXT_PAGE_BUFFER_ID 170 //       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_ID 171 //     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_ID 172 //     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_ID 173 //     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_ID 174 //     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_ID 175 //          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_ID 176 //    "Speed Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_ID 177 //     "Flow Mul. :%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_ID 178 //  "Show meas."
#define UI_TEXT_RESET_MEASUREMENT_ID 179 // "Reset meas."
#define UI_TEXT_SET_MEASURED_ORIGIN_ID 180 // "Set Z=0"
#define UI_TEXT_ZCALIB_ID 181 //             "Z Calib."
#define UI_TEXT_SET_P1_ID 182 //            "Set P1"
#define UI_TEXT_SET_P2_ID 183 //            "Set P2"
#define UI_TEXT_SET_P3_ID 184 //            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_ID 185 // "Calculate Leveling"
#define UI_TEXT_LEVEL_ID 186 //             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_ID 187 // "Wait Temp. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_ID 188 // "Wait Units: %XU mm"
#define UI_TEXT_SD_REMOVED_ID 189 //       "SD Card removed"
#define UI_TEXT_SD_INSERTED_ID 190 //      "SD Card inserted"
#define UI_TEXT_PRINTER_READY_ID 191 //    "Printer ready."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_ID 192 //   " days "
#define UI_TEXT_PRINTTIME_HOURS_ID 193 //  ":"
#define UI_TEXT_PRINTTIME_MINUTES_ID 194 // ""
#define UI_TEXT_PRINT_TIME_ID 195 //     "Printing time"
#define UI_TEXT_PRINT_FILAMENT_ID 196 // "Filament printed"
#define UI_TEXT_PRINTED_ID 197 //           "printed"
#define UI_TEXT_POWER_ID 198 //            "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_ID 199 //     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_ID 200 //     "SlowBang"
#define UI_TEXT_STOP_PRINT_ID 201 // "Stop Print"
#define UI_TEXT_Z_BABYSTEPPING_ID 202 // "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_ID 203 // "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_ID 204 // "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_ID 205 // "Rotate to move"
#define UI_TEXT_WIZ_CH_FILAMENT3_ID 206 // "filament up/down"
#define UI_TEXT_CLICK_DONE_ID 207 // "Click when done"
#define UI_TEXT_AUTOLEVEL_ONOFF_ID 208 //  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_ID 209 // "Servo pos.: %oS"
#define UI_TEXT_IGNORE_M106_ID 210 //      "Ignore M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_ID 211 // "Click to reheat"
#define UI_TEXT_WIZ_REHEAT2_ID 212 // "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_ID 213 // "Wait for target"
#define UI_TEXT_WIZ_WAITTEMP2_ID 214 // "temperatures ..."
#define UI_TEXT_EXTRUDER_JAM_ID 215 // "Extruder Jam"
#define UI_TEXT_STANDBY_ID 216 // "Standby"
#define UI_TEXT_BED_COATING_ID 217 // "Bed Coating"
#define UI_TEXT_BED_COATING_SET1_ID 218 // "Bed coating set to",""
#define UI_TEXT_BED_COATING_SET2_ID 219 // "Bed coating set to",""
#define UI_TEXT_NOCOATING_ID 220 // "No Coating"
#define UI_TEXT_BUILDTAK_ID 221 // "BuildTak"
#define UI_TEXT_KAPTON_ID 222 // "Kapton"
#define UI_TEXT_BLUETAPE_ID 223 // "Blue Paper Tape"
#define UI_TEXT_PETTAPE_ID 224 // "Green PET Tape"
#define UI_TEXT_GLUESTICK_ID 225 // "Glue Stick"
#define UI_TEXT_CUSTOM_ID 226 // "Custom"
#define UI_TEXT_COATING_CUSTOM_ID 227 // "Custom : %oCmm"
#define UI_TEXT_LANGUAGE_ID 228 // "Language"
#define UI_TEXT_MAINPAGE6_1_ID 229 //"\xa %e0/%E0\xb0 X:%x0"
#define UI_TEXT_MAINPAGE6_2_ID 230 //"\xa %e1/%E1\xb0 Y:%x1"
#define UI_TEXT_MAINPAGE6_3_ID 231 //"\xe %eb/%Eb\xb0 Z:%x2",
#define UI_TEXT_MAINPAGE6_4_ID 232 //"Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_ID 233 //"Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_ID 234 //"%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_ID 235 //cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_ID 236 //"B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_ID 237 //"Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_ID 238 //"Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_ID 239 //"X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_ID 240 //"%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_ID 241 //"%Uf m"
#define UI_TEXT_METER_PRINTED_ID 242 //"%Uf m " UI_TEXT_PRINTED
#define UI_TEXT_STATUS_ID 243 //"%os"
#define UI_TEXT_EMPTY_ID 244 //""
#define UI_TEXT_TEMP_SET_ID 245 //cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_ID 246 //cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_ID 247 //" %oCmm"
#define UI_TEXT_EXTR3_TEMP_ID 248 //       "Temp. 4 : %E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_ID 249 //       "Temp. 5 : %E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_ID 250 //       "Temp. 6 : %E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_ID 251
#define UI_TEXT_EXTR4_OFF_ID 252
#define UI_TEXT_EXTR5_OFF_ID 253
#define UI_TEXT_EXTR3_SELECT_ID 254
#define UI_TEXT_EXTR4_SELECT_ID 255
#define UI_TEXT_EXTR5_SELECT_ID 256
#define UI_TEXT_DITTO_0_ID 257
#define UI_TEXT_DITTO_1_ID 258
#define UI_TEXT_DITTO_2_ID 259
#define UI_TEXT_DITTO_3_ID 260
#define UI_TEXT_ZPROBE_HEIGHT_ID 261
#define UI_TEXT_OFFSETS_ID 262
#define UI_TEXT_X_OFFSET_ID 263
#define UI_TEXT_Y_OFFSET_ID 264
#define UI_TEXT_Z_OFFSET_ID 265
#define UI_TEXT_DBG_ENDSTOP_ID 266 //     "EndStop:%dp"
#define UI_TEXT_LAYER_ID 267
#define UI_TEXT_PROGRESS_ID 268
#define UI_TEXT_PRINTNAME_ID 269

#define UI_TEXT_SETUP_ID 270 //"Setup"
#define UI_TEXT_MEASURE_DISTORTION_ID 271 // "Measure distortion"
#define UI_TEXT_DISTORTION_CORR_ID 272 // "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_ID 273 //   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_ID 274 // "Cancel"
#define UI_TEXT_PLEASE_WAIT_ID 275 // "*** Please wait ***"
#define UI_TEXT_CLEARBED1_ID 276 // "Make sure the heated"
#define UI_TEXT_CLEARBED2_ID 277 // "bed is clear of any"
#define UI_TEXT_CLEARBED3_ID 278 // "obstructions"
#define UI_TEXT_NOTIFICATION_ID 279 // "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_ID 280 // "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_ID 281 // "Heater decoupled"
#define UI_TEXT_SLIPPING_ID 282 // "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_ID 283 // "Leveling error"
#define UI_TEXT_OK_ID 284 // "Ok"
#define UI_TEXT_CALIBRATING_ID 285 // "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_ID 286 // "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_ID 287 // "Autolevel bed"
#define UI_TEXT_HOMING_ID 288 // "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_ID 289 // "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_ID 290 // "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_ID 291 // "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_ID 292 // "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_ID 293 // "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_ID 294 // "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_ID 295 // "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_ID 296 // "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_ID 297 // "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_ID 298 // "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_ID 299 // "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_ID 300 // "Continue"
#define UI_TEXT_CLOSE_ID 301 // "Close"
#define UI_TEXT_EXTR_ZOFF_ID 302 //         "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_ID 303 // "Measuring ..."
#define UI_TEXT_Z_PROBE_ID 304
#define UI_TEXT_MAINPAGE6_1_C_ID 305 //"\xa %e0/%E0\xb0 X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_ID 306 //"\xa %e1/%E1\xb0 Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_ID 307 //"\xe %eb/%Eb\xb0 Z:%x2"
#define UI_TEXT_MAINPAGE6_4_C_ID 308 //""Mul: %om%%% Laser %op W"
#define UI_TEXT_MAINPAGE6_4_L_ID 309 //""Mul: %om%%% Spindle %opRPM"
#define UI_TEXT_JAMCONTROL_ID 310 // "%ej Jam Control

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_ID 311
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_ID 312
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_ID 313
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_ID 314
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_ID 315
#define UI_TEXT_SERVICE_MENU_ID 316
#define UI_SERVICE_MENU_ITEM1_ID 317
#define UI_SERVICE_MENU_ITEM2_ID 318
#define UI_SERVICE_MENU_ITEM3_ID 319
#define UI_SERVICE_MENU_ITEM4_ID 320
#define UI_SERVICE_MENU_ITEM5_ID 321

#define UI_TEXT_WIZ_CRASH_11_ID 322
#define UI_TEXT_WIZ_CRASH_12_ID 323
#define UI_TEXT_WIZ_CRASH_13_ID 324

#define UI_TEXT_WIZ_CRASH_21_ID 325
#define UI_TEXT_WIZ_CRASH_22_ID 326
#define UI_TEXT_WIZ_CRASH_23_ID 327

#define UI_TEXT_WIZ_CRASH_31_ID 328
#define UI_TEXT_WIZ_CRASH_32_ID 329
#define UI_TEXT_WIZ_CRASH_33_ID 330

#define UI_TEXT_WIZ_CRASH_41_ID 331
#define UI_TEXT_WIZ_CRASH_42_ID 332
#define UI_TEXT_WIZ_CRASH_43_ID 333

#define UI_TEXT_STALLGUARD_ITEM_ID 334

#define UI_TEXT_WIZ_AC_LOST_11_ID 335
#define UI_TEXT_WIZ_AC_LOST_12_ID 336
#define UI_TEXT_WIZ_AC_LOST_13_ID 337

#define UI_TEXT_WIZ_AC_LOST_21_ID 338
#define UI_TEXT_WIZ_AC_LOST_22_ID 339
#define UI_TEXT_WIZ_AC_LOST_23_ID 340

#define UI_TEXT_WIZ_AC_LOST_31_ID 341
#define UI_TEXT_WIZ_AC_LOST_32_ID 342
#define UI_TEXT_WIZ_AC_LOST_33_ID 343

#define UI_TEXT_WIZ_AC_LOST_41_ID 344
#define UI_TEXT_WIZ_AC_LOST_42_ID 345
#define UI_TEXT_WIZ_AC_LOST_43_ID 346




// Universal definitions

#define UI_TEXT_SEL              cSEL
#define UI_TEXT_NOSEL            cUNSEL


// At first all terms in English are defined. After that the selected language
// can overwrite the definition. That way new strings are at least in English
// available.

#define UI_TEXT_ON_EN               "On"
#define UI_TEXT_OFF_EN              "Off"
#define UI_TEXT_NA_EN               "N/A" // Output for not available
#define UI_TEXT_YES_EN              "Yes"
#define UI_TEXT_NO_EN               "No"
#define UI_TEXT_PRINT_POS_EN        "Printing..."
#define UI_TEXT_PRINTING_EN         "Printing"
#define UI_TEXT_IDLE_EN             "Idle"
#define UI_TEXT_NOSDCARD_EN         "No SD card"
#define UI_TEXT_ERROR_EN            "**** ERROR ****"
#define UI_TEXT_BACK_EN             "Back " cUP
#define UI_TEXT_QUICK_SETTINGS_EN   "Control"
#define UI_TEXT_ERRORMSG_EN         "%oe"
#define UI_TEXT_CONFIGURATION_EN    "Settings"
#define UI_TEXT_POSITION_EN         "Move"
#define UI_TEXT_EXTRUDER_EN         "Extruder"
#define UI_TEXT_SD_CARD_EN          "SD card"
#define UI_TEXT_DEBUGGING_EN        "Debugging"
#define UI_TEXT_HOME_DELTA_EN       "Home delta"
#define UI_TEXT_HOME_ALL_EN         "Home all"
#define UI_TEXT_HOME_X_EN           "Home X"
#define UI_TEXT_HOME_Y_EN           "Home Y"
#define UI_TEXT_HOME_Z_EN           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_EN   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_EN      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_EN     "Lights:%lo"
#define UI_TEXT_COOLDOWN_EN         "Cooldown"
#define UI_TEXT_SET_TO_ORIGIN_EN    "Set to origin"
#define UI_TEXT_DISABLE_STEPPER_EN  "Disable stepper"
#define UI_TEXT_X_POSITION_EN       "Move X"
#define UI_TEXT_X_POS_FAST_EN       "Move X fast"
#define UI_TEXT_Y_POSITION_EN       "Move Y"
#define UI_TEXT_Y_POS_FAST_EN       "Move Y fast"
#define UI_TEXT_Z_POSITION_EN       "Move Z"
#define UI_TEXT_Z_POS_FAST_EN       "Move Z fast"
#define UI_TEXT_E_POSITION_EN       "Move Extruder"
#define UI_TEXT_BED_TEMP_EN         "Bed temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_EN       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_EN       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_EN       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_EN        "Turn extr. 1 off"
#define UI_TEXT_EXTR1_OFF_EN        "Turn extr. 2 off"
#define UI_TEXT_EXTR2_OFF_EN        "Turn extr. 3 off"
#define UI_TEXT_EXTR0_SELECT_EN     "%X0 Select extr. 1"
#define UI_TEXT_EXTR1_SELECT_EN     "%X1 Select extr. 2"
#define UI_TEXT_EXTR2_SELECT_EN     "%X2 Select extr. 3"
#define UI_TEXT_EXTR_ORIGIN_EN      "Set Origin"
#define UI_TEXT_PRINT_X_EN          "Print X:%ax"
#define UI_TEXT_PRINT_Y_EN          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_EN          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_EN    "Print:%az"
#define UI_TEXT_MOVE_X_EN           "Move X :%aX"
#define UI_TEXT_MOVE_Y_EN           "Move Y :%aY"
#define UI_TEXT_MOVE_Z_EN           "Move Z :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_EN     "Move:%aZ"
#define UI_TEXT_JERK_EN             "Jerk   :%aj"
#define UI_TEXT_ZJERK_EN            "Z-Jerk :%aJ"
#define UI_TEXT_ACCELERATION_EN     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_EN  "Store to EEPROM"
#define UI_TEXT_LOAD_EEPROM_EN      "Load f. EEPROM"
#define UI_TEXT_DBG_ECHO_EN         "Echo   :%do"
#define UI_TEXT_DBG_INFO_EN         "Info   :%di"
#define UI_TEXT_DBG_ERROR_EN        "Errors :%de"
#define UI_TEXT_DBG_DRYRUN_EN       "Dry run:%dd"
#define UI_TEXT_DBG_ENDSTOP_EN      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_EN          "%O0 OPS off"
#define UI_TEXT_OPS_CLASSIC_EN      "%O1 OPS classic"
#define UI_TEXT_OPS_FAST_EN         "%O2 OPS fast"
#define UI_TEXT_OPS_RETRACT_EN      "Retract   :%Or"
#define UI_TEXT_OPS_BACKSLASH_EN    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_EN      "Min.dist  :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_EN   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_EN        "Anti ooze"
#define UI_TEXT_PRINT_FILE_EN       "Print file"
#define UI_TEXT_PAUSE_PRINT_EN      "Pause print"
#define UI_TEXT_CONTINUE_PRINT_EN   "Continue print"
#define UI_TEXT_UNMOUNT_CARD_EN     "Unmount card"
#define UI_TEXT_MOUNT_CARD_EN       "Mount card"
#define UI_TEXT_DELETE_FILE_EN      "Delete file"
#define UI_TEXT_FEEDRATE_EN         "Feedrate"
#define UI_TEXT_FEED_MAX_X_EN       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_EN       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_EN       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_EN "Max:%fz"
#define UI_TEXT_FEED_HOME_X_EN      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_EN      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_EN      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_EN "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_EN "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_EN "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_EN "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_EN ""
#define UI_TEXT_ACTION_YPOSITION4A_EN "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_EN "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_EN "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_EN ""
#define UI_TEXT_ACTION_ZPOSITION4A_EN "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_EN "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_EN "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_EN ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_EN "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_EN "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_EN "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_EN "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_EN "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_EN "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_EN ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_EN "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_EN "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_EN "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_EN "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_EN "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_EN "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_EN "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_EN "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_EN "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_EN "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_EN "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_EN          "Fan speed"
#define UI_TEXT_ACTION_FANSPEED_EN   "Fan speed:%Fs%%%"
#define UI_TEXT_FAN_OFF_EN           "Turn fan Off"
#define UI_TEXT_FAN_25_EN            "Set fan 25%%%"
#define UI_TEXT_FAN_50_EN            "Set fan 50%%%"
#define UI_TEXT_FAN_75_EN            "Set fan 75%%%"
#define UI_TEXT_FAN_FULL_EN          "Set fan full"
#define UI_TEXT_STEPPER_INACTIVE_EN  "Stepper inactive"
#define UI_TEXT_STEPPER_INACTIVE2A_EN "Dis. after: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_EN "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_EN    "Max. inactive"
#define UI_TEXT_POWER_INACTIVE2A_EN   "Dis. after: %ip"
#define UI_TEXT_POWER_INACTIVE2B_EN   "[min] 0=Off"
#define UI_TEXT_GENERAL_EN           "General"
#define UI_TEXT_BAUDRATE_EN          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_EN        "Steps/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_EN   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_EN     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_EN        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_EN        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_EN    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_EN    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_EN      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_EN        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_EN     "Deadtime:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_EN      "Control PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_EN        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_EN        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_EN         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_EN         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_EN         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_EN         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_EN         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_EN "BangBang"
#define UI_TEXT_STRING_HM_PID_EN     "PID"
#define UI_TEXT_STRING_ACTION_EN     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_EN  "Heating extruder"
#define UI_TEXT_HEATING_BED_EN       "Heating bed"
#define UI_TEXT_KILLED_EN            "Killed"
#define UI_TEXT_STEPPER_DISABLED_EN  "Stepper disabled"
#define UI_TEXT_EEPROM_STOREDA_EN     "Configuration"
#define UI_TEXT_EEPROM_STOREDB_EN     "stored in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_EN     "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_EN     "loaded f. EEPROM"
#define UI_TEXT_UPLOADING_EN         "Uploading..."
#define UI_TEXT_PAGE_BUFFER_EN       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_EN     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_EN     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_EN     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_EN     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_EN          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_EN    "Speed mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_EN     "Flow mul. :%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_EN  "Show meas."
#define UI_TEXT_RESET_MEASUREMENT_EN "Reset meas."
#define UI_TEXT_SET_MEASURED_ORIGIN_EN "Set Z=0"
#define UI_TEXT_ZCALIB_EN             "Z calib."
#define UI_TEXT_SET_P1_EN            "Set P1"
#define UI_TEXT_SET_P2_EN            "Set P2"
#define UI_TEXT_SET_P3_EN            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_EN "Calculate leveling"
#define UI_TEXT_LEVEL_EN             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_EN "Wait temp. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_EN "Wait retr.:%XU mm"
#define UI_TEXT_SD_REMOVED_EN       "SD card removed"
#define UI_TEXT_SD_INSERTED_EN      "SD card inserted"
#define UI_TEXT_PRINTER_READY_EN    "Printer ready."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_EN   " days "
#define UI_TEXT_PRINTTIME_HOURS_EN  ":"
#define UI_TEXT_PRINTTIME_MINUTES_EN ""
#define UI_TEXT_PRINT_TIME_EN     "Printing time"
#define UI_TEXT_PRINT_FILAMENT_EN "Filament printed"
#define UI_TEXT_PRINTED_EN           "printed"
#define UI_TEXT_POWER_EN            "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_EN     "Dead time"
#define UI_TEXT_STRING_HM_SLOWBANG_EN     "SlowBang"
#define UI_TEXT_STOP_PRINT_EN "Stop Print"
#define UI_TEXT_Z_BABYSTEPPING_EN "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_EN "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_EN "Change filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_EN "Rotate to move"
#define UI_TEXT_WIZ_CH_FILAMENT3_EN "filament up/down"
#define UI_TEXT_CLICK_DONE_EN "Click when done"
#define UI_TEXT_AUTOLEVEL_ONOFF_EN  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_EN "Servo pos.: %oS"
#define UI_TEXT_IGNORE_M106_EN      "Ignore M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_EN "Click to reheat"
#define UI_TEXT_WIZ_REHEAT2_EN "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_EN "Wait for target"
#define UI_TEXT_WIZ_WAITTEMP2_EN "temperatures ..."
#define UI_TEXT_EXTRUDER_JAM_EN "Extruder jam"
#define UI_TEXT_STANDBY_EN "Standby"
#define UI_TEXT_BED_COATING_EN "Bed coating"
#define UI_TEXT_BED_COATING_SET1_EN "Bed coating set to"
#define UI_TEXT_BED_COATING_SET2_EN ""
#define UI_TEXT_NOCOATING_EN "No coating"
#define UI_TEXT_BUILDTAK_EN "BuildTak"
#define UI_TEXT_KAPTON_EN "Kapton"
#define UI_TEXT_BLUETAPE_EN "Blue paper tape"
#define UI_TEXT_PETTAPE_EN "Green PET tape"
#define UI_TEXT_GLUESTICK_EN "Glue stick"
#define UI_TEXT_CUSTOM_EN "Custom"
#define UI_TEXT_COATING_CUSTOM_EN "Custom:%BCmm"
#define UI_TEXT_LANGUAGE_EN "Language"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_EN "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_EN "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_EN "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_EN "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_EN "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_EN "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_EN "Copies: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_EN "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_EN "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_EN "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_EN "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_EN cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_EN "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_EN "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_EN "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_EN "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_EN "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_EN "%Uf m"
#define UI_TEXT_METER_PRINTED_EN "%Uf m " UI_TEXT_PRINTED_EN
#define UI_TEXT_STATUS_EN "%os"
#define UI_TEXT_EMPTY_EN ""
#define UI_TEXT_TEMP_SET_EN cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_EN cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_EN " %BCmm"
#define UI_TEXT_EXTR3_TEMP_EN "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_EN "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_EN "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_EN "Turn extr. 4 off"
#define UI_TEXT_EXTR4_OFF_EN "Turn extr. 5 off"
#define UI_TEXT_EXTR5_OFF_EN "Turn extr. 6 off"
#define UI_TEXT_EXTR3_SELECT_EN "%X3 Select extr. 4"
#define UI_TEXT_EXTR4_SELECT_EN "%X4 Select extr. 5"
#define UI_TEXT_EXTR5_SELECT_EN "%X5 Select extr. 6"
#define UI_TEXT_DITTO_0_EN "%D0 No copies"
#define UI_TEXT_DITTO_1_EN "%D1 1 copy"
#define UI_TEXT_DITTO_2_EN "%D2 2 copies"
#define UI_TEXT_DITTO_3_EN "%D3 3 copies"
#define UI_TEXT_ZPROBE_HEIGHT_EN "Z-probe hgt:%zh"

#define UI_TEXT_OFFSETS_EN "Set print offsets"
#define UI_TEXT_X_OFFSET_EN "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_EN "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_EN "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_EN "Layer %Pl/%PL"
#define UI_TEXT_PROGRESS_EN "%Pp%%%"
#define UI_TEXT_PRINTNAME_EN "%Pn"

#define UI_TEXT_SETUP_EN "Setup"
#define UI_TEXT_MEASURE_DISTORTION_EN "Measure distortion"
#define UI_TEXT_DISTORTION_CORR_EN "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_EN   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_EN "Cancel"
#define UI_TEXT_PLEASE_WAIT_EN "*** Please wait ***"
#define UI_TEXT_CLEARBED1_EN "Make sure the heated"
#define UI_TEXT_CLEARBED2_EN "bed is clear of any"
#define UI_TEXT_CLEARBED3_EN "obstructions"
#define UI_TEXT_NOTIFICATION_EN "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_EN "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_EN "Heater decoupled"
#define UI_TEXT_SLIPPING_EN "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_EN "Leveling error"
#define UI_TEXT_OK_EN "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_EN "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_EN "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_EN "Autolevel bed"
#define UI_TEXT_HOMING_EN "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_EN "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_EN "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_EN "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_EN "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_EN "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_EN "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_EN "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_EN "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_EN "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_EN "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_EN "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_EN "Continue"
#define UI_TEXT_CLOSE_EN "Close"
#define UI_TEXT_EXTR_ZOFF_EN "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_EN "Measuring ..."
#define UI_TEXT_Z_PROBE_EN "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_EN "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_EN "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_EN "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_EN "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_EN "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_EN "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_EN USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_EN USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_EN USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_EN USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_EN USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_EN UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_EN UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_EN UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_EN UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_EN UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_EN UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_EN UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_EN UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_EN UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_EN UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_EN UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_EN UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_EN UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_EN UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_EN UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_EN UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_EN UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_EN UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_EN UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_EN UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_EN UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_EN UI_TEXT_WIZ_AC_LOST_13_TEXT

#define UI_TEXT_WIZ_AC_LOST_21_EN UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_EN UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_EN UI_TEXT_WIZ_AC_LOST_23_TEXT

#define UI_TEXT_WIZ_AC_LOST_31_EN UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_EN UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_EN UI_TEXT_WIZ_AC_LOST_33_TEXT

#define UI_TEXT_WIZ_AC_LOST_41_EN UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_EN UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_EN UI_TEXT_WIZ_AC_LOST_43_TEXT

// *************** German translation ****************

#define UI_TEXT_ON_DE               "An"
#define UI_TEXT_OFF_DE              "Aus"
#define UI_TEXT_NA_DE               "nv"
#define UI_TEXT_YES_DE              "Ja"
#define UI_TEXT_NO_DE               "Nein"
#define UI_TEXT_PRINT_POS_DE        "Drucke..."
#define UI_TEXT_PRINTING_DE         "Drucken"
#define UI_TEXT_IDLE_DE             "Leerlauf"
#define UI_TEXT_NOSDCARD_DE         "Keine SD Karte"
#define UI_TEXT_ERROR_DE            "**** FEHLER ****"
#define UI_TEXT_BACK_DE             "Zur" STR_uuml "ck " cUP
#define UI_TEXT_QUICK_SETTINGS_DE   "Steuerung"
#define UI_TEXT_ERRORMSG_DE         "%oe"
#define UI_TEXT_CONFIGURATION_DE    "Einstellungen"
#define UI_TEXT_POSITION_DE         "Position"
#define UI_TEXT_EXTRUDER_DE         "Extruder"
#define UI_TEXT_SD_CARD_DE          "SD Karte"
#define UI_TEXT_DEBUGGING_DE        "Debugging"
#define UI_TEXT_HOME_DELTA_DE       "Home Delta"
#define UI_TEXT_HOME_ALL_DE         "Home Alle"
#define UI_TEXT_HOME_X_DE           "Home X"
#define UI_TEXT_HOME_Y_DE           "Home Y"
#define UI_TEXT_HOME_Z_DE           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_DE   "Vorheizen Extr. 1"
#define UI_TEXT_PREHEAT_ALL_DE      "Vorheizen alle"
#define UI_TEXT_LIGHTS_ONOFF_DE     "Lampen: %lo"
#define UI_TEXT_COOLDOWN_DE         "Abk" STR_uuml "hlen"
#define UI_TEXT_SET_TO_ORIGIN_DE    "Setze Nullpunkt"
#define UI_TEXT_DISABLE_STEPPER_DE  "Motoren Aussch."
#define UI_TEXT_X_POSITION_DE       "X Position"
#define UI_TEXT_X_POS_FAST_DE       "X Pos. Schnell"
#define UI_TEXT_Y_POSITION_DE       "Y Position"
#define UI_TEXT_Y_POS_FAST_DE       "Y Pos. Schnell"
#define UI_TEXT_Z_POSITION_DE       "Z Position"
#define UI_TEXT_Z_POS_FAST_DE       "Z Pos. Schnell"
#define UI_TEXT_E_POSITION_DE       "Extr. Position"
#define UI_TEXT_BED_TEMP_DE         "Bed Temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_DE       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_DE       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_DE       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_DE        "Extruder 1 Aus"
#define UI_TEXT_EXTR1_OFF_DE        "Extruder 2 Aus"
#define UI_TEXT_EXTR2_OFF_DE        "Extruder 3 Aus"
#define UI_TEXT_EXTR0_SELECT_DE     "%X0 W" STR_auml "hle Extr. 1"
#define UI_TEXT_EXTR1_SELECT_DE     "%X1 W" STR_auml "hle Extr. 2"
#define UI_TEXT_EXTR2_SELECT_DE     "%X2 W" STR_auml "hle Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_DE      "Setze Nullpunkt"
#define UI_TEXT_PRINT_X_DE          "Drucken X:%ax"
#define UI_TEXT_PRINT_Y_DE          "Drucken Y:%ay"
#define UI_TEXT_PRINT_Z_DE          "Drucken Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_DE    "Drucken:%az"
#define UI_TEXT_MOVE_X_DE           "Bewege X:%aX"
#define UI_TEXT_MOVE_Y_DE           "Bewege Y:%aY"
#define UI_TEXT_MOVE_Z_DE           "Bewege Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_DE     "Bewege:%aZ"
#define UI_TEXT_JERK_DE             "Ruck     :%aj"
#define UI_TEXT_ZJERK_DE            "Z-Ruck   :%aJ"
#define UI_TEXT_ACCELERATION_DE     "Beschleunigung"
#define UI_TEXT_STORE_TO_EEPROM_DE  "Sichere EEPROM"
#define UI_TEXT_LOAD_EEPROM_DE      "Lade vom EEPROM"
#define UI_TEXT_DBG_ECHO_DE         "Echo       :%do"
#define UI_TEXT_DBG_INFO_DE         "Info       :%di"
#define UI_TEXT_DBG_ERROR_DE        "Fehler     :%de"
#define UI_TEXT_DBG_DRYRUN_DE       "Trockenlauf:%dd"
#define UI_TEXT_DBG_ENDSTOP_DE      "EndStop    :%dp"
#define UI_TEXT_OPS_OFF_DE          "%O0 OPS Aus"
#define UI_TEXT_OPS_CLASSIC_DE      "%O1 OPS Klassisch"
#define UI_TEXT_OPS_FAST_DE         "%O2 OPS Schnell"
#define UI_TEXT_OPS_RETRACT_DE      "Einfahren :%Or"
#define UI_TEXT_OPS_BACKSLASH_DE    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_DE      "Min.Abst. :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_DE   "Start nach:%Oa"
#define UI_TEXT_ANTI_OOZE_DE        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_DE       "Drucke Datei"
#define UI_TEXT_PAUSE_PRINT_DE      "Druck Pausieren"
#define UI_TEXT_CONTINUE_PRINT_DE   "Druck Forts."
#define UI_TEXT_UNMOUNT_CARD_DE     "Unmount Karte"
#define UI_TEXT_MOUNT_CARD_DE       "Mount Karte"
#define UI_TEXT_DELETE_FILE_DE      "Datei l" STR_ouml "schen"
#define UI_TEXT_FEEDRATE_DE         "Feedrate"
#define UI_TEXT_FEED_MAX_X_DE       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_DE       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_DE       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_DE "Max:%fz"
#define UI_TEXT_FEED_HOME_X_DE      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_DE      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_DE      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_DE "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_DE "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_DE "Min Endstopp:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_DE "Max Endstopp:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_DE ""
#define UI_TEXT_ACTION_YPOSITION4A_DE "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_DE "Min Endstopp:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_DE "Max Endstopp:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_DE ""
#define UI_TEXT_ACTION_ZPOSITION4A_DE "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_DE "Min Endstopp:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_DE "Max Endstopp:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_DE ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_DE "Min Endstopp:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_DE "Max Endstopp:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_DE "Min Endstopp:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_DE "Max Endstopp:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_DE "Min Endstopp:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_DE "Max Endstopp:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_DE ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_DE "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_DE "1 klick = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_DE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_DE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_DE "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_DE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_DE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_DE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_DE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_DE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_DE "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_DE          "L" STR_uuml "fter"
#define UI_TEXT_ACTION_FANSPEED_DE   "L" STR_uuml "fter:%Fs%%%"
#define UI_TEXT_FAN_OFF_DE           "L" STR_uuml "fter Aus"
#define UI_TEXT_FAN_25_DE            "L" STR_uuml "fter auf 25%%%"
#define UI_TEXT_FAN_50_DE            "L" STR_uuml "fter auf 50%%%"
#define UI_TEXT_FAN_75_DE            "L" STR_uuml "fter auf 75%%%"
#define UI_TEXT_FAN_FULL_DE          "L" STR_uuml "fter Voll"
#define UI_TEXT_STEPPER_INACTIVE_DE  "Motor Inaktiv"
#define UI_TEXT_STEPPER_INACTIVE2A_DE "Aus nach: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_DE "[min] 0=Aus"
#define UI_TEXT_POWER_INACTIVE_DE    "Max. Inaktiv"
#define UI_TEXT_POWER_INACTIVE2A_DE   "Aus nach: %ip"
#define UI_TEXT_POWER_INACTIVE2B_DE   "[min] 0=Aus"
#define UI_TEXT_GENERAL_DE           "Allgemein"
#define UI_TEXT_BAUDRATE_DE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_DE        "Schr/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_DE   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_DE     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_DE        "Beschl.:%XA"
#define UI_TEXT_EXTR_WATCH_DE        "Stab.Zeit:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_DE    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_DE    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_DE      "Regler:%Xh"
#define UI_TEXT_EXTR_PGAIN_DE        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_DE     "Totzeit:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_DE      "Controll-PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_DE        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_DE        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_DE         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_DE         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_DE         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_DE         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_DE         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_DE "BangBang"
#define UI_TEXT_STRING_HM_PID_DE     "PID"
#define UI_TEXT_STRING_ACTION_DE     "Aktion:%la"
#define UI_TEXT_HEATING_EXTRUDER_DE  "Heize Extruder"
#define UI_TEXT_HEATING_BED_DE       "Heize Druckbett"
#define UI_TEXT_KILLED_DE            "Angehalten"
#define UI_TEXT_STEPPER_DISABLED_DE  "Motoren Aus"
#define UI_TEXT_EEPROM_STOREDA_DE     "Konfiguration"
#define UI_TEXT_EEPROM_STOREDB_DE     "gespeichert."
#define UI_TEXT_EEPROM_LOADEDA_DE     "Konfiguration"
#define UI_TEXT_EEPROM_LOADEDB_DE     "geladen."
#define UI_TEXT_UPLOADING_DE         "Hochladen..."
#define UI_TEXT_PAGE_BUFFER_DE       "Puffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_DE     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_DE     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_DE     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_DE     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_DE          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_DE    "Geschw.Mul:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_DE     "Flow Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_DE  "Zeige Messung"
#define UI_TEXT_RESET_MEASUREMENT_DE "Reset Messung"
#define UI_TEXT_SET_MEASURED_ORIGIN_DE "Setze Z=0"
#define UI_TEXT_ZCALIB_DE        "Z Kalib."
#define UI_TEXT_SET_P1_DE       "Setze P1"
#define UI_TEXT_SET_P2_DE       "Setze P2"
#define UI_TEXT_SET_P3_DE       "Setze P3"
#define UI_TEXT_CALCULATE_LEVELING_DE "Berechne Leveling"
#define UI_TEXT_LEVEL_DE        "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_DE  "Wartetemp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_DE "R" STR_uuml "ckz. um:%XU mm"
#define UI_TEXT_SD_REMOVED_DE       "SD Karte entfernt"
#define UI_TEXT_SD_INSERTED_DE      "SD Karte eingelegt"
#define UI_TEXT_PRINTER_READY_DE    "Drucker bereit."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_DE   " Tage "
#define UI_TEXT_PRINTTIME_HOURS_DE  ":"
#define UI_TEXT_PRINTTIME_MINUTES_DE ""
#define UI_TEXT_PRINT_TIME_DE     "Ges. Druckzeit"
#define UI_TEXT_PRINT_FILAMENT_DE "Filament gedruckt"
#define UI_TEXT_PRINTED_DE           "gedruckt"
#define UI_TEXT_POWER_DE            "ATX Netzteil aService menuus"
#define UI_TEXT_STRING_HM_DEADTIME_DE     "Totzeit"
#define UI_TEXT_STRING_HM_SLOWBANG_DE     "Langs.BB"
#define UI_TEXT_STOP_PRINT_DE "Druck abbrechen"
#define UI_TEXT_Z_BABYSTEPPING_DE "Z Babyschr.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_DE "Filamentwechsel"
#define UI_TEXT_WIZ_CH_FILAMENT1_DE "Filamentwechsel:"
#define UI_TEXT_WIZ_CH_FILAMENT2_DE "Zum man. f" STR_ouml "rdern"
#define UI_TEXT_WIZ_CH_FILAMENT3_DE "Men" STR_uuml "knopf drehen"
#define UI_TEXT_CLICK_DONE_DE "Weiter mit Klick"
#define UI_TEXT_AUTOLEVEL_ONOFF_DE  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_DE "Servo Pos.: %oS"
#define UI_TEXT_IGNORE_M106_DE      "Ignoriere M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_DE "Klicke zum Aufw" STR_auml "rmen"
#define UI_TEXT_WIZ_REHEAT2_DE "der Extruder."
#define UI_TEXT_WIZ_WAITTEMP1_DE "Warte auf"
#define UI_TEXT_WIZ_WAITTEMP2_DE "Zieltemperatur..."
#define UI_TEXT_EXTRUDER_JAM_DE "Extruderstau"
#define UI_TEXT_STANDBY_DE "Standby"
#define UI_TEXT_BED_COATING_DE "Bettbeschichtung"
#define UI_TEXT_BED_COATING_SET1_DE "Bettbeschichtung:"
#define UI_TEXT_BED_COATING_SET2_DE ""
#define UI_TEXT_NOCOATING_DE "Unbeschichtet"
#define UI_TEXT_BUILDTAK_DE "BuildTak"
#define UI_TEXT_KAPTON_DE "Kapton"
#define UI_TEXT_BLUETAPE_DE "Blaues Kreppband"
#define UI_TEXT_PETTAPE_DE "Gr" STR_uuml "nes PET Band"
#define UI_TEXT_GLUESTICK_DE "Klebestift"
#define UI_TEXT_CUSTOM_DE "Individuell"
#define UI_TEXT_COATING_CUSTOM_DE "Indiv.:%BCmm"
#define UI_TEXT_LANGUAGE_DE "Sprache"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_DE "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_DE "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_DE "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_DE "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_DE "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_DE "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_DE "Kopien: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_DE "Fluss:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_DE "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_DE "Puf: %oB"
#define UI_TEXT_MAINPAGE6_6_DE "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_DE cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_DE "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_DE "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_DE "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_DE "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_DE "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_DE "%Uf m"
#define UI_TEXT_METER_PRINTED_DE "%Uf m " UI_TEXT_PRINTED_DE
#define UI_TEXT_STATUS_DE "%os"
#define UI_TEXT_EMPTY_DE ""
#define UI_TEXT_TEMP_SET_DE cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_DE cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_DE " %BCmm"
#define UI_TEXT_EXTR3_TEMP_DE "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_DE "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_DE "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_DE "Extruder 4 Aus"
#define UI_TEXT_EXTR4_OFF_DE "Extruder 5 Aus"
#define UI_TEXT_EXTR5_OFF_DE "Extruder 6 Aus"
#define UI_TEXT_EXTR3_SELECT_DE "%X3 W" STR_auml "hle Extr. 4"
#define UI_TEXT_EXTR4_SELECT_DE "%X4 W" STR_auml "hle Extr. 5"
#define UI_TEXT_EXTR5_SELECT_DE "%X5 W" STR_auml "hle Extr. 6"
#define UI_TEXT_DITTO_0_DE "%D0 Keine Kopien"
#define UI_TEXT_DITTO_1_DE "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_DE "%D2 2 Kopien"
#define UI_TEXT_DITTO_3_DE "%D3 3 Kopien"
#define UI_TEXT_ZPROBE_HEIGHT_DE "Z-Probenh" STR_ouml "he:%zh"



#define UI_TEXT_OFFSETS_DE "Set print offsets"
#define UI_TEXT_X_OFFSET_DE "X-Offset:%T0mm"
#define UI_TEXT_Y_OFFSET_DE "Y-Offset:%T1mm"
#define UI_TEXT_Z_OFFSET_DE "Z-Offset:%T2mm"
#define UI_TEXT_LAYER_DE "Layer %Pl/%PL"
#define UI_TEXT_PROGRESS_DE "%Pp%%%"
#define UI_TEXT_PRINTNAME_DE "%Pn"

#define UI_TEXT_SETUP_DE "Setup"
#define UI_TEXT_MEASURE_DISTORTION_DE "Messe Z-Verzerrung"
#define UI_TEXT_DISTORTION_CORR_DE "Z-Korrektur:%De"
#define UI_TEXT_ACTION_FAN2SPEED_DE   "L" STR_uuml "fter 2:%FS%%%"
#define UI_TEXT_CANCEL_DE "Abbruch"
#define UI_TEXT_PLEASE_WAIT_DE "*** Bitte warten ***"
#define UI_TEXT_CLEARBED1_DE "Stellen Sie sicher,"
#define UI_TEXT_CLEARBED2_DE "dass keine Objekte"
#define UI_TEXT_CLEARBED3_DE "auf dem Bett sind."
#define UI_TEXT_NOTIFICATION_DE "Mitteilung:"
#define UI_TEXT_TEMPSENSOR_DEFECT_DE "Temp.-Sensor defekt"
#define UI_TEXT_HEATER_DECOUPLED_DE "Heizelem. entkoppelt"
#define UI_TEXT_SLIPPING_DE "Filament rutscht"
#define UI_TEXT_LEVELING_ERROR_DE "Leveling Fehler"
#define UI_TEXT_OK_DE "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_DE "Kalibriere Bed"
#define UI_TEXT_CALIBRATION_ERROR_DE "Kalibrierungsfehler"
#define UI_TEXT_AUTOLEVEL_BED_DE "Autolevel Bett"
#define UI_TEXT_HOMING_DE "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_DE "Vorheiztemperaturen"
#define UI_TEXT_PREHEAT_E0_DE "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_DE "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_DE "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_DE "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_DE "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_DE "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_DE "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_DE "Mess. Probenh" STR_ouml "he"
#define UI_TEXT_CUR_TEMP_DE "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_DE "Echte Z Pos.:%W0mm"
#define UI_TEXT_CONTINUE_DE "Weiter"
#define UI_TEXT_CLOSE_DE "Abbruch"
#define UI_TEXT_EXTR_ZOFF_DE "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_DE "Messe ..."
#define UI_TEXT_Z_PROBE_DE "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_DE "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_DE "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_DE "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_DE "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_DE "Mul: %om%%%    Spi:%opRPM"
#define UI_TEXT_JAMCONTROL_DE "%ej Blockaden" STR_uuml "berw."

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_DE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_DE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_DE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_DE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_DE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_DE UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_DE UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_DE UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_DE UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_DE UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_DE UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_DE UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_DE UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_DE UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_DE UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_DE UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_DE UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_DE UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_DE UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_DE UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_DE UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_DE UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_DE UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_DE UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_DE UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_DE UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_DE UI_TEXT_WIZ_AC_LOST_13_TEXT

#define UI_TEXT_WIZ_AC_LOST_21_DE UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_DE UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_DE UI_TEXT_WIZ_AC_LOST_23_TEXT

#define UI_TEXT_WIZ_AC_LOST_31_DE UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_DE UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_DE UI_TEXT_WIZ_AC_LOST_33_TEXT

#define UI_TEXT_WIZ_AC_LOST_41_DE UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_DE UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_DE UI_TEXT_WIZ_AC_LOST_43_TEXT

// Dutch translation

#define UI_TEXT_ON_NL               "Aan"
#define UI_TEXT_OFF_NL              "Uit"
#define UI_TEXT_NA_NL               "Nvt" // Output for not available
#define UI_TEXT_YES_NL              "Ja"
#define UI_TEXT_NO_NL               "Nee"
#define UI_TEXT_PRINT_POS_NL        "Printen..."
#define UI_TEXT_PRINTING_NL         "Printen"
#define UI_TEXT_IDLE_NL             "Rust"
#define UI_TEXT_NOSDCARD_NL         "Geen SD kaart"
#define UI_TEXT_ERROR_NL            "**** FOUT ****"
#define UI_TEXT_BACK_NL             "Terug " cUP
#define UI_TEXT_QUICK_SETTINGS_NL   "Snelle instellingen"
#define UI_TEXT_ERRORMSG_NL         "%oe"
#define UI_TEXT_CONFIGURATION_NL    "Configuratie"
#define UI_TEXT_POSITION_NL         "Positie"
#define UI_TEXT_EXTRUDER_NL         "Extruder"
#define UI_TEXT_SD_CARD_NL          "Print"
#define UI_TEXT_DEBUGGING_NL        "Debugging"
#define UI_TEXT_HOME_DELTA_NL       "Home delta"
#define UI_TEXT_HOME_ALL_NL         "Home alles"
#define UI_TEXT_HOME_X_NL           "Home X"
#define UI_TEXT_HOME_Y_NL           "Home Y"
#define UI_TEXT_HOME_Z_NL           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_NL   "Voorverwarmen Enkel Extr."
#define UI_TEXT_PREHEAT_ALL_NL      "Voorverwarmen Alle Extr."
#define UI_TEXT_PREHEAT_PLA_NL      "Voorverwarmen PLA"
#define UI_TEXT_PREHEAT_ABS_NL      "Voorverwarmen ABS"
#define UI_TEXT_LIGHTS_ONOFF_NL     "Lichten:%lo"
#define UI_TEXT_COOLDOWN_NL         "Koel af"
#define UI_TEXT_SET_TO_ORIGIN_NL    "Zet nulpunt"
#define UI_TEXT_DISABLE_STEPPER_NL  "Zet motor uit"
#define UI_TEXT_X_POSITION_NL       "X positie"
#define UI_TEXT_X_POS_FAST_NL       "X pos. snel"
#define UI_TEXT_Y_POSITION_NL       "Y positie"
#define UI_TEXT_Y_POS_FAST_NL       "Y pos. snel"
#define UI_TEXT_Z_POSITION_NL       "Z positie"
#define UI_TEXT_Z_POS_FAST_NL       "Z pos. snel"
#define UI_TEXT_E_POSITION_NL       "Extra positie"
#define UI_TEXT_BED_TEMP_NL         "Bed temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_NL       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_NL       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_NL       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_NL        "Extruder 1 uit"
#define UI_TEXT_EXTR1_OFF_NL        "Extruder 2 uit"
#define UI_TEXT_EXTR2_OFF_NL        "Extruder 3 uit"
#define UI_TEXT_EXTR0_SELECT_NL     "%X0 Select extr. 1"
#define UI_TEXT_EXTR1_SELECT_NL     "%X1 Select extr. 2"
#define UI_TEXT_EXTR2_SELECT_NL     "%X2 Select extr. 3"
#define UI_TEXT_EXTR_ORIGIN_NL      "Zet nulpunt"
#define UI_TEXT_PRINT_X_NL          "Print X:%ax"
#define UI_TEXT_PRINT_Y_NL          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_NL          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_NL    "Print:%az"
#define UI_TEXT_MOVE_X_NL           "Beweeg X:%aX"
#define UI_TEXT_MOVE_Y_NL           "Beweeg Y:%aY"
#define UI_TEXT_MOVE_Z_NL           "Beweeg Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_NL     "Beweeg:%aZ"
#define UI_TEXT_JERK_NL             "Ruk:%aj"
#define UI_TEXT_ZJERK_NL            "Z-Ruk:%aJ"
#define UI_TEXT_ACCELERATION_NL     "Acceleratie"
#define UI_TEXT_STORE_TO_EEPROM_NL  "Opslaan naar EEPROM"
#define UI_TEXT_LOAD_EEPROM_NL      "Laden van EEPROM"
#define UI_TEXT_DBG_ECHO_NL         "Echo     :%do"
#define UI_TEXT_DBG_INFO_NL         "Info     :%di"
#define UI_TEXT_DBG_ERROR_NL        "Fouten   :%de"
#define UI_TEXT_DBG_DRYRUN_NL       "Droogloop:%dd"
#define UI_TEXT_DBG_ENDSTOP_NL      "EndStop  :%dp"
#define UI_TEXT_OPS_OFF_NL          "%O0 OPS Uit"
#define UI_TEXT_OPS_CLASSIC_NL      "%O1 OPS Klassiek"
#define UI_TEXT_OPS_FAST_NL         "%O2 OPS Snel"
#define UI_TEXT_OPS_RETRACT_NL      "Terugtrekken:%Or"
#define UI_TEXT_OPS_BACKSLASH_NL    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_NL      "Min. afstand:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_NL   "Beweeg na:%Oa"
#define UI_TEXT_ANTI_OOZE_NL        "Anti lek"
#define UI_TEXT_PRINT_FILE_NL       "Print bestand"
#define UI_TEXT_PAUSE_PRINT_NL      "Pauzeer print"
#define UI_TEXT_CONTINUE_PRINT_NL   "Zet print voort"
#define UI_TEXT_UNMOUNT_CARD_NL     "Ontkoppel kaart"
#define UI_TEXT_MOUNT_CARD_NL       "Koppel kaart"
#define UI_TEXT_DELETE_FILE_NL      "Verw. bestand"
#define UI_TEXT_FEEDRATE_NL         "Beweeg snelheid"
#define UI_TEXT_FEED_MAX_X_NL       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_NL       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_NL       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_NL "Max:%fz"
#define UI_TEXT_FEED_HOME_X_NL      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_NL      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_NL      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_NL "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION4B_NL "Min eindst.:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_NL "Max eindst.:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_NL ""
#define UI_TEXT_ACTION_YPOSITION4A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION4B_NL "Min eindst.:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_NL "Max eindst.:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_NL ""
#define UI_TEXT_ACTION_ZPOSITION4A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION4B_NL "Min eindst.:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_NL "Max eindst.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_NL ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_NL "Min eindst.:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_NL "Max eindst.:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_NL "Min eindst.:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_NL "Max eindst.:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_NL "Min eindst.:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_NL "Max eindst.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_NL ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_NL "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_NL "1 klik = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_NL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_NL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_NL "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_NL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_NL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_NL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_NL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_NL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_NL "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_NL          "Fan snelheid"
#define UI_TEXT_FAN_OFF_NL           "Zet fan uit"
#define UI_TEXT_ACTION_FANSPEED_NL   "Fan snelheid:%Fs%%%"
#define UI_TEXT_FAN_25_NL            "Zet fan 25%%%"
#define UI_TEXT_FAN_50_NL            "Zet fan 50%%%"
#define UI_TEXT_FAN_75_NL            "Zet fan 75%%%"
#define UI_TEXT_FAN_FULL_NL          "Zet fan vol aan"
#define UI_TEXT_STEPPER_INACTIVE_NL  "Motor inactief"
#define UI_TEXT_STEPPER_INACTIVE2A_NL "Uit na: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_NL "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_NL    "Max. inactief"
#define UI_TEXT_POWER_INACTIVE2A_NL   "Zet uit na: %ip"
#define UI_TEXT_POWER_INACTIVE2B_NL   "[min] 0=Off"
#define UI_TEXT_GENERAL_NL           "Algemeen"
#define UI_TEXT_BAUDRATE_NL          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_NL        "Stappen/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_NL   "Start sn.:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_NL     "Max sn.:%XF"
#define UI_TEXT_EXTR_ACCEL_NL        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_NL        "Stab.tijd:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_NL    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_NL    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_NL      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_NL        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_NL     "Dode tijd:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_NL      "Controle PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_NL        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_NL        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_NL         "Drive min:%Xm"
#define UI_TEXT_EXTR_DMAX_NL         "Drive max:%XM"
#define UI_TEXT_EXTR_PMAX_NL         "PID max:%XD"
#define UI_TEXT_EXTR_XOFF_NL         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_NL         "Y-Offset:%Xy"
#define UI_TEXT_EXTR_ZOFF_NL         "Z-Offset:%Xz"
#define UI_TEXT_STRING_HM_BANGBANG_NL "BangBang"
#define UI_TEXT_STRING_HM_PID_NL     "PID"
#define UI_TEXT_STRING_ACTION_NL     "Actie:%la"
#define UI_TEXT_HEATING_EXTRUDER_NL  "Opwarmen extr."
#define UI_TEXT_HEATING_BED_NL       "Opwarmen bed"
#define UI_TEXT_KILLED_NL            "Uitgeschakeld"
#define UI_TEXT_STEPPER_DISABLED_NL  "Motor uitgezet"
#define UI_TEXT_EEPROM_STOREDA_NL     "Configuratie"
#define UI_TEXT_EEPROM_STOREDB_NL     "Opgeslagen in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_NL     "Configuratie"
#define UI_TEXT_EEPROM_LOADEDB_NL     "EEPROM ingeladen"
#define UI_TEXT_UPLOADING_NL         "Uploaden..."
#define UI_TEXT_PAGE_BUFFER_NL       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_NL     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_NL     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_NL     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_NL     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_NL          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_NL    "Snelh. mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_NL     "Flow mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_NL  "Laat meting zien"
#define UI_TEXT_RESET_MEASUREMENT_NL "Herstel meting"
#define UI_TEXT_SET_MEASURED_ORIGIN_NL "Zet Z=0"
#define UI_TEXT_ZCALIB_NL             "Z calib."
#define UI_TEXT_SET_P1_NL            "Zet P1"
#define UI_TEXT_SET_P2_NL            "Zet P2"
#define UI_TEXT_SET_P3_NL            "Zet P3"
#define UI_TEXT_CALCULATE_LEVELING_NL "Bereken leveling"
#define UI_TEXT_LEVEL_NL             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_NL "Wacht temp. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_NL "Wacht retr.:%XU mm"
#define UI_TEXT_SD_REMOVED_NL       "SD-kaart verwijderd"
#define UI_TEXT_SD_INSERTED_NL      "SD-kaart geplaatst"
#define UI_TEXT_PRINTER_READY_NL    "Printer klaar."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_NL   " dagen "
#define UI_TEXT_PRINTTIME_HOURS_NL  ":"
#define UI_TEXT_PRINTTIME_MINUTES_NL ""
#define UI_TEXT_PRINT_TIME_NL     "Print tijd"
#define UI_TEXT_PRINT_FILAMENT_NL "Filament geprint"
#define UI_TEXT_PRINTED_NL           "geprint"
#define UI_TEXT_POWER_NL            "ATX power aan/uit"
#define UI_TEXT_STRING_HM_DEADTIME_NL     "Dode tijd"
#define UI_TEXT_STRING_HM_SLOWBANG_NL     "SlowBang"
#define UI_TEXT_STOP_PRINT_NL "Stop print"
#define UI_TEXT_Z_BABYSTEPPING_NL "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_NL "Wissel filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_NL "Wissel filament:"
#define UI_TEXT_WIZ_CH_FILAMENT2_NL "Draai filament"
#define UI_TEXT_WIZ_CH_FILAMENT3_NL "uit/in met knop"
#define UI_TEXT_CLICK_DONE_NL "Ga verder met klik"
#define UI_TEXT_AUTOLEVEL_ONOFF_NL  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_NL "Servo-pos.: %oS"
#define UI_TEXT_IGNORE_M106_NL      "Negeer M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_NL "Klik om extruder"
#define UI_TEXT_WIZ_REHEAT2_NL "te verwarmen."
#define UI_TEXT_WIZ_WAITTEMP1_NL "Wachten op"
#define UI_TEXT_WIZ_WAITTEMP2_NL "doeltemperatuur..."
#define UI_TEXT_EXTRUDER_JAM_NL "Extruder jam"
#define UI_TEXT_STANDBY_NL "Standby"
#define UI_TEXT_BED_COATING_NL "Bed bedekking"
#define UI_TEXT_BED_COATING_SET1_NL "Bed ingesteld op"
#define UI_TEXT_BED_COATING_SET2_NL ""
#define UI_TEXT_NOCOATING_NL "Geen bedekking"
#define UI_TEXT_BUILDTAK_NL "BuildTak"
#define UI_TEXT_KAPTON_NL "Kapton"
#define UI_TEXT_BLUETAPE_NL "Blauw afplakband"
#define UI_TEXT_PETTAPE_NL "Groene PET Tape"
#define UI_TEXT_GLUESTICK_NL "Lijmstift"
#define UI_TEXT_CUSTOM_NL "Custom"
#define UI_TEXT_COATING_CUSTOM_NL "Custom:%BCmm"
#define UI_TEXT_LANGUAGE_NL "Taal"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_NL "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_NL "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_NL "\xa %e1/%E1\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_NL "\xe %eb/%Eb\xb0 Y:%x1"
#endif
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_NL "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_NL "Kopieen: %ed   Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_NL "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_NL "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_NL "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_NL "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_NL cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_NL "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_NL "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_NL "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_NL "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_NL "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_NL "%Uf m"
#define UI_TEXT_METER_PRINTED_NL "%Uf m " UI_TEXT_PRINTED_NL
#define UI_TEXT_STATUS_NL "%os"
#define UI_TEXT_EMPTY_NL ""
#define UI_TEXT_TEMP_SET_NL cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_NL cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_NL " %BCmm"
#define UI_TEXT_EXTR3_TEMP_NL "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_NL "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_NL "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_NL "Extruder 4 Uit"
#define UI_TEXT_EXTR4_OFF_NL "Extruder 5 Uit"
#define UI_TEXT_EXTR5_OFF_NL "Extruder 6 Uit"
#define UI_TEXT_EXTR3_SELECT_NL "%X3 Select Extr. 4"
#define UI_TEXT_EXTR4_SELECT_NL "%X4 Select Extr. 5"
#define UI_TEXT_EXTR5_SELECT_NL "%X5 Select Extr. 6"
#define UI_TEXT_DITTO_0_NL "%D0 Geen Kopieen"
#define UI_TEXT_DITTO_1_NL "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_NL "%D2 2 Kopieën"
#define UI_TEXT_DITTO_3_NL "%D3 3 Kopieën"
#define UI_TEXT_ZPROBE_HEIGHT_NL "Z-probe hoogte:%zh"

#define UI_TEXT_OFFSETS_NL "Set print offsets"
#define UI_TEXT_X_OFFSET_NL "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_NL "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_NL "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_NL "Laag %Pl/%PL"
#define UI_TEXT_PROGRESS_NL "%Pp%%%"
#define UI_TEXT_PRINTNAME_NL "%Pn"

#define UI_TEXT_SETUP_NL "Setup"
#define UI_TEXT_MEASURE_DISTORTION_NL "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_NL "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_NL   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_NL "Cancel"
#define UI_TEXT_PLEASE_WAIT_NL "*** Please wait ***"
#define UI_TEXT_CLEARBED1_NL "Make sure the heated"
#define UI_TEXT_CLEARBED2_NL "bed is clear of any"
#define UI_TEXT_CLEARBED3_NL "obstructions"
#define UI_TEXT_NOTIFICATION_NL "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_NL "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_NL "Heater decoupled"
#define UI_TEXT_SLIPPING_NL "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_NL "Leveling error"
#define UI_TEXT_OK_NL "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_NL "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_NL "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_NL "Autolevel bed"
#define UI_TEXT_HOMING_NL "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_NL "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_NL "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_NL "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_NL "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_NL "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_NL "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_NL "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_NL "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_NL "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_NL "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_NL "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_NL "Continue"
#define UI_TEXT_CLOSE_NL "Close"
#define UI_TEXT_EXTR_ZOFF_NL "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_NL "Measuring ..."
#define UI_TEXT_Z_PROBE_NL "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_NL "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_NL "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_NL "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_NL "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_NL "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_NL "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_NL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_NL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_NL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_NL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_NL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_NL UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_NL UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_NL UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_NL UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_NL UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_NL UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_NL UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_NL UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_NL UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_NL UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_NL UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_NL UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_NL UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_NL UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_NL UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_NL UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_NL UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_NL UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_NL UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_NL UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_NL UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_NL UI_TEXT_WIZ_AC_LOST_13_TEXT

#define UI_TEXT_WIZ_AC_LOST_21_NL UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_NL UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_NL UI_TEXT_WIZ_AC_LOST_23_TEXT

#define UI_TEXT_WIZ_AC_LOST_31_NL UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_NL UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_NL UI_TEXT_WIZ_AC_LOST_33_TEXT

#define UI_TEXT_WIZ_AC_LOST_41_NL UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_NL UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_NL UI_TEXT_WIZ_AC_LOST_43_TEXT


// *************** Brazilian portuguese translation ****************

#define UI_TEXT_ON_PT               "On"
#define UI_TEXT_OFF_PT              "Off"
#define UI_TEXT_NA_PT               "N/A" // Output for not available
#define UI_TEXT_YES_PT              "Sim"
#define UI_TEXT_NO_PT               "Não"
#define UI_TEXT_SEL_PT              cSEL
#define UI_TEXT_NOSEL_PT            cUNSEL
#define UI_TEXT_PRINT_POS_PT        "Imprimindo..."
#define UI_TEXT_PRINTING_PT         "Imprimindo"
#define UI_TEXT_IDLE_PT             "Ocioso"
#define UI_TEXT_NOSDCARD_PT         "Nenhum cartao SD"
#define UI_TEXT_ERROR_PT            "**** ERRO ****"
#define UI_TEXT_BACK_PT             "Voltar " cUP
#define UI_TEXT_QUICK_SETTINGS_PT   "Control" //"Configuracoes Rapidas"
#define UI_TEXT_ERRORMSG_PT         "%oe"
#define UI_TEXT_CONFIGURATION_PT    "Configuracao"
#define UI_TEXT_POSITION_PT         "Posicao"
#define UI_TEXT_EXTRUDER_PT         "Extrusor"
#define UI_TEXT_SD_CARD_PT          "Cartao SD"
#define UI_TEXT_DEBUGGING_PT        "Depuracao"
#define UI_TEXT_HOME_DELTA_PT       "Home delta"
#define UI_TEXT_HOME_ALL_PT         "Home todos"
#define UI_TEXT_HOME_X_PT           "Home X"
#define UI_TEXT_HOME_Y_PT           "Home Y"
#define UI_TEXT_HOME_Z_PT           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_PT   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_PT      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_PT     "Luzes:%lo"
#define UI_TEXT_COOLDOWN_PT         "Resfriar"
#define UI_TEXT_SET_TO_ORIGIN_PT    "Definir como origem"
#define UI_TEXT_DISABLE_STEPPER_PT  "Desabilitar motor"
#define UI_TEXT_X_POSITION_PT       "Posicao X"
#define UI_TEXT_X_POS_FAST_PT       "Pos. Rapida X"
#define UI_TEXT_Y_POSITION_PT       "Posicao Y"
#define UI_TEXT_Y_POS_FAST_PT       "Pos. Rapida Y"
#define UI_TEXT_Z_POSITION_PT       "Posicao Z"
#define UI_TEXT_Z_POS_FAST_PT       "Pos. Rapida Z"
#define UI_TEXT_E_POSITION_PT       "Posicao Extrusor"
#define UI_TEXT_BED_TEMP_PT         "Tem.Cama:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_PT       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_PT       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_PT       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_PT        "Extr. 1 Desligado"
#define UI_TEXT_EXTR1_OFF_PT        "Extr. 2 Desligado"
#define UI_TEXT_EXTR2_OFF_PT        "Extr. 3 Desligado"
#define UI_TEXT_EXTR0_SELECT_PT     "%X0 Sel. Extr. 1"
#define UI_TEXT_EXTR1_SELECT_PT     "%X1 Sel. Extr. 2"
#define UI_TEXT_EXTR2_SELECT_PT     "%X2 Sel. Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_PT      "Definir Origem"
#define UI_TEXT_PRINT_X_PT          "Imprimir X:%ax"
#define UI_TEXT_PRINT_Y_PT          "Imprimir Y:%ay"
#define UI_TEXT_PRINT_Z_PT          "Imprimir Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_PT    "Imprimir:%az"
#define UI_TEXT_MOVE_X_PT           "Mover X:%aX"
#define UI_TEXT_MOVE_Y_PT           "Mover Y:%aY"
#define UI_TEXT_MOVE_Z_PT           "Mover Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_PT     "Mover:%aZ"
#define UI_TEXT_JERK_PT             "Jerk:%aj"
#define UI_TEXT_ZJERK_PT            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_PT     "Aceleracao"
#define UI_TEXT_STORE_TO_EEPROM_PT  "Armazenar na EEPROM"
#define UI_TEXT_LOAD_EEPROM_PT      "Carregar da EEPROM"
#define UI_TEXT_DBG_ECHO_PT         "Echo   :%do"
#define UI_TEXT_DBG_INFO_PT         "Info   :%di"
#define UI_TEXT_DBG_ERROR_PT        "Erros  :%de"
#define UI_TEXT_DBG_DRYRUN_PT       "Dry run:%dd"
#define UI_TEXT_DBG_ENDSTOP_PT      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_PT          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_PT      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_PT         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_PT      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH_PT    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_PT      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_PT   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_PT        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_PT       "Imprimir arquivo"
#define UI_TEXT_PAUSE_PRINT_PT      "Pausar Impressao"
#define UI_TEXT_CONTINUE_PRINT_PT   "Continuar Impressao"
#define UI_TEXT_UNMOUNT_CARD_PT     "Desmontar Cartao"
#define UI_TEXT_MOUNT_CARD_PT       "Montar Cartao"
#define UI_TEXT_DELETE_FILE_PT      "Deletar arquivo"
#define UI_TEXT_FEEDRATE_PT         "Feedrate"
#define UI_TEXT_FEED_MAX_X_PT       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_PT       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_PT       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_PT "Max:%fz"
#define UI_TEXT_FEED_HOME_X_PT      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_PT      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_PT      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_PT "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_PT "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_PT "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_PT "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_PT ""
#define UI_TEXT_ACTION_YPOSITION4A_PT "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_PT "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_PT "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_PT ""
#define UI_TEXT_ACTION_ZPOSITION4A_PT "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_PT "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_PT "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_PT ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_PT "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_PT "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_PT "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_PT "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_PT "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_PT "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_PT ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_PT "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_PT "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_PT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_PT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_PT "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_PT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_PT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_PT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_PT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_PT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_PT "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_PT          "Velocidade ventoinha"
#define UI_TEXT_ACTION_FANSPEED_PT   "Vel. vent.:%Fs%%%"
#define UI_TEXT_FAN_OFF_PT           "Desligar ventoinha"
#define UI_TEXT_FAN_25_PT            "Def. ventoinha 25%%%"
#define UI_TEXT_FAN_50_PT            "Def. ventoinha 50%%%"
#define UI_TEXT_FAN_75_PT            "Def. ventoinha 75%%%"
#define UI_TEXT_FAN_FULL_PT          "Def. ventoinha 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_PT  "Motor Inativo"
#define UI_TEXT_STEPPER_INACTIVE2A_PT "Des. Depois: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_PT "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_PT    "Max. Inativo"
#define UI_TEXT_POWER_INACTIVE2A_PT   "Des. Depois: %ip"
#define UI_TEXT_POWER_INACTIVE2B_PT   "[min] 0=Off"
#define UI_TEXT_GENERAL_PT           "Geral"
#define UI_TEXT_BAUDRATE_PT          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_PT        "Passos/mm:%Se"
#define UI_TEXT_EXTR_START_FEED_PT   "Iniciar FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_PT     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_PT        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_PT        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_PT    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_PT    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_PT      "Controle:%Xh"
#define UI_TEXT_EXTR_PGAIN_PT        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_PT     "Tempo morto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_PT      "Controle PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_PT        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_PT        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_PT         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_PT         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_PT         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_PT         "Offset X:%Xx"
#define UI_TEXT_EXTR_YOFF_PT         "Offset Y:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_PT "BangBang"
#define UI_TEXT_STRING_HM_PID_PT     "PID"
#define UI_TEXT_STRING_ACTION_PT     "Acao:%la"
#define UI_TEXT_HEATING_EXTRUDER_PT  "Aquecendo Extrusor"
#define UI_TEXT_HEATING_BED_PT       "Aquecendo Cama"
#define UI_TEXT_KILLED_PT            "Killed"
#define UI_TEXT_STEPPER_DISABLED_PT  "Motor Desabilitado"
#define UI_TEXT_EEPROM_STOREDA_PT     "Configuracao"
#define UI_TEXT_EEPROM_STOREDB_PT     "armazenada na EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_PT     "Configuracao"
#define UI_TEXT_EEPROM_LOADEDB_PT     "carregada da EEPROM"
#define UI_TEXT_UPLOADING_PT         "Enviando..."
#define UI_TEXT_PAGE_BUFFER_PT       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_PT     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_PT     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_PT     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_PT     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_PT          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_PT    "Mult. Veloc.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_PT     "Mult. Fluxo:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_PT  "Mostrar medicao"
#define UI_TEXT_RESET_MEASUREMENT_PT "Reset medicao"
#define UI_TEXT_SET_MEASURED_ORIGIN_PT "Set Z=0"
#define UI_TEXT_ZCALIB_PT             "Z calib."
#define UI_TEXT_SET_P1_PT            "Set P1"
#define UI_TEXT_SET_P2_PT            "Set P2"
#define UI_TEXT_SET_P3_PT            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_PT "Calcule nivelamento"
#define UI_TEXT_LEVEL_PT             "Nivel delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_PT  "Aguardar Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_PT "Aguardar Unidades:%XUmm"
#define UI_TEXT_SD_REMOVED_PT       "Cartao SD removido"
#define UI_TEXT_SD_INSERTED_PT      "Cartao SD inserido"
#define UI_TEXT_PRINTER_READY_PT    "Impressora pronta."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_PT   " dias "
#define UI_TEXT_PRINTTIME_HOURS_PT  ":"
#define UI_TEXT_PRINTTIME_MINUTES_PT ""
#define UI_TEXT_PRINT_TIME_PT     "tempo de impressao"
#define UI_TEXT_PRINT_FILAMENT_PT "Filament impresso"
#define UI_TEXT_PRINTED_PT           "impresso"
#define UI_TEXT_POWER_PT            "ATX poder on/off"
#define UI_TEXT_STRING_HM_DEADTIME_PT     "Tempo morto"
#define UI_TEXT_STRING_HM_SLOWBANG_PT     "SlowBang"
#define UI_TEXT_STOP_PRINT_PT "Parar impressao"
#define UI_TEXT_Z_BABYSTEPPING_PT "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_PT "Alterar filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_PT "Alterar filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_PT "Gire para mover"
#define UI_TEXT_WIZ_CH_FILAMENT3_PT "filamento cima/baixo"
#define UI_TEXT_CLICK_DONE_PT "Clique quando feito"
#define UI_TEXT_AUTOLEVEL_ONOFF_PT  "Nivel auto: %ll"
#define UI_TEXT_SERVOPOS_PT "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_PT      "Ignorar M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_PT "Clique para"
#define UI_TEXT_WIZ_REHEAT2_PT "aquecer extrusora."
#define UI_TEXT_WIZ_WAITTEMP1_PT "Aguardando a"
#define UI_TEXT_WIZ_WAITTEMP2_PT "temperatura alvo ..."
#define UI_TEXT_EXTRUDER_JAM_PT "Extrusora congest."
#define UI_TEXT_STANDBY_PT "Standby"
#define UI_TEXT_BED_COATING_PT "Revest. de leito"
#define UI_TEXT_BED_COATING_SET1_PT "Revest. de leito:"
#define UI_TEXT_BED_COATING_SET2_PT ""
#define UI_TEXT_NOCOATING_PT "Sem revestimento"
#define UI_TEXT_BUILDTAK_PT "BuildTak"
#define UI_TEXT_KAPTON_PT "Kapton"
#define UI_TEXT_BLUETAPE_PT "Fita crepe azul"
#define UI_TEXT_PETTAPE_PT "Fita verde PET"
#define UI_TEXT_GLUESTICK_PT "Cola bastao"
#define UI_TEXT_CUSTOM_PT "Personalizadas"
#define UI_TEXT_COATING_CUSTOM_PT "Person.:%BCmm"
#define UI_TEXT_LANGUAGE_PT "Idioma"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_PT "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_PT "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_PT "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_PT "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_PT "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_PT "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_PT "Copias: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_PT "Fluxo:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_PT "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_PT "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_PT "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_PT cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_PT "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_PT "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_PT "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_PT "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_PT "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_PT "%Uf m"
#define UI_TEXT_METER_PRINTED_PT "%Uf m " UI_TEXT_PRINTED_EN
#define UI_TEXT_STATUS_PT "%os"
#define UI_TEXT_EMPTY_PT ""
#define UI_TEXT_TEMP_SET_PT cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_PT cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_PT " %BCmm"
#define UI_TEXT_EXTR3_TEMP_PT "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_PT "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_PT "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_PT "Extr. 4 Desligado"
#define UI_TEXT_EXTR4_OFF_PT "Extr. 5 Desligado"
#define UI_TEXT_EXTR5_OFF_PT "Extr. 6 Desligado"
#define UI_TEXT_EXTR3_SELECT_PT "%X3 Sel. Extr. 4"
#define UI_TEXT_EXTR4_SELECT_PT "%X4 Sel. Extr. 5"
#define UI_TEXT_EXTR5_SELECT_PT "%X5 Sel. Extr. 6"
#define UI_TEXT_DITTO_0_PT "%D0 Nenhuma Copia"
#define UI_TEXT_DITTO_1_PT "%D1 1 Copia"
#define UI_TEXT_DITTO_2_PT "%D2 2 Copias"
#define UI_TEXT_DITTO_3_PT "%D3 3 Copias"
#define UI_TEXT_ZPROBE_HEIGHT_PT "Altura Z-Probe:%zh"

#define UI_TEXT_OFFSETS_PT "Set print offsets"
#define UI_TEXT_X_OFFSET_PT "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_PT "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_PT "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_PT "Camada %Pl/%PL"
#define UI_TEXT_PROGRESS_PT "%Pp%%%"
#define UI_TEXT_PRINTNAME_PT "%Pn"

#define UI_TEXT_SETUP_PT "Setup"
#define UI_TEXT_MEASURE_DISTORTION_PT "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_PT "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_PT   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_PT "Cancel"
#define UI_TEXT_PLEASE_WAIT_PT "*** Please wait ***"
#define UI_TEXT_CLEARBED1_PT "Make sure the heated"
#define UI_TEXT_CLEARBED2_PT "bed is clear of any"
#define UI_TEXT_CLEARBED3_PT "obstructions"
#define UI_TEXT_NOTIFICATION_PT "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_PT "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_PT "Heater decoupled"
#define UI_TEXT_SLIPPING_PT "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_PT "Leveling error"
#define UI_TEXT_OK_PT "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_PT "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_PT "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_PT "Autolevel bed"
#define UI_TEXT_HOMING_PT "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_PT "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_PT "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_PT "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_PT "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_PT "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_PT "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_PT "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_PT "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_PT "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_PT "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_PT "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_PT "Continue"
#define UI_TEXT_CLOSE_PT "Close"
#define UI_TEXT_EXTR_ZOFF_PT "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_PT "Measuring ..."
#define UI_TEXT_Z_PROBE_PT "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_PT "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_PT "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_PT "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_PT "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_PT "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_PT "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_PT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_PT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_PT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_PT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_PT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_PT UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_PT UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_PT UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_PT UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_PT UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_PT UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_PT UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_PT UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_PT UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_PT UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_PT UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_PT UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_PT UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_PT UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_PT UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_PT UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_PT UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_PT UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_PT UI_TEXT_STALLGUARD_ITEM_TEXT


#define UI_TEXT_WIZ_AC_LOST_11_PT UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_PT UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_PT UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_PT UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_PT UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_PT UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_PT UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_PT UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_PT UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_PT UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_PT UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_PT UI_TEXT_WIZ_AC_LOST_43_TEXT


// *************** Italian translation ****************

#define UI_TEXT_ON_IT               "On"
#define UI_TEXT_OFF_IT              "Off"
#define UI_TEXT_NA_IT               "N/A" // Output for not available
#define UI_TEXT_YES_IT              "Si"
#define UI_TEXT_NO_IT               "No"
#define UI_TEXT_PRINT_POS_IT        "Stampa..."
#define UI_TEXT_PRINTING_IT         "Stampa"
#define UI_TEXT_IDLE_IT             "Pausa"
#define UI_TEXT_NOSDCARD_IT         "No Scheda SD"
#define UI_TEXT_ERROR_IT            "**** ERRORE ****"
#define UI_TEXT_BACK_IT             "Indietro " cUP
#define UI_TEXT_QUICK_SETTINGS_IT   "Control" //"Impostazioni veloci"
#define UI_TEXT_ERRORMSG_IT         "%oe"
#define UI_TEXT_CONFIGURATION_IT    "Configurazione"
#define UI_TEXT_POSITION_IT         "Posizione"
#define UI_TEXT_EXTRUDER_IT         "Estrusore"
#define UI_TEXT_SD_CARD_IT          "Scheda SD"
#define UI_TEXT_DEBUGGING_IT        "Sviluppo"
#define UI_TEXT_HOME_DELTA_IT       "Origine Delta"
#define UI_TEXT_HOME_ALL_IT         "Origine Tutti"
#define UI_TEXT_HOME_X_IT           "Origine X"
#define UI_TEXT_HOME_Y_IT           "Origine Y"
#define UI_TEXT_HOME_Z_IT           "Origine Z"
#define UI_TEXT_PREHEAT_SINGLE_IT   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_IT      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_IT     "Luci:%lo"
#define UI_TEXT_COOLDOWN_IT         "Raffreddamento"
#define UI_TEXT_SET_TO_ORIGIN_IT    "Imposta come Origine"
#define UI_TEXT_DISABLE_STEPPER_IT  "Disabilita Stepper"
#define UI_TEXT_X_POSITION_IT       "Posizione X"
#define UI_TEXT_X_POS_FAST_IT       "Pos. X Veloce"
#define UI_TEXT_Y_POSITION_IT       "Posizione Y"
#define UI_TEXT_Y_POS_FAST_IT       "Pos. Y Veloce"
#define UI_TEXT_Z_POSITION_IT       "Posizione Z"
#define UI_TEXT_Z_POS_FAST_IT       "Pos. Z Veloce"
#define UI_TEXT_E_POSITION_IT       "Posizione Estrusore"
#define UI_TEXT_BED_TEMP_IT         "Temp.Piatto:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_IT       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_IT       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_IT       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_IT        "Estrusore 1 Spento"
#define UI_TEXT_EXTR1_OFF_IT        "Estrusore 2 Spento"
#define UI_TEXT_EXTR2_OFF_IT        "Estrusore 3 Spento"
#define UI_TEXT_EXTR0_SELECT_IT     "%X0 Seleziona Estr. 1"
#define UI_TEXT_EXTR1_SELECT_IT     "%X1 Seleziona Estr. 2"
#define UI_TEXT_EXTR2_SELECT_IT     "%X2 Seleziona Estr. 3"
#define UI_TEXT_EXTR_ORIGIN_IT      "Imposta Origine"
#define UI_TEXT_PRINT_X_IT          "Stampa X:%ax"
#define UI_TEXT_PRINT_Y_IT          "Stampa Y:%ay"
#define UI_TEXT_PRINT_Z_IT          "Stampa Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_IT    "Stampa:%az"
#define UI_TEXT_MOVE_X_IT           "Movimento X:%aX"
#define UI_TEXT_MOVE_Y_IT           "Movimento Y:%aY"
#define UI_TEXT_MOVE_Z_IT           "Movimento Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_IT     "Movimento:%aZ"
#define UI_TEXT_JERK_IT             "Scatto:%aj"
#define UI_TEXT_ZJERK_IT            "Scatto-Z:%aJ"
#define UI_TEXT_ACCELERATION_IT     "Accelerazione"
#define UI_TEXT_STORE_TO_EEPROM_IT  "Salva in EEPROM"
#define UI_TEXT_LOAD_EEPROM_IT      "Carica da EEPROM"
#define UI_TEXT_DBG_ECHO_IT         "Eco    :%do"
#define UI_TEXT_DBG_INFO_IT         "Info   :%di"
#define UI_TEXT_DBG_ERROR_IT        "Errori :%de"
#define UI_TEXT_DBG_DRYRUN_IT       "Simulazione:%dd"
#define UI_TEXT_DBG_ENDSTOP_IT      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_IT          "%O0 OPS Spento"
#define UI_TEXT_OPS_CLASSIC_IT      "%O1 OPS Classico"
#define UI_TEXT_OPS_FAST_IT         "%O2 OPS Veloce"
#define UI_TEXT_OPS_RETRACT_IT      "Ritiro :%Or"
#define UI_TEXT_OPS_BACKSLASH_IT    "Gioco barra:%Ob"
#define UI_TEXT_OPS_MINDIST_IT      "Distanza Min.:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_IT   "Movimento dopo:%Oa"
#define UI_TEXT_ANTI_OOZE_IT        "Anti goccia"
#define UI_TEXT_PRINT_FILE_IT       "Stampa file"
#define UI_TEXT_PAUSE_PRINT_IT      "Pausa Stampa"
#define UI_TEXT_CONTINUE_PRINT_IT   "Continua Stampa"
#define UI_TEXT_UNMOUNT_CARD_IT     "Scarica Scheda"
#define UI_TEXT_MOUNT_CARD_IT       "Carica Scheda"
#define UI_TEXT_DELETE_FILE_IT      "Cancella file"
#define UI_TEXT_FEEDRATE_IT         "Velocita'"
#define UI_TEXT_FEED_MAX_X_IT       "Massimo X:%fx"
#define UI_TEXT_FEED_MAX_Y_IT       "Massimo Y:%fy"
#define UI_TEXT_FEED_MAX_Z_IT       "Massimo Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_IT "Massimo:%fz"
#define UI_TEXT_FEED_HOME_X_IT      "Origine X:%fX"
#define UI_TEXT_FEED_HOME_Y_IT      "Origine Y:%fY"
#define UI_TEXT_FEED_HOME_Z_IT      "Origine Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_IT "Origine:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_IT "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_IT "Min finec.:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_IT "Max finec.:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_IT ""
#define UI_TEXT_ACTION_YPOSITION4A_IT "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_IT "Min finec.:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_IT "Max finec.:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_IT ""
#define UI_TEXT_ACTION_ZPOSITION4A_IT "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_IT "Min finec.:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_IT "Max finec.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_IT ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_IT "Min finec.:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_IT "Max finec.:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_IT "Min finec.:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_IT "Max finec.:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_IT "Min finec.:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_IT "Max finec.:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_IT ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_IT "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_IT "1 scatto = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_IT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_IT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_IT "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_IT "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_IT "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_IT "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_IT "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_IT "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_IT "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_IT          "Velocita Ventola"
#define UI_TEXT_ACTION_FANSPEED_IT   "Vel. Ventola:%Fs%%%"
#define UI_TEXT_FAN_OFF_IT           "Spegnimento Ventola"
#define UI_TEXT_FAN_25_IT            "Ventola al 25%%%"
#define UI_TEXT_FAN_50_IT            "Ventola al%%%"
#define UI_TEXT_FAN_75_IT            "Ventola al%%%"
#define UI_TEXT_FAN_FULL_IT          "Ventola al massimo"
#define UI_TEXT_STEPPER_INACTIVE_IT  "Stepper Inattivi"
#define UI_TEXT_STEPPER_INACTIVE2A_IT "Dis. dopo: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_IT "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_IT    "Max. Inattivita'"
#define UI_TEXT_POWER_INACTIVE2A_IT   "Dis. After: %ip"
#define UI_TEXT_POWER_INACTIVE2B_IT   "[min] 0=Off"
#define UI_TEXT_GENERAL_IT           "Generale"
#define UI_TEXT_BAUDRATE_IT          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_IT        "Passi/mm:%Se"
#define UI_TEXT_EXTR_START_FEED_IT   "Velocita' Avvio:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_IT     "Velocita' Max:%XF"
#define UI_TEXT_EXTR_ACCEL_IT        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_IT        "Tempo Stab.:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_IT    "Avanzamento lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_IT    "Avanzamento espon:%Xa"
#define UI_TEXT_EXTR_MANAGER_IT      "Controllo:%Xh"
#define UI_TEXT_EXTR_PGAIN_IT        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_IT     "Tempo morto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_IT      "Controllo PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_IT        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_IT        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_IT         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_IT         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_IT         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_IT         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_IT         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_IT "BangBang"
#define UI_TEXT_STRING_HM_PID_IT     "PID"
#define UI_TEXT_STRING_ACTION_IT     "Azione:%la"
#define UI_TEXT_HEATING_EXTRUDER_IT  "Riscald. Estrusore"
#define UI_TEXT_HEATING_BED_IT       "Riscald. Piatto"
#define UI_TEXT_KILLED_IT            "Abortito"
#define UI_TEXT_STEPPER_DISABLED_IT  "Stepper Disabilitato"
#define UI_TEXT_EEPROM_STOREDA_IT     "Configurazione"
#define UI_TEXT_EEPROM_STOREDB_IT     "Salvata in EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_IT     "Configurazione"
#define UI_TEXT_EEPROM_LOADEDB_IT     "Caricata da EEPROM"
#define UI_TEXT_UPLOADING_IT         "Caricamento..."
#define UI_TEXT_PAGE_BUFFER_IT       "Tampone:%oB"
#define UI_TEXT_PAGE_EXTRUDER_IT     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_IT     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_IT     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_IT     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_IT          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_IT    "Molt. Velocita':%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_IT     "Molt. Flusso:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_IT  "Mostra di misura"
#define UI_TEXT_RESET_MEASUREMENT_IT "Ripristino di misura"
#define UI_TEXT_SET_MEASURED_ORIGIN_IT "Set Z=0"
#define UI_TEXT_ZCALIB_IT             "Z Calib."
#define UI_TEXT_SET_P1_IT            "Impostato P1"
#define UI_TEXT_SET_P2_IT            "Impostato P2"
#define UI_TEXT_SET_P3_IT            "Impostato P3"
#define UI_TEXT_CALCULATE_LEVELING_IT "Calcol. livellamento"
#define UI_TEXT_LEVEL_IT             "Livello delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_IT  "Attesa Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_IT "Attesa Unita':%XUmm"
#define UI_TEXT_SD_REMOVED_IT       "SD Card rimosso"
#define UI_TEXT_SD_INSERTED_IT      "SD Card inserita"
#define UI_TEXT_PRINTER_READY_IT    "Stampante pronta."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_IT   " giorni "
#define UI_TEXT_PRINTTIME_HOURS_IT  ":"
#define UI_TEXT_PRINTTIME_MINUTES_IT ""
#define UI_TEXT_PRINT_TIME_IT     "Tempo di stampa"
#define UI_TEXT_PRINT_FILAMENT_IT "Filament stampata"
#define UI_TEXT_PRINTED_IT           "stampato"
#define UI_TEXT_POWER_IT            "ATX on/off"
#define UI_TEXT_STRING_HM_DEADTIME_IT     "Tempo morto"
#define UI_TEXT_STRING_HM_SLOWBANG_IT     "SlowBang"
#define UI_TEXT_STOP_PRINT_IT "Arresto Stampa"
#define UI_TEXT_Z_BABYSTEPPING_IT "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_IT "Cambia filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_IT "Cambia filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_IT "Ruotare per spostare"
#define UI_TEXT_WIZ_CH_FILAMENT3_IT "filamento su/giu"
#define UI_TEXT_CLICK_DONE_IT "Clicca quando fatto"
#define UI_TEXT_AUTOLEVEL_ONOFF_IT  "Autoliv.: %ll"
#define UI_TEXT_SERVOPOS_IT "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_IT      "Ignora M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_IT "Clicca per"
#define UI_TEXT_WIZ_REHEAT2_IT "riscaldare estrusori"
#define UI_TEXT_WIZ_WAITTEMP1_IT "Attendere che temp."
#define UI_TEXT_WIZ_WAITTEMP2_IT "di destinazione ..."
#define UI_TEXT_EXTRUDER_JAM_IT "Stoccaggio estrusore"
#define UI_TEXT_STANDBY_IT "Stand-by"
#define UI_TEXT_BED_COATING_IT "Rivestimento letto"
#define UI_TEXT_BED_COATING_SET1_IT "Rivestimento letto:"
#define UI_TEXT_BED_COATING_SET2_IT ""
#define UI_TEXT_NOCOATING_IT "Non rivestito"
#define UI_TEXT_BUILDTAK_IT "BuildTak"
#define UI_TEXT_KAPTON_IT "Kapton"
#define UI_TEXT_BLUETAPE_IT "Blu nastro adesivo"
#define UI_TEXT_PETTAPE_IT "Verde PET nastro"
#define UI_TEXT_GLUESTICK_IT "Colla stick"
#define UI_TEXT_CUSTOM_IT "Usanza"
#define UI_TEXT_COATING_CUSTOM_IT "Usanza:%BCmm"
#define UI_TEXT_LANGUAGE_IT "Lingua"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_IT "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_IT "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_IT "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_IT "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_IT "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_IT "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_IT "Copie: %ed     Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_IT "Flusso:\xfd %of%%% Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_IT "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_IT "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_IT "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_IT cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_IT "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_IT "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_IT "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_IT "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_IT "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_IT "%Uf m"
#define UI_TEXT_METER_PRINTED_IT "%Uf m " UI_TEXT_PRINTED_IT
#define UI_TEXT_STATUS_IT "%os"
#define UI_TEXT_EMPTY_IT ""
#define UI_TEXT_TEMP_SET_IT cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_IT cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_IT " %BCmm"
#define UI_TEXT_EXTR3_TEMP_IT "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_IT "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_IT "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_IT "Estrusore 4 Spento"
#define UI_TEXT_EXTR4_OFF_IT "Estrusore 5 Spento"
#define UI_TEXT_EXTR5_OFF_IT "Estrusore 6 Spento"
#define UI_TEXT_EXTR3_SELECT_IT "%X3 Seleziona Estr. 4"
#define UI_TEXT_EXTR4_SELECT_IT "%X4 Seleziona Estr. 5"
#define UI_TEXT_EXTR5_SELECT_IT "%X5 Seleziona Estr. 6"
#define UI_TEXT_DITTO_0_IT "%D0 Nessuna Copia"
#define UI_TEXT_DITTO_1_IT "%D1 1 Copia"
#define UI_TEXT_DITTO_2_IT "%D2 2 Copie"
#define UI_TEXT_DITTO_3_IT "%D3 3 Copie"
#define UI_TEXT_ZPROBE_HEIGHT_IT "Altezza Z-Probe:%zh"

#define UI_TEXT_OFFSETS_IT "Set print offsets"
#define UI_TEXT_X_OFFSET_IT "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_IT "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_IT "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_IT "Layer %Pl/%PL"
#define UI_TEXT_PROGRESS_IT "%Pp%%%"
#define UI_TEXT_PRINTNAME_IT "%Pn"

#define UI_TEXT_SETUP_IT "Setup"
#define UI_TEXT_MEASURE_DISTORTION_IT "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_IT "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_IT   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_IT "Cancel"
#define UI_TEXT_PLEASE_WAIT_IT "*** Please wait ***"
#define UI_TEXT_CLEARBED1_IT "Make sure the heated"
#define UI_TEXT_CLEARBED2_IT "bed is clear of any"
#define UI_TEXT_CLEARBED3_IT "obstructions"
#define UI_TEXT_NOTIFICATION_IT "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_IT "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_IT "Heater decoupled"
#define UI_TEXT_SLIPPING_IT "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_IT "Leveling error"
#define UI_TEXT_OK_IT "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_IT "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_IT "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_IT "Autolevel bed"
#define UI_TEXT_HOMING_IT "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_IT "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_IT "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_IT "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_IT "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_IT "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_IT "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_IT "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_IT "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_IT "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_IT "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_IT "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_IT "Continue"
#define UI_TEXT_CLOSE_IT "Close"
#define UI_TEXT_EXTR_ZOFF_IT "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_IT "Measuring ..."
#define UI_TEXT_Z_PROBE_IT "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_IT "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_IT "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_IT "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_IT "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_IT "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_IT "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_IT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_IT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_IT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_IT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_IT USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_IT UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_IT UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_IT UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_IT UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_IT UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_IT UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_IT UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_IT UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_IT UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_IT UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_IT UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_IT UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_IT UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_IT UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_IT UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_IT UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_IT UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_IT UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_IT UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_IT UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_IT UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_IT UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_IT UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_IT UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_IT UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_IT UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_IT UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_IT UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_IT UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_IT UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_IT UI_TEXT_WIZ_AC_LOST_43_TEXT

// Spanish translation

#define UI_TEXT_ON_ES               "On"
#define UI_TEXT_OFF_ES              "Off"
#define UI_TEXT_NA_ES               "N/A" // Output for not available
#define UI_TEXT_YES_ES              "Si"
#define UI_TEXT_NO_ES               "No"
#define UI_TEXT_PRINT_POS_ES        "Imprimiendo..."
#define UI_TEXT_PRINTING_ES         "Imprimiendo"
#define UI_TEXT_IDLE_ES             "Idle"
#define UI_TEXT_NOSDCARD_ES         "Sin tarjeta SD"
#define UI_TEXT_ERROR_ES            "**** ERROR ****"
#define UI_TEXT_BACK_ES             "Atras " cUP
#define UI_TEXT_QUICK_SETTINGS_ES   "Control" //"Configuracion Rapida"
#define UI_TEXT_ERRORMSG_ES         "%oe"
#define UI_TEXT_CONFIGURATION_ES    "Configuracion"
#define UI_TEXT_POSITION_ES         "Posicion"
#define UI_TEXT_EXTRUDER_ES         "Extrusor"
#define UI_TEXT_SD_CARD_ES          "Tarjeta SD"
#define UI_TEXT_DEBUGGING_ES        "Debugging"
#define UI_TEXT_HOME_DELTA_ES       "Delta Home"
#define UI_TEXT_HOME_ALL_ES         "Todo Home"
#define UI_TEXT_HOME_X_ES           "X Home"
#define UI_TEXT_HOME_Y_ES           "Y Home"
#define UI_TEXT_HOME_Z_ES           "Z Home"
#define UI_TEXT_PREHEAT_SINGLE_ES   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_ES      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_ES     "Luces:%lo"
#define UI_TEXT_COOLDOWN_ES         "Enfriar"
#define UI_TEXT_SET_TO_ORIGIN_ES    "Fija a origen"
#define UI_TEXT_DISABLE_STEPPER_ES  "Desactiva motor"
#define UI_TEXT_X_POSITION_ES       "Posicion X"
#define UI_TEXT_X_POS_FAST_ES       "Pos. Rapida X"
#define UI_TEXT_Y_POSITION_ES       "Posicion Y"
#define UI_TEXT_Y_POS_FAST_ES       "Pos. Rapida Y"
#define UI_TEXT_Z_POSITION_ES       "Posicion Z"
#define UI_TEXT_Z_POS_FAST_ES       "Pos. Rapida Z"
#define UI_TEXT_E_POSITION_ES       "Extr. Posicion"
#define UI_TEXT_BED_TEMP_ES         "Temp.Cama:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_ES       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_ES       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_ES       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_ES        "Extrusor 1 Off"
#define UI_TEXT_EXTR1_OFF_ES        "Extrusor 2 Off"
#define UI_TEXT_EXTR2_OFF_ES        "Extrusor 3 Off"
#define UI_TEXT_EXTR0_SELECT_ES     "%X0 Select Extr. 1"
#define UI_TEXT_EXTR1_SELECT_ES     "%X1 Select Extr. 2"
#define UI_TEXT_EXTR2_SELECT_ES     "%X2 Select Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_ES      "Fija Originen"
#define UI_TEXT_PRINT_X_ES          "Print X:%ax"
#define UI_TEXT_PRINT_Y_ES          "Print Y:%ay"
#define UI_TEXT_PRINT_Z_ES          "Print Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_ES    "Print:%az"
#define UI_TEXT_MOVE_X_ES           "Mueve X:%aX"
#define UI_TEXT_MOVE_Y_ES           "Mueve Y:%aY"
#define UI_TEXT_MOVE_Z_ES           "Mueve Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_ES     "Mueve:%aZ"
#define UI_TEXT_JERK_ES             "Jerk:%aj"
#define UI_TEXT_ZJERK_ES            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_ES     "Aceleracion"
#define UI_TEXT_STORE_TO_EEPROM_ES  "Almacena en EEPROM"
#define UI_TEXT_LOAD_EEPROM_ES      "Carga de EEPROM"
#define UI_TEXT_DBG_ECHO_ES         "Echo   :%do"
#define UI_TEXT_DBG_INFO_ES         "Info   :%di"
#define UI_TEXT_DBG_ERROR_ES        "Errors :%de"
#define UI_TEXT_DBG_DRYRUN_ES       "Ejecucion vacio:%dd"
#define UI_TEXT_DBG_ENDSTOP_ES      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_ES          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_ES      "%O1 OPS Classica"
#define UI_TEXT_OPS_FAST_ES         "%O2 OPS Rapida"
#define UI_TEXT_OPS_RETRACT_ES      "Retraccion :%Or"
#define UI_TEXT_OPS_BACKSLASH_ES    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_ES      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_ES   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_ES        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_ES       "Imprimiendo fichero"
#define UI_TEXT_PAUSE_PRINT_ES      "Pausando impresion"
#define UI_TEXT_CONTINUE_PRINT_ES   "Continuando impresion"
#define UI_TEXT_UNMOUNT_CARD_ES     "Desmontando Tarjeta"
#define UI_TEXT_MOUNT_CARD_ES       "Montando Card"
#define UI_TEXT_DELETE_FILE_ES      "Borrando fichero"
#define UI_TEXT_FEEDRATE_ES         "Feedrate"
#define UI_TEXT_FEED_MAX_X_ES       "X Max:%fx"
#define UI_TEXT_FEED_MAX_Y_ES       "Y Max:%fy"
#define UI_TEXT_FEED_MAX_Z_ES       "Z Max:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_ES "Max:%fz"
#define UI_TEXT_FEED_HOME_X_ES      "X Home:%fX"
#define UI_TEXT_FEED_HOME_Y_ES      "Y Home:%fY"
#define UI_TEXT_FEED_HOME_Z_ES      "Z Home:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_ES "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_ES "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_ES "Fin Carrera Min:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_ES "Max:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_ES ""
#define UI_TEXT_ACTION_YPOSITION4A_ES "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_ES "Fin Carrera Min:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_ES "Max:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_ES ""
#define UI_TEXT_ACTION_ZPOSITION4A_ES "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_ES "Fin Carrera Min:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_ES "Max:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_ES ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_ES "Fin Carrera Min:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_ES "Max:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_ES "Fin Carrera Min:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_ES "Max:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_ES "Fin Carrera Min:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_ES "Max:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_ES ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_ES "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_ES "1 click = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_ES "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_ES "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_ES "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_ES "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_ES "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_ES "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_ES "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_ES "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_ES "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_ES          "Velocida ventilador"
#define UI_TEXT_ACTION_FANSPEED_ES   "Vel. vent.:%Fs%%%"
#define UI_TEXT_FAN_OFF_ES           "Apaga ventilador"
#define UI_TEXT_FAN_25_ES            "Ventilador al 25%%%"
#define UI_TEXT_FAN_50_ES            "Ventilador al 50%%%"
#define UI_TEXT_FAN_75_ES            "Ventilador al 75%%%"
#define UI_TEXT_FAN_FULL_ES          "Ventilador al 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_ES  "Motor Inactivo"
#define UI_TEXT_STEPPER_INACTIVE2A_ES "Dis. Despues: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_ES "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_ES    "Max. Inactivo"
#define UI_TEXT_POWER_INACTIVE2A_ES   "Dis. Despues: %ip"
#define UI_TEXT_POWER_INACTIVE2B_ES   "[min] 0=Off"
#define UI_TEXT_GENERAL_ES           "General"
#define UI_TEXT_BAUDRATE_ES          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_ES        "Pasos/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_ES   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_ES     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_ES        "Acel:%XA"
#define UI_TEXT_EXTR_WATCH_ES        "Tiempo Estab.:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_ES    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_ES    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_ES      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_ES        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_ES     "Tiempo muerto:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_ES      "PWM control:%XM"
#define UI_TEXT_EXTR_IGAIN_ES        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_ES        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_ES         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_ES         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_ES         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_ES         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_ES         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_ES "BangBang"
#define UI_TEXT_STRING_HM_PID_ES     "PID"
#define UI_TEXT_STRING_ACTION_ES     "Accion:%la"
#define UI_TEXT_HEATING_EXTRUDER_ES  "Calentando Extrusor"
#define UI_TEXT_HEATING_BED_ES       "Calentando Cama"
#define UI_TEXT_KILLED_ES            "Aborta"
#define UI_TEXT_STEPPER_DISABLED_ES  "Deshabilita motor"
#define UI_TEXT_EEPROM_STOREDA_ES     "Config."
#define UI_TEXT_EEPROM_STOREDB_ES     "almacenada en EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_ES     "Config."
#define UI_TEXT_EEPROM_LOADEDB_ES     "cargada de EEPROM"
#define UI_TEXT_UPLOADING_ES         "Actualizando..."
#define UI_TEXT_PAGE_BUFFER_ES       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_ES     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_ES     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_ES     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_ES     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_ES          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_ES    "Mult. Velocidad.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_ES     "Mult. Flujo:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_ES  "Mostrar medicion"
#define UI_TEXT_RESET_MEASUREMENT_ES "Resetear medicion"
#define UI_TEXT_SET_MEASURED_ORIGIN_ES "Set Z=0"
#define UI_TEXT_ZCALIB_ES             "Z calib."
#define UI_TEXT_SET_P1_ES            "Set P1"
#define UI_TEXT_SET_P2_ES            "Set P2"
#define UI_TEXT_SET_P3_ES            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_ES "Calcula nivelacion"
#define UI_TEXT_LEVEL_ES             "Nivel delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_ES  "Esperando Temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_ES "Esperando Unidad:%XUmm"
#define UI_TEXT_SD_REMOVED_ES       "Tarjeta SD retira"
#define UI_TEXT_SD_INSERTED_ES      "Tarjeta SD insertada"
#define UI_TEXT_PRINTER_READY_ES    "Impresora lista."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_ES   " dias "
#define UI_TEXT_PRINTTIME_HOURS_ES  ":"
#define UI_TEXT_PRINTTIME_MINUTES_ES ""
#define UI_TEXT_PRINT_TIME_ES     "tiempo de impresion"
#define UI_TEXT_PRINT_FILAMENT_ES "Filamento impresa"
#define UI_TEXT_PRINTED_ES           "impreso"
#define UI_TEXT_POWER_ES            "Energie ATX on/off"
#define UI_TEXT_STRING_HM_DEADTIME_ES     "Tiempo muerto"
#define UI_TEXT_STRING_HM_SLOWBANG_ES     "SlowBang"
#define UI_TEXT_STOP_PRINT_ES "Detener impresion"
#define UI_TEXT_Z_BABYSTEPPING_ES "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_ES "Cambio filamento"
#define UI_TEXT_WIZ_CH_FILAMENT1_ES "Cambio filamento"
#define UI_TEXT_WIZ_CH_FILAMENT2_ES "Gire para mover"
#define UI_TEXT_WIZ_CH_FILAMENT3_ES "fil. arriba/abajo"
#define UI_TEXT_CLICK_DONE_ES "Clic cuando se hace"
#define UI_TEXT_AUTOLEVEL_ONOFF_ES  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_ES "Pos. servo: %oS"
#define UI_TEXT_IGNORE_M106_ES      "Ignorar M106 cmd %Fi"
#define UI_TEXT_WIZ_REHEAT1_ES "Haga clic para"
#define UI_TEXT_WIZ_REHEAT2_ES "recalentar extr."
#define UI_TEXT_WIZ_WAITTEMP1_ES "Espere a temp."
#define UI_TEXT_WIZ_WAITTEMP2_ES "objetivo ..."
#define UI_TEXT_EXTRUDER_JAM_ES "Atasco extrusora"
#define UI_TEXT_STANDBY_ES "Standby"
#define UI_TEXT_BED_COATING_ES "Recubrimiento cama"
#define UI_TEXT_BED_COATING_SET1_ES "Rec. cama ajustado a"
#define UI_TEXT_BED_COATING_SET2_ES ""
#define UI_TEXT_NOCOATING_ES "Sin recubrimiento"
#define UI_TEXT_BUILDTAK_ES "BuildTak"
#define UI_TEXT_KAPTON_ES "Kapton"
#define UI_TEXT_BLUETAPE_ES "Cinta adhesiva azul"
#define UI_TEXT_PETTAPE_ES "Verde PET cinta"
#define UI_TEXT_GLUESTICK_ES "Barra de pegamento"
#define UI_TEXT_CUSTOM_ES "Custom"
#define UI_TEXT_COATING_CUSTOM_ES "Custom:%BCmm"
#define UI_TEXT_LANGUAGE_ES "Idioma"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_ES "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_ES "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_ES "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_ES "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_ES "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_ES "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_ES "Copias: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_ES "Flujo:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_ES "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_ES "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_ES "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_ES cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_ES "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_ES "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_ES "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_ES "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_ES "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_ES "%Uf m"
#define UI_TEXT_METER_PRINTED_ES "%Uf m " UI_TEXT_PRINTED_ES
#define UI_TEXT_STATUS_ES "%os"
#define UI_TEXT_EMPTY_ES ""
#define UI_TEXT_TEMP_SET_ES cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_ES cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_ES " %BCmm"
#define UI_TEXT_EXTR3_TEMP_ES "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_ES "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_ES "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_ES "Extrusor 4 Off"
#define UI_TEXT_EXTR4_OFF_ES "Extrusor 5 Off"
#define UI_TEXT_EXTR5_OFF_ES "Extrusor 6 Off"
#define UI_TEXT_EXTR3_SELECT_ES "%X3 Select Extr. 4"
#define UI_TEXT_EXTR4_SELECT_ES "%X4 Select Extr. 5"
#define UI_TEXT_EXTR5_SELECT_ES "%X5 Select Extr. 6"
#define UI_TEXT_DITTO_0_ES "%D0 No Hay Copias"
#define UI_TEXT_DITTO_1_ES "%D1 1 Copia"
#define UI_TEXT_DITTO_2_ES "%D2 2 Copias"
#define UI_TEXT_DITTO_3_ES "%D3 3 Copias"
#define UI_TEXT_ZPROBE_HEIGHT_ES "Altura Z-Probe:%zh"

#define UI_TEXT_OFFSETS_ES "Set print offsets"
#define UI_TEXT_X_OFFSET_ES "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_ES "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_ES "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_ES "Capa %Pl/%PL"
#define UI_TEXT_PROGRESS_ES "%Pp%%%"
#define UI_TEXT_PRINTNAME_ES "%Pn"

#define UI_TEXT_SETUP_ES "Setup"
#define UI_TEXT_MEASURE_DISTORTION_ES "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_ES "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_ES   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_ES "Cancel"
#define UI_TEXT_PLEASE_WAIT_ES "*** Please wait ***"
#define UI_TEXT_CLEARBED1_ES "Make sure the heated"
#define UI_TEXT_CLEARBED2_ES "bed is clear of any"
#define UI_TEXT_CLEARBED3_ES "obstructions"
#define UI_TEXT_NOTIFICATION_ES "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_ES "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_ES "Heater decoupled"
#define UI_TEXT_SLIPPING_ES "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_ES "Leveling error"
#define UI_TEXT_OK_ES "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_ES "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_ES "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_ES "Autolevel bed"
#define UI_TEXT_HOMING_ES "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_ES "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_ES "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_ES "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_ES "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_ES "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_ES "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_ES "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_ES "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_ES "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_ES "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_ES "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_ES "Continue"
#define UI_TEXT_CLOSE_ES "Close"
#define UI_TEXT_EXTR_ZOFF_ES "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_ES "Measuring ..."
#define UI_TEXT_Z_PROBE_ES "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_ES "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_ES "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_ES "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_ES "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_ES "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_ES "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_ES USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_ES USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_ES USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_ES USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_ES USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_ES UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_ES UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_ES UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_ES UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_ES UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_ES UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_ES UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_ES UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_ES UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_ES UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_ES UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_ES UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_ES UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_ES UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_ES UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_ES UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_ES UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_ES UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_ES UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_ES UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_ES UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_ES UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_ES UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_ES UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_ES UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_ES UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_ES UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_ES UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_ES UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_ES UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_ES UI_TEXT_WIZ_AC_LOST_43_TEXT

// *************** Swedish translation ****************
// By Daniel Tedenljung 2013-08-21

#define UI_TEXT_ON_SE               "P" STR_uuml ""
#define UI_TEXT_OFF_SE              "Av"
#define UI_TEXT_NA_SE               "N/A" // Output for not available
#define UI_TEXT_YES_SE              "Ja"
#define UI_TEXT_NO_SE               "Nej"
#define UI_TEXT_PRINT_POS_SE        "Skriver ut..."
#define UI_TEXT_PRINTING_SE         "Skriver"
#define UI_TEXT_IDLE_SE             "Sysslol" STR_ouml "s"
#define UI_TEXT_NOSDCARD_SE         "Inget SD-kort"
#define UI_TEXT_ERROR_SE            "**** FEL ****"
#define UI_TEXT_BACK_SE             "Tillbaka " cUP
#define UI_TEXT_QUICK_SETTINGS_SE   "Control" //"Inst" STR_auml "llnigar"
#define UI_TEXT_ERRORMSG_SE         "%oe"
#define UI_TEXT_CONFIGURATION_SE    "Konfiguration"
#define UI_TEXT_POSITION_SE         "Position"
#define UI_TEXT_EXTRUDER_SE         "Extruder"
#define UI_TEXT_SD_CARD_SE          "SD-kort"
#define UI_TEXT_DEBUGGING_SE        "Debugging"
#define UI_TEXT_HOME_DELTA_SE       "Hem delta"
#define UI_TEXT_HOME_ALL_SE         "K" STR_ouml "r hem alla"
#define UI_TEXT_HOME_X_SE           "K" STR_ouml "r hem X"
#define UI_TEXT_HOME_Y_SE           "K" STR_ouml "r hem Y"
#define UI_TEXT_HOME_Z_SE           "K" STR_ouml "r hem Z"
#define UI_TEXT_PREHEAT_SINGLE_SE   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_SE      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_SE     "Lampor:%lo"
#define UI_TEXT_COOLDOWN_SE         "Kyl ner"
#define UI_TEXT_SET_TO_ORIGIN_SE    "S"  STR_auml "tt som origo"
#define UI_TEXT_DISABLE_STEPPER_SE  "St" STR_auml "ng av stegmotor"
#define UI_TEXT_X_POSITION_SE       "X-position"
#define UI_TEXT_X_POS_FAST_SE       "X-pos. snabb"
#define UI_TEXT_Y_POSITION_SE       "Y-position"
#define UI_TEXT_Y_POS_FAST_SE       "Y-pos. snabb"
#define UI_TEXT_Z_POSITION_SE       "Z-osition"
#define UI_TEXT_Z_POS_FAST_SE       "Z-pos. snabb"
#define UI_TEXT_E_POSITION_SE       "Extr.-position"
#define UI_TEXT_BED_TEMP_SE         "B" STR_auml "dd-temp:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_SE       "Temp. 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_SE       "Temp. 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_SE       "Temp. 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_SE        "Extruder 1 av"
#define UI_TEXT_EXTR1_OFF_SE        "Extruder 2 av"
#define UI_TEXT_EXTR2_OFF_SE        "Extruder 3 av"
#define UI_TEXT_EXTR0_SELECT_SE     "%X0 V" STR_auml "lj Extr. 1"
#define UI_TEXT_EXTR1_SELECT_SE     "%X1 V" STR_auml "lj Extr. 2"
#define UI_TEXT_EXTR2_SELECT_SE     "%X2 V" STR_auml "lj Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_SE      "S" STR_auml "tt origo"
#define UI_TEXT_PRINT_X_SE          "Skriv X:%ax"
#define UI_TEXT_PRINT_Y_SE          "Skriv Y:%ay"
#define UI_TEXT_PRINT_Z_SE          "Skriv Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_SE    "Skriv:%az"
#define UI_TEXT_MOVE_X_SE           "Transp. X:%aX"
#define UI_TEXT_MOVE_Y_SE           "Transp. Y:%aY"
#define UI_TEXT_MOVE_Z_SE           "Transp. Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_SE     "Transp.:%aZ"
#define UI_TEXT_JERK_SE             "Ryck: %aj"
#define UI_TEXT_ZJERK_SE            "Z-ryck: %aJ"
#define UI_TEXT_ACCELERATION_SE     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_SE  "Spara till EEPROM"
#define UI_TEXT_LOAD_EEPROM_SE      "Ladda f. EEPROM"
#define UI_TEXT_DBG_ECHO_SE         "Eko:    %do"
#define UI_TEXT_DBG_INFO_SE         "Info:   %di"
#define UI_TEXT_DBG_ERROR_SE        "Errors: %de"
#define UI_TEXT_DBG_DRYRUN_SE       "Torrk" STR_ouml "r:%dd"
#define UI_TEXT_DBG_ENDSTOP_SE      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_SE          "%O1 OPS av"
#define UI_TEXT_OPS_CLASSIC_SE      "%O2 OPS klassisk"
#define UI_TEXT_OPS_FAST_SE         "%O3 OPS snabb"
#define UI_TEXT_OPS_RETRACT_SE      "Backa: %Or"
#define UI_TEXT_OPS_BACKSLASH_SE    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_SE      "Min.dist: %Od"
#define UI_TEXT_OPS_MOVE_AFTER_SE   "Flytta efter:%Oa"
#define UI_TEXT_ANTI_OOZE_SE        "Antikladd"
#define UI_TEXT_PRINT_FILE_SE       "Skriv ut fil"
#define UI_TEXT_PAUSE_PRINT_SE      "Pausa utskrift"
#define UI_TEXT_CONTINUE_PRINT_SE   "Forts" STR_auml "tt utskrift"
#define UI_TEXT_UNMOUNT_CARD_SE     "Mata ut kort"
#define UI_TEXT_MOUNT_CARD_SE       "Anslut kort"
#define UI_TEXT_DELETE_FILE_SE      "Radera fil"
#define UI_TEXT_FEEDRATE_SE         "Matning"
#define UI_TEXT_FEED_MAX_X_SE       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_SE       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_SE       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_SE "Max:%fz"
#define UI_TEXT_FEED_HOME_X_SE      "Ref X:%fX"
#define UI_TEXT_FEED_HOME_Y_SE      "Ref Y:%fY"
#define UI_TEXT_FEED_HOME_Z_SE      "Ref Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_SE "Ref:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_SE "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_SE ""
#define UI_TEXT_ACTION_YPOSITION4A_SE "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_SE ""
#define UI_TEXT_ACTION_ZPOSITION4A_SE "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_SE ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_SE "Min " STR_auml "ndl" STR_auml "ge:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_SE "Max " STR_auml "ndl" STR_auml "ge:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_SE ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_SE "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_SE "Ett klick = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_SE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_SE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_SE "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_SE "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_SE "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_SE "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_SE "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_SE "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_SE "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_SE          "Fl" STR_auml "kt hast."
#define UI_TEXT_ACTION_FANSPEED_SE   "Fl" STR_auml "kt hast.:%Fs%%%"
#define UI_TEXT_FAN_OFF_SE           "St" STR_auml "ng av fl" STR_auml "kt"
#define UI_TEXT_FAN_25_SE            "Fl" STR_auml "kt 25%%%"
#define UI_TEXT_FAN_50_SE            "Fl" STR_auml "kt 50%%%"
#define UI_TEXT_FAN_75_SE            "Fl" STR_auml "kt 75%%%"
#define UI_TEXT_FAN_FULL_SE          "Full fl" STR_auml "kt"
#define UI_TEXT_STEPPER_INACTIVE_SE  "Stegmotorer inakt."
#define UI_TEXT_STEPPER_INACTIVE2A_SE "Inakt. efter: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_SE "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_SE    "Max. inaktiv"
#define UI_TEXT_POWER_INACTIVE2A_SE   "Inakt. efter: %ip"
#define UI_TEXT_POWER_INACTIVE2B_SE   "[min] 0=Off"
#define UI_TEXT_GENERAL_SE           "Generella"
#define UI_TEXT_BAUDRATE_SE          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_SE        "Steg/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_SE   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_SE     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_SE        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_SE        "Stab. tid:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_SE    "Advance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_SE    "Advance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_SE      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_SE        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_SE     "D" STR_ouml "dtid:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_SE      "Kontroll PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_SE        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_SE        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_SE         "Drive min:%Xm"
#define UI_TEXT_EXTR_DMAX_SE         "Drive max:%XM"
#define UI_TEXT_EXTR_PMAX_SE         "PID max:%XD"
#define UI_TEXT_EXTR_XOFF_SE         "X-offset:%Xx"
#define UI_TEXT_EXTR_YOFF_SE         "Y-offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_SE "BangBang"
#define UI_TEXT_STRING_HM_PID_SE     "PID"
#define UI_TEXT_STRING_ACTION_SE     "Aktion:%la"
#define UI_TEXT_HEATING_EXTRUDER_SE  "V" STR_auml "rmer Extruder"
#define UI_TEXT_HEATING_BED_SE       "V" STR_auml "rmer B" STR_auml "dd"
#define UI_TEXT_KILLED_SE            "D" STR_ouml "dad"
#define UI_TEXT_STEPPER_DISABLED_SE  "Stegmotorer av"
#define UI_TEXT_EEPROM_STOREDA_SE     "Konfiguration"
#define UI_TEXT_EEPROM_STOREDB_SE     "sparad i EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_SE     "Konfiguration"
#define UI_TEXT_EEPROM_LOADEDB_SE     "laddat fr. EEPROM"
#define UI_TEXT_UPLOADING_SE         "Uppladdning..."
#define UI_TEXT_PAGE_BUFFER_SE       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_SE     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_SE     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_SE     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_SE     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_SE          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_SE    "Hast. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_SE     "Fl" STR_ouml "de Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_SE  "Visa m" STR_auml "tning"
#define UI_TEXT_RESET_MEASUREMENT_SE "Aterst" STR_auml "ll m" STR_auml "tning"
#define UI_TEXT_SET_MEASURED_ORIGIN_SE "St" STR_auml "ll Z=0"
#define UI_TEXT_ZCALIB_SE             "Z kalib."
#define UI_TEXT_SET_P1_SE            "St" STR_auml "ll P1"
#define UI_TEXT_SET_P2_SE            "St" STR_auml "ll  P2"
#define UI_TEXT_SET_P3_SE            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_SE "ber" STR_auml "kna nivellering"
#define UI_TEXT_LEVEL_SE             "Niva delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_SE  "Inv" STR_auml "nta temp.%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_SE "Inv" STR_auml "nta pos:%XUmm"
#define UI_TEXT_SD_REMOVED_SE       "SD-kort tas bort"
#define UI_TEXT_SD_INSERTED_SE      "SD-kort isatt"
#define UI_TEXT_PRINTER_READY_SE    "Utskrift klar."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_SE   " dagar "
#define UI_TEXT_PRINTTIME_HOURS_SE  ":"
#define UI_TEXT_PRINTTIME_MINUTES_SE ""
#define UI_TEXT_PRINT_TIME_SE     "Tryckningstid"
#define UI_TEXT_PRINT_FILAMENT_SE "Filament tryckt"
#define UI_TEXT_PRINTED_SE           "tryckt"
#define UI_TEXT_POWER_SE            "ATX str" STR_ouml "m p" STR_uuml "/av"
#define UI_TEXT_STRING_HM_DEADTIME_SE     "D" STR_ouml "dtid"
#define UI_TEXT_STRING_HM_SLOWBANG_SE     "SlowBang"
#define UI_TEXT_STOP_PRINT_SE "Stopp trycket"
#define UI_TEXT_Z_BABYSTEPPING_SE "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_SE "" STR_Auml "ndra filamentet"
#define UI_TEXT_WIZ_CH_FILAMENT1_SE "" STR_Auml "ndra filamentet"
#define UI_TEXT_WIZ_CH_FILAMENT2_SE "Rotera att flytta"
#define UI_TEXT_WIZ_CH_FILAMENT3_SE "filamentet upp/ner"
#define UI_TEXT_CLICK_DONE_SE "Klicka n" STR_auml "r du " STR_auml "r klar"
#define UI_TEXT_AUTOLEVEL_ONOFF_SE  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_SE "Servol" STR_auml "ge: %oS"
#define UI_TEXT_IGNORE_M106_SE      "Ignorera M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_SE "Klicka f" STR_ouml "r att"
#define UI_TEXT_WIZ_REHEAT2_SE "v" STR_auml "rma extrudrar."
#define UI_TEXT_WIZ_WAITTEMP1_SE "V" STR_auml "nta pa"
#define UI_TEXT_WIZ_WAITTEMP2_SE "maltemperaturer ..."
#define UI_TEXT_EXTRUDER_JAM_SE "Extruder tr" STR_auml "ngsel"
#define UI_TEXT_STANDBY_SE "Vilar"
#define UI_TEXT_BED_COATING_SE "B" STR_auml "ddbel" STR_auml "ggning"
#define UI_TEXT_BED_COATING_SET1_SE "B" STR_auml "ddbel" STR_auml "ggning:"
#define UI_TEXT_BED_COATING_SET2_SE ""
#define UI_TEXT_NOCOATING_SE "Ingen bel" STR_auml "ggning"
#define UI_TEXT_BUILDTAK_SE "BuildTak"
#define UI_TEXT_KAPTON_SE "Kapton"
#define UI_TEXT_BLUETAPE_SE "Bla maskeringstejp"
#define UI_TEXT_PETTAPE_SE "Gr" STR_ouml "n PET band"
#define UI_TEXT_GLUESTICK_SE "Limstift"
#define UI_TEXT_CUSTOM_SE "Anpassad"
#define UI_TEXT_COATING_CUSTOM_SE "Anpassad:%BCmm"
#define UI_TEXT_LANGUAGE_SE "Sprak"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_SE "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_SE "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_SE "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_SE "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_SE "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_SE "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_SE "Kopior: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_SE "Fl" STR_ouml "de:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_SE "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_SE "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_SE "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_SE cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_SE "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_SE "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_SE "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_SE "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_SE "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_SE "%Uf m"
#define UI_TEXT_METER_PRINTED_SE "%Uf m " UI_TEXT_PRINTED_SE
#define UI_TEXT_STATUS_SE "%os"
#define UI_TEXT_EMPTY_SE ""
#define UI_TEXT_TEMP_SET_SE cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_SE cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_SE " %BCmm"
#define UI_TEXT_EXTR3_TEMP_SE "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_SE "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_SE "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_SE "Extruder 4 av"
#define UI_TEXT_EXTR4_OFF_SE "Extruder 5 av"
#define UI_TEXT_EXTR5_OFF_SE "Extruder 6 av"
#define UI_TEXT_EXTR3_SELECT_SE "%X3 V" STR_auml "lj Extr. 4"
#define UI_TEXT_EXTR4_SELECT_SE "%X4 V" STR_auml "lj Extr. 5"
#define UI_TEXT_EXTR5_SELECT_SE "%X5 V" STR_auml "lj Extr. 6"
#define UI_TEXT_DITTO_0_SE "%D0 Inga Kopior"
#define UI_TEXT_DITTO_1_SE "%D1 1 Kopia"
#define UI_TEXT_DITTO_2_SE "%D2 2 Kopior"
#define UI_TEXT_DITTO_3_SE "%D3 3 Kopior"
#define UI_TEXT_ZPROBE_HEIGHT_SE "Z-probh" STR_ouml "jden:%zh"



#define UI_TEXT_OFFSETS_SE "Set print offsets"
#define UI_TEXT_X_OFFSET_SE "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_SE "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_SE "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_SE "Lager %Pl/%PL"
#define UI_TEXT_PROGRESS_SE "%Pp%%%"
#define UI_TEXT_PRINTNAME_SE "%Pn"

#define UI_TEXT_SETUP_SE "Setup"
#define UI_TEXT_MEASURE_DISTORTION_SE "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_SE "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_SE   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_SE "Cancel"
#define UI_TEXT_PLEASE_WAIT_SE "*** Please wait ***"
#define UI_TEXT_CLEARBED1_SE "Make sure the heated"
#define UI_TEXT_CLEARBED2_SE "bed is clear of any"
#define UI_TEXT_CLEARBED3_SE "obstructions"
#define UI_TEXT_NOTIFICATION_SE "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_SE "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_SE "Heater decoupled"
#define UI_TEXT_SLIPPING_SE "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_SE "Leveling error"
#define UI_TEXT_OK_SE "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_SE "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_SE "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_SE "Autolevel bed"
#define UI_TEXT_HOMING_SE "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_SE "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_SE "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_SE "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_SE "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_SE "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_SE "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_SE "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_SE "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_SE "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_SE "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_SE "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_SE "Continue"
#define UI_TEXT_CLOSE_SE "Close"
#define UI_TEXT_EXTR_ZOFF_SE "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_SE "Measuring ..."
#define UI_TEXT_Z_PROBE_SE "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_SE "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_SE "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_SE "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_SE "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_SE "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_SE "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_SE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_SE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_SE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_SE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_SE USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_SE UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_SE UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_SE UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_SE UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_SE UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_SE UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_SE UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_SE UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_SE UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_SE UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_SE UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_SE UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_SE UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_SE UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_SE UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_SE UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_SE UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_SE UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_SE UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_SE UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_SE UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_SE UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_SE UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_SE UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_SE UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_SE UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_SE UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_SE UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_SE UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_SE UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_SE UI_TEXT_WIZ_AC_LOST_43_TEXT

// *************** French translation ****************
// ***************      By Doudou     ****************

#define UI_TEXT_ON_FR               "On"
#define UI_TEXT_OFF_FR              "Off"
#define UI_TEXT_NA_FR               "N/A" // Output for not available
#define UI_TEXT_YES_FR              "Oui"
#define UI_TEXT_NO_FR               "Non"
#define UI_TEXT_PRINT_POS_FR        "Impression..."
#define UI_TEXT_PRINTING_FR         "Impression"
#define UI_TEXT_IDLE_FR             "Au Repos"
#define UI_TEXT_NOSDCARD_FR         "Pas de Carte SD"
#define UI_TEXT_ERROR_FR            "**** ERREUR ****"
#define UI_TEXT_BACK_FR             "Retour \001"
#define UI_TEXT_QUICK_SETTINGS_FR   "Controle" //"Reglages Rapides"
#define UI_TEXT_ERRORMSG_FR         "%oe"
#define UI_TEXT_CONFIGURATION_FR    "Configuration"
#define UI_TEXT_POSITION_FR         "Position"
#define UI_TEXT_EXTRUDER_FR         "Extrudeuse"
#define UI_TEXT_SD_CARD_FR          "Carte SD"
#define UI_TEXT_DEBUGGING_FR        "Deboguer"
#define UI_TEXT_HOME_DELTA_FR       "Accueil Delta"
#define UI_TEXT_HOME_ALL_FR         "Accueil XYZ"
#define UI_TEXT_HOME_X_FR           "Accueil X"
#define UI_TEXT_HOME_Y_FR           "Accueil Y"
#define UI_TEXT_HOME_Z_FR           "Accueil Z"
#define UI_TEXT_PREHEAT_SINGLE_FR   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_FR      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_FR     "Eclairage :%lo"
#define UI_TEXT_COOLDOWN_FR         "Refroidir"
#define UI_TEXT_SET_TO_ORIGIN_FR    "Reglez sur Origine"
#define UI_TEXT_DISABLE_STEPPER_FR  "Desactiv. Moteurs"
#define UI_TEXT_X_POSITION_FR       "Position X"
#define UI_TEXT_X_POS_FAST_FR       "Pos. Rapide X"
#define UI_TEXT_Y_POSITION_FR       "Position Y"
#define UI_TEXT_Y_POS_FAST_FR       "Pos. Rapide Y"
#define UI_TEXT_Z_POSITION_FR       "Position Z"
#define UI_TEXT_Z_POS_FAST_FR       "Pos. Rapide Z"
#define UI_TEXT_E_POSITION_FR       "Position Extr."
#define UI_TEXT_BED_TEMP_FR         "Lit Temp:%eb/%Eb\002C"
#define UI_TEXT_EXTR0_TEMP_FR       "Temp. 1 :%e0/%E0\002C"
#define UI_TEXT_EXTR1_TEMP_FR       "Temp. 2 :%e1/%E1\002C"
#define UI_TEXT_EXTR2_TEMP_FR       "Temp. 3 :%e2/%E2\002C"
#define UI_TEXT_EXTR0_OFF_FR        "Extrudeuse 1 Off"
#define UI_TEXT_EXTR1_OFF_FR        "Extrudeuse 2 Off"
#define UI_TEXT_EXTR2_OFF_FR        "Extrudeuse 3 Off"
#define UI_TEXT_EXTR0_SELECT_FR     "%X0 Select. Extr. 1"
#define UI_TEXT_EXTR1_SELECT_FR     "%X1 Select. Extr. 2"
#define UI_TEXT_EXTR2_SELECT_FR     "%X2 Select. Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_FR      "Set Origin"
#define UI_TEXT_PRINT_X_FR          "Imprim. X:%ax"
#define UI_TEXT_PRINT_Y_FR          "Imprim. Y:%ay"
#define UI_TEXT_PRINT_Z_FR          "Imprim. Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_FR    "Imprim.:%az"
#define UI_TEXT_MOVE_X_FR           "Deplac. X:%aX"
#define UI_TEXT_MOVE_Y_FR           "Deplac. Y:%aY"
#define UI_TEXT_MOVE_Z_FR           "Deplac. Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_FR     "Deplac.:%aZ"
#define UI_TEXT_JERK_FR             "Jerk:%aj"
#define UI_TEXT_ZJERK_FR            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_FR     "Acceleration"
#define UI_TEXT_STORE_TO_EEPROM_FR  "Stock. => EEPROM"
#define UI_TEXT_LOAD_EEPROM_FR      "Charg. <= EEPROM"
#define UI_TEXT_DBG_ECHO_FR         "Echo         :%do"
#define UI_TEXT_DBG_INFO_FR         "Info         :%di"
#define UI_TEXT_DBG_ERROR_FR        "Erreurs      :%de"
#define UI_TEXT_DBG_DRYRUN_FR       "Fonct. a Vide:%dd"
#define UI_TEXT_DBG_ENDSTOP_FR      "Fin de course:%dp"
#define UI_TEXT_OPS_OFF_FR          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_FR      "%O1 OPS Classiq."
#define UI_TEXT_OPS_FAST_FR         "%O2 OPS Rapide"
#define UI_TEXT_OPS_RETRACT_FR      "Retract. :%Or"
#define UI_TEXT_OPS_BACKSLASH_FR    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_FR      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_FR   "Deplac. Apres:%Oa"
#define UI_TEXT_ANTI_OOZE_FR        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_FR       "Imprim. fichier"
#define UI_TEXT_PAUSE_PRINT_FR      "Pause Impress."
#define UI_TEXT_CONTINUE_PRINT_FR   "Continuer Impress."
#define UI_TEXT_UNMOUNT_CARD_FR     "Retirer Carte"
#define UI_TEXT_MOUNT_CARD_FR       "Inserer Carte"
#define UI_TEXT_DELETE_FILE_FR      "Supp. fichier"
#define UI_TEXT_FEEDRATE_FR         "Avance"
#define UI_TEXT_FEED_MAX_X_FR       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_FR       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_FR       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_FR "Max:%fz"
#define UI_TEXT_FEED_HOME_X_FR      "Accueil X:%fX"
#define UI_TEXT_FEED_HOME_Y_FR      "Accueil Y:%fY"
#define UI_TEXT_FEED_HOME_Z_FR      "Accueil Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_FR "Accueil:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_FR "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_FR "Min Butee:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_FR "Max Butee:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_FR ""
#define UI_TEXT_ACTION_YPOSITION4A_FR "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_FR "Min Butee:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_FR "Max Butee:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_FR ""
#define UI_TEXT_ACTION_ZPOSITION4A_FR "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_FR "Min Butee:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_FR "Max Butee:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_FR ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_FR "Min Butee:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_FR "Max Butee:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_FR "Min Butee:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_FR "Max Butee:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_FR "Min Butee:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_FR "Max Butee:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_FR ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_FR "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_FR "1 clic = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_FR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_FR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_FR "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_FR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_FR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_FR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_FR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_FR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_FR "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_FR          "Vit. Ventil."
#define UI_TEXT_ACTION_FANSPEED_FR   "Vit. Ventil.:%Fs%%%"
#define UI_TEXT_FAN_OFF_FR           "Arret Ventil."
#define UI_TEXT_FAN_25_FR            "Ventil. 25%%%"
#define UI_TEXT_FAN_50_FR            "Ventil. 50%%%"
#define UI_TEXT_FAN_75_FR            "Ventil. 75%%%"
#define UI_TEXT_FAN_FULL_FR          "Ventil. Max"
#define UI_TEXT_STEPPER_INACTIVE_FR  "Arret Moteurs"
#define UI_TEXT_STEPPER_INACTIVE2A_FR "Dis. Apres: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_FR "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_FR    "Arret Alim."
#define UI_TEXT_POWER_INACTIVE2A_FR   "Dis. Apres: %ip"
#define UI_TEXT_POWER_INACTIVE2B_FR   "[min] 0=Off"
#define UI_TEXT_GENERAL_FR           "General"
#define UI_TEXT_BAUDRATE_FR          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_FR        "Pas/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_FR   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_FR     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_FR        "Accel:%XA"
#define UI_TEXT_EXTR_WATCH_FR        "Stab.Temps:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_FR    "Avance lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_FR    "Avance quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_FR      "Controle:%Xh"
#define UI_TEXT_EXTR_PGAIN_FR        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_FR     "Temps Mort:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_FR      "PWM Control:%XM"
#define UI_TEXT_EXTR_IGAIN_FR        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_FR        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_FR         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_FR         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_FR         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_FR         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_FR         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_FR "BangBang"
#define UI_TEXT_STRING_HM_PID_FR     "PID"
#define UI_TEXT_STRING_ACTION_FR     "Action:%la"
#define UI_TEXT_HEATING_EXTRUDER_FR  "Chauff. Extrud."
#define UI_TEXT_HEATING_BED_FR       "Chauff. Lit"
#define UI_TEXT_KILLED_FR            "Stoppe"
#define UI_TEXT_STEPPER_DISABLED_FR  "Moteurs Arretes"
#define UI_TEXT_EEPROM_STOREDA_FR     "Configuration"
#define UI_TEXT_EEPROM_STOREDB_FR     "Stock. => EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_FR     "Configuration"
#define UI_TEXT_EEPROM_LOADEDB_FR     "Charg. <= EEPROM"
#define UI_TEXT_UPLOADING_FR         "Telechargement.."
#define UI_TEXT_PAGE_BUFFER_FR       "Tampon:%oB"
#define UI_TEXT_PAGE_EXTRUDER_FR     " E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_EXTRUDER1_FR     "E1:%e0/%E0\002C\176%o0"
#define UI_TEXT_PAGE_EXTRUDER2_FR     "E2:%e1/%E1\002C\176%o1"
#define UI_TEXT_PAGE_EXTRUDER3_FR     "E3:%e2/%E2\002C\176%o2"
#define UI_TEXT_PAGE_BED_FR          " B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY_FR    "Vit. Mul.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_FR     "Flow Mul.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_FR  "Montrer Mesure"
#define UI_TEXT_RESET_MEASUREMENT_FR "Reset Mesure"
#define UI_TEXT_SET_MEASURED_ORIGIN_FR "Regler Z=0"
#define UI_TEXT_ZCALIB_FR             "Z Calib."
#define UI_TEXT_SET_P1_FR            "Regler P1"
#define UI_TEXT_SET_P2_FR            "Regler P2"
#define UI_TEXT_SET_P3_FR            "Regler P3"
#define UI_TEXT_CALCULATE_LEVELING_FR "Calculer Nivellement"
#define UI_TEXT_LEVEL_FR             "Niveau delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_FR  "Att. Temp.%XT\002C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_FR "Att. Units:%XUmm"
#define UI_TEXT_SD_REMOVED_FR       "Carte SD retiree"
#define UI_TEXT_SD_INSERTED_FR      "Carte SD inseree"
#define UI_TEXT_PRINTER_READY_FR    "Imprimante prete"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_FR      " jours "
#define UI_TEXT_PRINTTIME_HOURS_FR     ":"
#define UI_TEXT_PRINTTIME_MINUTES_FR   ""
#define UI_TEXT_PRINT_TIME_FR          "Temps Impression"
#define UI_TEXT_PRINT_FILAMENT_FR      "Filament Imprime"
#define UI_TEXT_PRINTED_FR             "Imprime"
#define UI_TEXT_POWER_FR               "ATX power on/off"
#define UI_TEXT_STRING_HM_DEADTIME_FR  "Temps Mort"
#define UI_TEXT_STRING_HM_SLOWBANG_FR  "Tout ou Rien"
#define UI_TEXT_STOP_PRINT_FR          "Arret Impress."
#define UI_TEXT_Z_BABYSTEPPING_FR "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_FR "Changement Filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_FR "Changement Filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_FR "Tournez Deplacer"
#define UI_TEXT_WIZ_CH_FILAMENT3_FR "Filament haut/bas"
#define UI_TEXT_CLICK_DONE_FR 		"Continuer avec Clic"
#define UI_TEXT_AUTOLEVEL_ONOFF_FR  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_FR 		"Pos. Servo: %oS"
#define UI_TEXT_IGNORE_M106_FR      "Ignorer M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_FR 		"Cliquez pour"
#define UI_TEXT_WIZ_REHEAT2_FR 		"Rechauffer Extrud."
#define UI_TEXT_WIZ_WAITTEMP1_FR 	"Attendez Temp."
#define UI_TEXT_WIZ_WAITTEMP2_FR "cibles ..."
#define UI_TEXT_EXTRUDER_JAM_FR "Stockage d'Extrusion"
#define UI_TEXT_STANDBY_FR "Standby"
#define UI_TEXT_BED_COATING_FR "Revetement de Lit"
#define UI_TEXT_BED_COATING_SET1_FR "Revetement de Lit:"
#define UI_TEXT_BED_COATING_SET2_FR ""
#define UI_TEXT_NOCOATING_FR "Aucun Revetement"
#define UI_TEXT_BUILDTAK_FR "BuildTak"
#define UI_TEXT_KAPTON_FR "Kapton"
#define UI_TEXT_BLUETAPE_FR "Blue Tape"
#define UI_TEXT_PETTAPE_FR "Ruban vert PET"
#define UI_TEXT_GLUESTICK_FR "Baton de Colle"
#define UI_TEXT_CUSTOM_FR "Personnel"
#define UI_TEXT_COATING_CUSTOM_FR "Epaisseur:%BCmm"
#define UI_TEXT_LANGUAGE_FR "Langue"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_FR "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_FR "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_FR "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_FR "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_FR "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_FR "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_FR "Copies: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_FR "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_FR "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_FR "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_FR "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_FR cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_FR "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_FR "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_FR "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_FR "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_FR "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_FR "%Uf m"
#define UI_TEXT_METER_PRINTED_FR "%Uf m " UI_TEXT_PRINTED_FR
#define UI_TEXT_STATUS_FR "%os"
#define UI_TEXT_EMPTY_FR ""
#define UI_TEXT_TEMP_SET_FR cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_FR cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_FR " %BCmm"
#define UI_TEXT_EXTR3_TEMP_FR "Temp. 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_FR "Temp. 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_FR "Temp. 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_FR "Extrudeuse 4 Off"
#define UI_TEXT_EXTR4_OFF_FR "Extrudeuse 5 Off"
#define UI_TEXT_EXTR5_OFF_FR "Extrudeuse 6 Off"
#define UI_TEXT_EXTR3_SELECT_FR "%X3 Select. Extr. 4"
#define UI_TEXT_EXTR4_SELECT_FR "%X4 Select. Extr. 5"
#define UI_TEXT_EXTR5_SELECT_FR "%X5 Select. Extr. 6"
#define UI_TEXT_DITTO_0_FR "%D0 Aucune Copie"
#define UI_TEXT_DITTO_1_FR "%D1 1 Copie"
#define UI_TEXT_DITTO_2_FR "%D2 2 Copies"
#define UI_TEXT_DITTO_3_FR "%D3 3 Copies"
#define UI_TEXT_ZPROBE_HEIGHT_FR "Hauteur Z-Sonde:%zh"

#define UI_TEXT_OFFSETS_FR "Set print offsets"
#define UI_TEXT_X_OFFSET_FR "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_FR "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_FR "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_FR "Couche %Pl/%PL"
#define UI_TEXT_PROGRESS_FR "%Pp%%%"
#define UI_TEXT_PRINTNAME_FR "%Pn"

#define UI_TEXT_SETUP_FR "Reglages"
#define UI_TEXT_MEASURE_DISTORTION_FR "Mesure z-distorsion"
#define UI_TEXT_DISTORTION_CORR_FR "Distorsion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_FR   "Vitesse Fan 2:%FS%%%"
#define UI_TEXT_CANCEL_FR "Annule"
#define UI_TEXT_PLEASE_WAIT_FR "*** Patientez ***"
#define UI_TEXT_CLEARBED1_FR "Assurez-vous que"
#define UI_TEXT_CLEARBED2_FR "le lit chauffant"
#define UI_TEXT_CLEARBED3_FR "soit degage"
#define UI_TEXT_NOTIFICATION_FR "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_FR "Defaut Sonde Temp."
#define UI_TEXT_HEATER_DECOUPLED_FR "Chauffage decouple"
#define UI_TEXT_SLIPPING_FR "Filament glissant"
#define UI_TEXT_LEVELING_ERROR_FR "Nivellement Erreur"
#define UI_TEXT_OK_FR "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_FR "Calibrage Lit"
#define UI_TEXT_CALIBRATION_ERROR_FR "Calibrage Erreur"
#define UI_TEXT_AUTOLEVEL_BED_FR "Autolevel Lit"
#define UI_TEXT_HOMING_FR "Prise d'Origine ..."
#define UI_TEXT_PREHEAT_TEMPS_FR "Prechauffage Temp."
#define UI_TEXT_PREHEAT_E0_FR "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_FR "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_FR "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_FR "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_FR "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_FR "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_FR "Lit    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_FR "Mes. Hauteur Sonde"
#define UI_TEXT_CUR_TEMP_FR "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_FR "Pos. Reel Z:%W0mm"
#define UI_TEXT_CONTINUE_FR "Continue"
#define UI_TEXT_CLOSE_FR "Ferme"
#define UI_TEXT_EXTR_ZOFF_FR "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_FR "Mesure ..."
#define UI_TEXT_Z_PROBE_FR "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_FR "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_FR "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_FR "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_FR "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_FR "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_FR "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_FR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_FR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_FR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_FR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_FR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_FR UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_FR UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_FR UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_FR UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_FR UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_FR UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_FR UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_FR UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_FR UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_FR UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_FR UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_FR UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_FR UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_FR UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_FR UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_FR UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_FR UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_FR UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_FR UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_FR UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_FR UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_FR UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_FR UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_FR UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_FR UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_FR UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_FR UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_FR UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_FR UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_FR UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_FR UI_TEXT_WIZ_AC_LOST_43_TEXT


// *************** Czech translation ****************
// ***************      By Majkl     ****************
// version: 2014/08/27


#define UI_TEXT_ON_CZ               "Zap"
#define UI_TEXT_OFF_CZ              "Vyp"
#define UI_TEXT_NA_CZ               "neni" // Output for not available
#define UI_TEXT_YES_CZ              "Ano"
#define UI_TEXT_NO_CZ               "Ne"
#define UI_TEXT_PRINT_POS_CZ        "Tisknu..."
#define UI_TEXT_PRINTING_CZ         "Tisknu"
#define UI_TEXT_IDLE_CZ             "V klidu"
#define UI_TEXT_NOSDCARD_CZ         "Neni SD karta"
#define UI_TEXT_ERROR_CZ            "**** CHYBA ****"
#define UI_TEXT_BACK_CZ             "Zpet \001"
#define UI_TEXT_QUICK_SETTINGS_CZ   "Control" //"Zakladni nastaveni"
#define UI_TEXT_ERRORMSG_CZ         "%oe"
#define UI_TEXT_CONFIGURATION_CZ    "Nastaveni"
#define UI_TEXT_POSITION_CZ         "Pozice"
#define UI_TEXT_EXTRUDER_CZ         "Extruder"
#define UI_TEXT_SD_CARD_CZ          "SD karta"
#define UI_TEXT_DEBUGGING_CZ        "Debug"
#define UI_TEXT_HOME_DELTA_CZ       "Home delta"
#define UI_TEXT_HOME_ALL_CZ         "Home vsech"
#define UI_TEXT_HOME_X_CZ           "Home X"
#define UI_TEXT_HOME_Y_CZ           "Home Y"
#define UI_TEXT_HOME_Z_CZ           "Home Z"
#define UI_TEXT_PREHEAT_SINGLE_CZ   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_CZ      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_CZ     "Svetla:%lo"
#define UI_TEXT_COOLDOWN_CZ         "Zchladit"
#define UI_TEXT_SET_TO_ORIGIN_CZ    "Nastavit pocatek"
#define UI_TEXT_DISABLE_STEPPER_CZ  "Vypnout motory"
#define UI_TEXT_X_POSITION_CZ       "X pozice"
#define UI_TEXT_X_POS_FAST_CZ       "X rychle"
#define UI_TEXT_Y_POSITION_CZ       "Y pozice"
#define UI_TEXT_Y_POS_FAST_CZ       "Y rychle"
#define UI_TEXT_Z_POSITION_CZ       "Z pozice"
#define UI_TEXT_Z_POS_FAST_CZ       "Z rychle"
#define UI_TEXT_E_POSITION_CZ       "Pozice extruderu"
#define UI_TEXT_BED_TEMP_CZ         "Teplota desky: %Eb\002C"
#define UI_TEXT_EXTR0_TEMP_CZ       "Teplota 1:%e0/%E0\002C"
#define UI_TEXT_EXTR1_TEMP_CZ       "Teplota 2:%e1/%E1\002C"
#define UI_TEXT_EXTR2_TEMP_CZ       "Teplota 3:%e2/%E2\002C"
#define UI_TEXT_EXTR0_OFF_CZ        "Extruder 1 vyp."
#define UI_TEXT_EXTR1_OFF_CZ        "Extruder 2 vyp."
#define UI_TEXT_EXTR2_OFF_CZ        "Extruder 3 vyp."
#define UI_TEXT_EXTR0_SELECT_CZ     "%X0 Zvolit Extr. 1"
#define UI_TEXT_EXTR1_SELECT_CZ     "%X1 Zvolit Extr. 2"
#define UI_TEXT_EXTR2_SELECT_CZ     "%X2 Zvolit Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_CZ      "Nastavit pocatek"
#define UI_TEXT_PRINT_X_CZ          "Tisk X:%ax"
#define UI_TEXT_PRINT_Y_CZ          "Tisk Y:%ay"
#define UI_TEXT_PRINT_Z_CZ          "Tisk Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_CZ    "Tisk:%az"
#define UI_TEXT_MOVE_X_CZ           "Posun X:%aX"
#define UI_TEXT_MOVE_Y_CZ           "Posun Y:%aY"
#define UI_TEXT_MOVE_Z_CZ           "Posun Z:%aZ"
#define UI_TEXT_MOVE_Z_DELTA_CZ     "Posun:%aZ"
#define UI_TEXT_JERK_CZ             "Jerk:%aj"
#define UI_TEXT_ZJERK_CZ            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_CZ     "Akcelerace"
#define UI_TEXT_STORE_TO_EEPROM_CZ  "Ulozit do EEPROM"
#define UI_TEXT_LOAD_EEPROM_CZ      "Nahrat z EEPROM"
#define UI_TEXT_DBG_ECHO_CZ         "Echo   :%do"
#define UI_TEXT_DBG_INFO_CZ         "Info   :%di"
#define UI_TEXT_DBG_ERROR_CZ        "Chyby  :%de"
#define UI_TEXT_DBG_DRYRUN_CZ       "Beh nanecisto:%dd"
#define UI_TEXT_DBG_ENDSTOP_CZ      "EndStop:%dp"
#define UI_TEXT_OPS_OFF_CZ          "%O0 OPS Vypnuto"
#define UI_TEXT_OPS_CLASSIC_CZ      "%O1 OPS Klasicke"
#define UI_TEXT_OPS_FAST_CZ         "%O2 OPS Rychle"
#define UI_TEXT_OPS_RETRACT_CZ      "Retrakce :%Or"
#define UI_TEXT_OPS_BACKSLASH_CZ    "Vule. :%Ob"
#define UI_TEXT_OPS_MINDIST_CZ      "Min.vzd,:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_CZ   "Posunuti po:%Oa"
#define UI_TEXT_ANTI_OOZE_CZ        "Proti kapani"
#define UI_TEXT_PRINT_FILE_CZ       "Tisknout soubor"
#define UI_TEXT_PAUSE_PRINT_CZ      "Pozastavit tisk"
#define UI_TEXT_CONTINUE_PRINT_CZ   "Pokracovani tisku"
#define UI_TEXT_UNMOUNT_CARD_CZ     "Odpojit kartu"
#define UI_TEXT_MOUNT_CARD_CZ       "Pripojit kartu"
#define UI_TEXT_DELETE_FILE_CZ      "Smazat soubor"
#define UI_TEXT_FEEDRATE_CZ         "Rychlost"
#define UI_TEXT_FEED_MAX_X_CZ       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_CZ       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_CZ       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_CZ "Max:%fz"
#define UI_TEXT_FEED_HOME_X_CZ      "Home X:%fX"
#define UI_TEXT_FEED_HOME_Y_CZ      "Home Y:%fY"
#define UI_TEXT_FEED_HOME_Z_CZ      "Home Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_CZ "Home:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_CZ "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_CZ "Min koncak:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_CZ "Max koncak:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_CZ ""
#define UI_TEXT_ACTION_YPOSITION4A_CZ "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_CZ "Min koncak:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_CZ "Max koncak:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_CZ ""
#define UI_TEXT_ACTION_ZPOSITION4A_CZ "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_CZ "Min koncak:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_CZ "Max koncak:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_CZ ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_CZ "Min koncak:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_CZ "Max koncak:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_CZ "Min koncak:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_CZ "Max koncak:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_CZ "Min koncak:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_CZ "Max koncak:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_CZ ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_CZ "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_CZ "1 kliknuti = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_CZ "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_CZ "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_CZ "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_CZ "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_CZ "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_CZ "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_CZ "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_CZ "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_CZ "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_CZ          "Rychlost vetraku"
#define UI_TEXT_ACTION_FANSPEED_CZ   "Aktualni rychlost:%Fs%%%"
#define UI_TEXT_FAN_OFF_CZ           "Vypnout"
#define UI_TEXT_FAN_25_CZ            "Vetrak na 25%%%"
#define UI_TEXT_FAN_50_CZ            "Vetrak na 50%%%"
#define UI_TEXT_FAN_75_CZ            "Vetrak na 75%%%"
#define UI_TEXT_FAN_FULL_CZ          "Vetrak na plno"
#define UI_TEXT_STEPPER_INACTIVE_CZ  "Neaktivni motory"
#define UI_TEXT_STEPPER_INACTIVE2A_CZ "Vypnout po :%i m"
#define UI_TEXT_STEPPER_INACTIVE2B_CZ "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_CZ    "Max. neaktivni"
#define UI_TEXT_POWER_INACTIVE2A_CZ   "Vypnout po: %i m"
#define UI_TEXT_POWER_INACTIVE2B_CZ   "[min] 0=Off"
#define UI_TEXT_GENERAL_CZ           "Zakladni"
#define UI_TEXT_BAUDRATE_CZ          "Rychlost:%oc"
#define UI_TEXT_EXTR_STEPS_CZ        "kroku/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_CZ   "Start FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_CZ     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_CZ        "Zrychl.:%XA"
#define UI_TEXT_EXTR_WATCH_CZ        "Stab.cas:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_CZ    "Rozsir. lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_CZ    "Rozsir. quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_CZ      "Control:%Xh"
#define UI_TEXT_EXTR_PGAIN_CZ        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_CZ     "Mrtva doba:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_CZ      "Ovladani PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_CZ        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_CZ        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_CZ         "Drive Min:%Xm"
#define UI_TEXT_EXTR_DMAX_CZ         "Drive Max:%XM"
#define UI_TEXT_EXTR_PMAX_CZ         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_CZ         "X-Offset:%Xx"
#define UI_TEXT_EXTR_YOFF_CZ         "Y-Offset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_CZ "BangBang"
#define UI_TEXT_STRING_HM_PID_CZ     "PID"
#define UI_TEXT_STRING_ACTION_CZ     "Akce:%la"
#define UI_TEXT_HEATING_EXTRUDER_CZ  "Ohrivani extruderu"
#define UI_TEXT_HEATING_BED_CZ       "Ohrivani desky"
#define UI_TEXT_KILLED_CZ            "Zastaveno"
#define UI_TEXT_STEPPER_DISABLED_CZ  "Motor vypnut"
#define UI_TEXT_EEPROM_STOREDA_CZ     "Konfigurace"
#define UI_TEXT_EEPROM_STOREDB_CZ     "Ulozena v EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_CZ     "Konfigurace"
#define UI_TEXT_EEPROM_LOADEDB_CZ     "Nactena z EEPROM"
#define UI_TEXT_UPLOADING_CZ         "Nahravam..."
#define UI_TEXT_PAGE_BUFFER_CZ       "Buffer:%oB"
#define UI_TEXT_PAGE_EXTRUDER_CZ     " E:%ec/%Ec\002C\176%oC"
#define UI_TEXT_PAGE_EXTRUDER1_CZ     "E1:%e0/%E0\002C\176%o0"
#define UI_TEXT_PAGE_EXTRUDER2_CZ     "E2:%e1/%E1\002C\176%o1"
#define UI_TEXT_PAGE_EXTRUDER3_CZ     "E3:%e2/%E2\002C\176%o2"
#define UI_TEXT_PAGE_BED_CZ          " B:%eb/%Eb\002C\176%ob"
#define UI_TEXT_SPEED_MULTIPLY_CZ    "Rychlost:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_CZ     "Flow nasobit:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_CZ  "Ukazat merení"
#define UI_TEXT_RESET_MEASUREMENT_CZ "Obnovit mereni"
#define UI_TEXT_SET_MEASURED_ORIGIN_CZ "Set Z=0"
#define UI_TEXT_ZCALIB_CZ             "Z kalib."
#define UI_TEXT_SET_P1_CZ            "Set P1"
#define UI_TEXT_SET_P2_CZ            "Set P2"
#define UI_TEXT_SET_P3_CZ            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_CZ "Vypocitat leveling"
#define UI_TEXT_LEVEL_CZ             "Level delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_CZ  "Tepl. cekani%XT\002C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_CZ "Jedn. cekani:%XUmm"
#define UI_TEXT_SD_REMOVED_CZ       "SD karta vyjmuta."
#define UI_TEXT_SD_INSERTED_CZ      "Vlozena SD karta"
#define UI_TEXT_PRINTER_READY_CZ    "Tiskarna OK"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_CZ   " dnu "
#define UI_TEXT_PRINTTIME_HOURS_CZ  ":"
#define UI_TEXT_PRINTTIME_MINUTES_CZ ""
#define UI_TEXT_PRINT_TIME_CZ     "Cas tisku"
#define UI_TEXT_PRINT_FILAMENT_CZ "Filament tisteny"
#define UI_TEXT_PRINTED_CZ           "Protisknuto"
#define UI_TEXT_POWER_CZ            "Zapnout ATX zdroj"
#define UI_TEXT_STRING_HM_DEADTIME_CZ     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_CZ     "SlowBang"
#define UI_TEXT_STOP_PRINT_CZ "Zastavit tisk"
#define UI_TEXT_Z_BABYSTEPPING_CZ "Z babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_CZ "Zmena filament"
#define UI_TEXT_WIZ_CH_FILAMENT1_CZ "Zmena filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_CZ "Otocit se pohybovat"
#define UI_TEXT_WIZ_CH_FILAMENT3_CZ "vlaken nahoru/dolu"
#define UI_TEXT_CLICK_DONE_CZ "Pokr. s cvaknutim"
#define UI_TEXT_AUTOLEVEL_ONOFF_CZ  "Autolevel: %ll"
#define UI_TEXT_SERVOPOS_CZ "Servo pozice: %oS"
#define UI_TEXT_IGNORE_M106_CZ      "Ignorovat M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_CZ "Klikněte ohrat"
#define UI_TEXT_WIZ_REHEAT2_CZ "extruders."
#define UI_TEXT_WIZ_WAITTEMP1_CZ "Pockejte na cilove"
#define UI_TEXT_WIZ_WAITTEMP2_CZ "teploty ..."
#define UI_TEXT_EXTRUDER_JAM_CZ "Extruder jam"
#define UI_TEXT_STANDBY_CZ "Standby"
#define UI_TEXT_BED_COATING_CZ "Postel nater"
#define UI_TEXT_BED_COATING_SET1_CZ "Postel nater:"
#define UI_TEXT_BED_COATING_SET2_CZ ""
#define UI_TEXT_NOCOATING_CZ "No nater"
#define UI_TEXT_BUILDTAK_CZ "BuildTak"
#define UI_TEXT_KAPTON_CZ "Kapton"
#define UI_TEXT_BLUETAPE_CZ "Modra mask. paska"
#define UI_TEXT_PETTAPE_CZ "Zelena PET paska"
#define UI_TEXT_GLUESTICK_CZ "Lepici tycinka"
#define UI_TEXT_CUSTOM_CZ "Vlastni"
#define UI_TEXT_COATING_CUSTOM_CZ "Vlastni:%BCmm"
#define UI_TEXT_LANGUAGE_CZ "Jazyk"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_CZ "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_CZ "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_CZ "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_CZ "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_CZ "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_CZ "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_CZ "Kopii: %ed     Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_CZ "Flow:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_CZ "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_CZ "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_CZ "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_CZ cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_CZ "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_CZ "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_CZ "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_CZ "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_CZ "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_CZ "%Uf m"
#define UI_TEXT_METER_PRINTED_CZ "%Uf m " UI_TEXT_PRINTED_CZ
#define UI_TEXT_STATUS_CZ "%os"
#define UI_TEXT_EMPTY_CZ ""
#define UI_TEXT_TEMP_SET_CZ cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_CZ cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_CZ " %BCmm"
#define UI_TEXT_EXTR3_TEMP_CZ "Teplota 4:%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_CZ "Teplota 5:%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_CZ "Teplota 6:%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_CZ "Extruder 4 vyp."
#define UI_TEXT_EXTR4_OFF_CZ "Extruder 5 vyp."
#define UI_TEXT_EXTR5_OFF_CZ "Extruder 6 vyp."
#define UI_TEXT_EXTR3_SELECT_CZ "%X3 Zvolit Extr. 4"
#define UI_TEXT_EXTR4_SELECT_CZ "%X4 Zvolit Extr. 5"
#define UI_TEXT_EXTR5_SELECT_CZ "%X5 Zvolit Extr. 6"
#define UI_TEXT_DITTO_0_CZ "%D0 Zadne Kopie"
#define UI_TEXT_DITTO_1_CZ "%D1 1 Kopie"
#define UI_TEXT_DITTO_2_CZ "%D2 2 Kopii"
#define UI_TEXT_DITTO_3_CZ "%D3 3 Kopii"
#define UI_TEXT_ZPROBE_HEIGHT_CZ "Vyska z-test:%zh"

#define UI_TEXT_OFFSETS_CZ "Set print offsets"
#define UI_TEXT_X_OFFSET_CZ "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_CZ "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_CZ "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_CZ "Vrstva %Pl/%PL"
#define UI_TEXT_PROGRESS_CZ "%Pp%%%"
#define UI_TEXT_PRINTNAME_CZ "%Pn"

#define UI_TEXT_SETUP_CZ "Setup"
#define UI_TEXT_MEASURE_DISTORTION_CZ "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_CZ "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_CZ   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_CZ "Cancel"
#define UI_TEXT_PLEASE_WAIT_CZ "*** Please wait ***"
#define UI_TEXT_CLEARBED1_CZ "Make sure the heated"
#define UI_TEXT_CLEARBED2_CZ "bed is clear of any"
#define UI_TEXT_CLEARBED3_CZ "obstructions"
#define UI_TEXT_NOTIFICATION_CZ "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_CZ "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_CZ "Heater decoupled"
#define UI_TEXT_SLIPPING_CZ "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_CZ "Leveling error"
#define UI_TEXT_OK_CZ "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_CZ "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_CZ "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_CZ "Autolevel bed"
#define UI_TEXT_HOMING_CZ "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_CZ "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_CZ "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_CZ "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_CZ "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_CZ "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_CZ "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_CZ "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_CZ "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_CZ "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_CZ "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_CZ "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_CZ "Continue"
#define UI_TEXT_CLOSE_CZ "Close"
#define UI_TEXT_EXTR_ZOFF_CZ "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_CZ "Measuring ..."
#define UI_TEXT_Z_PROBE_CZ "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_CZ "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_CZ "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_CZ "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_CZ "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_CZ "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_CZ "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_CZ USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_CZ USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_CZ USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_CZ USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_CZ USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_CZ UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_CZ UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_CZ UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_CZ UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_CZ UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_CZ UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_CZ UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_CZ UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_CZ UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_CZ UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_CZ UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_CZ UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_CZ UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_CZ UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_CZ UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_CZ UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_CZ UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_CZ UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_CZ UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_CZ UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_CZ UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_CZ UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_CZ UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_CZ UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_CZ UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_CZ UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_CZ UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_CZ UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_CZ UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_CZ UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_CZ UI_TEXT_WIZ_AC_LOST_43_TEXT

// *************** Polish translation ****************
// ***************       By MIS       ****************
// version: 2015/01/18

#define UI_TEXT_ON_PL               "Zal"
#define UI_TEXT_OFF_PL              "Wyl"
#define UI_TEXT_NA_PL               "Brak" // Output for not available
#define UI_TEXT_YES_PL              "Tak"
#define UI_TEXT_NO_PL               "Nie"
#define UI_TEXT_PRINT_POS_PL        "Drukowanie..."
#define UI_TEXT_PRINTING_PL         "Drukowanie"
#define UI_TEXT_IDLE_PL             "Wolna"
#define UI_TEXT_NOSDCARD_PL         "Brak karty SD"
#define UI_TEXT_ERROR_PL            "**** BLAD ****"
#define UI_TEXT_BACK_PL             "Powrot " cUP
#define UI_TEXT_QUICK_SETTINGS_PL   "Control" //"Szybkie ustawienia"
#define UI_TEXT_ERRORMSG_PL         "%oe"
#define UI_TEXT_CONFIGURATION_PL    "Konfiguracja"
#define UI_TEXT_POSITION_PL         "Pozycja"
#define UI_TEXT_EXTRUDER_PL         "Ekstruder"
#define UI_TEXT_SD_CARD_PL          "Karta SD"
#define UI_TEXT_DEBUGGING_PL        "Testowanie"
#define UI_TEXT_HOME_DELTA_PL       "Home delta"
#define UI_TEXT_HOME_ALL_PL         "Zeruj wszystkie osie"
#define UI_TEXT_HOME_X_PL           "Zeruj X"
#define UI_TEXT_HOME_Y_PL           "Zeruj Y"
#define UI_TEXT_HOME_Z_PL           "Zeruj Z"
#define UI_TEXT_PREHEAT_SINGLE_PL   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_PL      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_PL     "Oswietlenie :%lo"
#define UI_TEXT_COOLDOWN_PL         "Chlodzenie"
#define UI_TEXT_SET_TO_ORIGIN_PL    "Ustaw jako zero"
#define UI_TEXT_DISABLE_STEPPER_PL  "Wylacz silniki"
#define UI_TEXT_X_POSITION_PL       "Pozycja X"
#define UI_TEXT_X_POS_FAST_PL       "Pozycja X Szybko"
#define UI_TEXT_Y_POSITION_PL       "Pozycja Y"
#define UI_TEXT_Y_POS_FAST_PL       "Pozycja Y Szybko"
#define UI_TEXT_Z_POSITION_PL       "Pozycja Z"
#define UI_TEXT_Z_POS_FAST_PL       "Pozycja Z Szybko"
#define UI_TEXT_E_POSITION_PL       "Pozycja Extrudera"
#define UI_TEXT_BED_TEMP_PL         "Temp.Stolu:%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_PL       "Temp.Ex1:%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_PL       "Temp.Ex2:%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_PL       "Temp.Ex3:%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_PL        "Wyl. Extruder 1"
#define UI_TEXT_EXTR1_OFF_PL        "Wyl. Extruder 2"
#define UI_TEXT_EXTR2_OFF_PL        "Wyl. Extruder 3"
#define UI_TEXT_EXTR0_SELECT_PL     "%X0 Wybierz Extr. 1"
#define UI_TEXT_EXTR1_SELECT_PL     "%X1 Wybierz Extr. 2"
#define UI_TEXT_EXTR2_SELECT_PL     "%X2 Wybierz Extr. 3"
#define UI_TEXT_EXTR_ORIGIN_PL      "Ustaw jako zero"
#define UI_TEXT_PRINT_X_PL          "Drukow. X   :%ax"
#define UI_TEXT_PRINT_Y_PL          "Drukow. Y   :%ay"
#define UI_TEXT_PRINT_Z_PL          "Drukow. Z   :%az"
#define UI_TEXT_PRINT_Z_DELTA_PL    "Drukowania  :%az"
#define UI_TEXT_MOVE_X_PL           "Przesuw. X  :%aX"
#define UI_TEXT_MOVE_Y_PL           "Przesuw. Y  :%aY"
#define UI_TEXT_MOVE_Z_PL           "Przesuw. Z  :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_PL     "Przesuwania :%aZ"
#define UI_TEXT_JERK_PL             "Jerk:%aj"
#define UI_TEXT_ZJERK_PL            "Z-Jerk:%aJ"
#define UI_TEXT_ACCELERATION_PL     "Przyspieszenie"
#define UI_TEXT_STORE_TO_EEPROM_PL  "Zapisz do EEPROM"
#define UI_TEXT_LOAD_EEPROM_PL      "Odczyt z EEPROM"
#define UI_TEXT_DBG_ECHO_PL         "Echo        : %do"
#define UI_TEXT_DBG_INFO_PL         "Informacje  : %di"
#define UI_TEXT_DBG_ERROR_PL        "Bledy       : %de"
#define UI_TEXT_DBG_DRYRUN_PL       "Bez wydruku : %dd"
#define UI_TEXT_DBG_ENDSTOP_PL      "EndStop     : %dp"
#define UI_TEXT_OPS_OFF_PL          "%O0 OPS Off"
#define UI_TEXT_OPS_CLASSIC_PL      "%O1 OPS Classic"
#define UI_TEXT_OPS_FAST_PL         "%O2 OPS Fast"
#define UI_TEXT_OPS_RETRACT_PL      "Retract :%Or"
#define UI_TEXT_OPS_BACKSLASH_PL    "Backsl. :%Ob"
#define UI_TEXT_OPS_MINDIST_PL      "Min.dist:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_PL   "Przesun po:%Oa"
#define UI_TEXT_ANTI_OOZE_PL        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_PL       "Drukuj z pliku"
#define UI_TEXT_PAUSE_PRINT_PL      "Wstrzymaj druk"
#define UI_TEXT_CONTINUE_PRINT_PL   "Wznow drukow."
#define UI_TEXT_UNMOUNT_CARD_PL     "Odmontuj karte"
#define UI_TEXT_MOUNT_CARD_PL       "Zamontuj karte"
#define UI_TEXT_DELETE_FILE_PL      "Usun plik"
#define UI_TEXT_FEEDRATE_PL         "Szybkosc"
#define UI_TEXT_FEED_MAX_X_PL       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_PL       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_PL       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_PL "Max:%fz"
#define UI_TEXT_FEED_HOME_X_PL      "Powrot X:%fX"
#define UI_TEXT_FEED_HOME_Y_PL      "Powrot Y:%fY"
#define UI_TEXT_FEED_HOME_Z_PL      "Powrot Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_PL "Powrot:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_PL "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_PL "Krancowka MIN: %sx"
#define UI_TEXT_ACTION_XPOSITION4C_PL "Krancowka MAX: %sX"
#define UI_TEXT_ACTION_XPOSITION4D_PL ""
#define UI_TEXT_ACTION_YPOSITION4A_PL "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_PL "Krancowka MIN: %sy"
#define UI_TEXT_ACTION_YPOSITION4C_PL "Krancowka Max: %sY"
#define UI_TEXT_ACTION_YPOSITION4D_PL ""
#define UI_TEXT_ACTION_ZPOSITION4A_PL "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_PL "Krancowka MIN: %sz"
#define UI_TEXT_ACTION_ZPOSITION4C_PL "Krancowka Max: %sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_PL ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_PL "Krancowka MIN: %sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_PL "Krancowka MAX: %sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_PL "Krancowka MIN: %sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_PL "Krancowka MAX: %sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_PL "Krancowka MIN: %sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_PL "Krancowka MAX: %sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_PL ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_PL "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_PL "Jednostka 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_PL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_PL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_PL "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_PL "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_PL "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_PL "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_PL "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_PL "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_PL "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_PL          "Obroty wiatraka"
#define UI_TEXT_ACTION_FANSPEED_PL   "Obroty wiatraka:%Fs%%%"
#define UI_TEXT_FAN_OFF_PL           "Wylacz wiatrak"
#define UI_TEXT_FAN_25_PL            "Ustaw na 25%%%"
#define UI_TEXT_FAN_50_PL            "Ustaw na 50%%%"
#define UI_TEXT_FAN_75_PL            "Ustaw na 75%%%"
#define UI_TEXT_FAN_FULL_PL          "Ustaw na 100%%%"
#define UI_TEXT_STEPPER_INACTIVE_PL  "Wylacz silniki po"
#define UI_TEXT_STEPPER_INACTIVE2A_PL "Wylacz po: %is min."
#define UI_TEXT_STEPPER_INACTIVE2B_PL "0=Nie wylaczaj"
#define UI_TEXT_POWER_INACTIVE_PL    "Wylacz zasil. po"
#define UI_TEXT_POWER_INACTIVE2A_PL   "Wylacz po: %ip min."
#define UI_TEXT_POWER_INACTIVE2B_PL   "0=Nie wylaczaj"
#define UI_TEXT_GENERAL_PL           "Ustawienia glowne"
#define UI_TEXT_BAUDRATE_PL          "Szybkosc USB:%oc"
#define UI_TEXT_EXTR_STEPS_PL        "Kroki/mm : %Se"
#define UI_TEXT_EXTR_START_FEED_PL   "Poczatkowa SZ:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_PL     "Max Szybkosc :%XF"
#define UI_TEXT_EXTR_ACCEL_PL        "Przyspiesz.  :%XA"
#define UI_TEXT_EXTR_WATCH_PL        "Czas stabil. :%Xws"
#define UI_TEXT_EXTR_ADVANCE_L_PL    "Advance lin  :%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_PL    "Advance quad :%Xa"
#define UI_TEXT_EXTR_MANAGER_PL      "Regulator:%Xh"
#define UI_TEXT_EXTR_DEADTIME_PL     "Deadtime :%Xp"
#define UI_TEXT_EXTR_DMAX_DT_PL      "Max. PWM :%XD"
#define UI_TEXT_EXTR_PGAIN_PL        "PID P    :%Xp"
#define UI_TEXT_EXTR_IGAIN_PL        "PID I    :%Xi"
#define UI_TEXT_EXTR_DGAIN_PL        "PID D    :%Xd"
#define UI_TEXT_EXTR_DMIN_PL         "Min I war: %Xm"
#define UI_TEXT_EXTR_DMAX_PL         "Max I war: %XM"
#define UI_TEXT_EXTR_PMAX_PL         "Max ster.: %XD"
#define UI_TEXT_EXTR_XOFF_PL         "Ofset X  :%Xx"
#define UI_TEXT_EXTR_YOFF_PL         "Ofset Y  :%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_PL "Dwustanowy"
#define UI_TEXT_STRING_HM_PID_PL     "PID"
#define UI_TEXT_STRING_ACTION_PL     "Akcja:%la"
#define UI_TEXT_HEATING_EXTRUDER_PL  "Grzanie glowicy"
#define UI_TEXT_HEATING_BED_PL       "Grzanie stolu"
#define UI_TEXT_KILLED_PL            "Zatrzymany"
#define UI_TEXT_STEPPER_DISABLED_PL  "Silniki wylaczone"
#define UI_TEXT_EEPROM_STOREDA_PL     "Konfiguracja"
#define UI_TEXT_EEPROM_STOREDB_PL     "zapisana do EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_PL     "Konfiguracja"
#define UI_TEXT_EEPROM_LOADEDB_PL     "odczytana z EEPROM"
#define UI_TEXT_UPLOADING_PL         "Ladowanie..."
#define UI_TEXT_PAGE_BUFFER_PL       "Bufor:%oB"
#define UI_TEXT_PAGE_EXTRUDER_PL     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_PL     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_PL     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_PL     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_PL          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_PL    "Szybkosc druku :%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_PL     "Przeplyw filam.:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_PL  "Pokaz pomiar"
#define UI_TEXT_RESET_MEASUREMENT_PL "Zeruj pomiar"
#define UI_TEXT_SET_MEASURED_ORIGIN_PL "Ustaw Z=0"
#define UI_TEXT_ZCALIB_PL             "Z kalib."
#define UI_TEXT_SET_P1_PL            "Ustaw P1"
#define UI_TEXT_SET_P2_PL            "Ustaw P2"
#define UI_TEXT_SET_P3_PL            "Ustaw P3"
#define UI_TEXT_CALCULATE_LEVELING_PL "Oblicz poziomowania"
#define UI_TEXT_LEVEL_PL             "Poziom delty"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_PL  "MinTemp wysuwu:%XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_PL "Wysuw rozgrzew:%XUmm"
#define UI_TEXT_SD_REMOVED_PL       "Karta SD wyjeta"
#define UI_TEXT_SD_INSERTED_PL      "Karta SD wlozona"
#define UI_TEXT_PRINTER_READY_PL    "Drukarka gotowa"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_PL   " dni, "
#define UI_TEXT_PRINTTIME_HOURS_PL  ":"
#define UI_TEXT_PRINTTIME_MINUTES_PL " h."
#define UI_TEXT_PRINT_TIME_PL     "Czas pracy"
#define UI_TEXT_PRINT_FILAMENT_PL "Zuzyto filamentu"
#define UI_TEXT_PRINTED_PL           "drukowane"
#define UI_TEXT_POWER_PL            "Wl/Wyl zasilanie"
#define UI_TEXT_STRING_HM_DEADTIME_PL     "Dead Time"
#define UI_TEXT_STRING_HM_SLOWBANG_PL     "SlowBang"
#define UI_TEXT_STOP_PRINT_PL       "Przerwij wydruk"
#define UI_TEXT_Z_BABYSTEPPING_PL   "Doreguluj Z:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_PL  "Zmiana filamentu"
#define UI_TEXT_WIZ_CH_FILAMENT1_PL "Zmien filament"
#define UI_TEXT_WIZ_CH_FILAMENT2_PL "Krec aby przesuwac"
#define UI_TEXT_WIZ_CH_FILAMENT3_PL "filament w gore/dol"
#define UI_TEXT_CLICK_DONE_PL       "Kliknij jak gotowe"
#define UI_TEXT_AUTOLEVEL_ONOFF_PL  "Autopoziomow.: %ll"
#define UI_TEXT_SERVOPOS_PL         "Pozycja Serwa: %oS"
#define UI_TEXT_IGNORE_M106_PL      "Ignoruj kom. M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_PL "Kliknij aby znów"
#define UI_TEXT_WIZ_REHEAT2_PL "rozgrzac ekstrudery"
#define UI_TEXT_WIZ_WAITTEMP1_PL "Poczekaj na zadane"
#define UI_TEXT_WIZ_WAITTEMP2_PL "temperatury ..."
#define UI_TEXT_EXTRUDER_JAM_PL "Ekstruder zablokowany"
#define UI_TEXT_STANDBY_PL "Standby"
#define UI_TEXT_BED_COATING_PL "Pokrycie stolu"
#define UI_TEXT_BED_COATING_SET1_PL "Wybierz material"
#define UI_TEXT_BED_COATING_SET2_PL "stolu:"
#define UI_TEXT_NOCOATING_PL "Czysty stol"
#define UI_TEXT_BUILDTAK_PL "BuildTak"
#define UI_TEXT_KAPTON_PL "Kapton"
#define UI_TEXT_BLUETAPE_PL "Nieb. tasma mask."
#define UI_TEXT_PETTAPE_PL "Zielona tasma PET"
#define UI_TEXT_GLUESTICK_PL "Klej w sztyfcie"
#define UI_TEXT_CUSTOM_PL "Inna"
#define UI_TEXT_COATING_CUSTOM_PL "Inna grubosc:%BCmm"
#define UI_TEXT_LANGUAGE_PL "Jezyk"
#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_PL "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_PL "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_PL "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_PL "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_PL "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_PL "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_PL "Kopie: %ed     Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_PL "Przep:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_PL "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_PL "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_PL "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_PL cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_PL "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_PL "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_PL "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_PL "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_PL "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_PL "%Uf m"
#define UI_TEXT_METER_PRINTED_PL "%Uf m " UI_TEXT_PRINTED_PL
#define UI_TEXT_STATUS_PL "%os"
#define UI_TEXT_EMPTY_PL ""
#define UI_TEXT_TEMP_SET_PL cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_PL cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_PL " %BCmm"
#define UI_TEXT_EXTR3_TEMP_PL "Temp.Ex4:%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_PL "Temp.Ex5:%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_PL "Temp.Ex6:%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_PL "Wyl. Extruder 4"
#define UI_TEXT_EXTR4_OFF_PL "Wyl. Extruder 5"
#define UI_TEXT_EXTR5_OFF_PL "Wyl. Extruder 6"
#define UI_TEXT_EXTR3_SELECT_PL "%X3 Wybierz Extr. 4"
#define UI_TEXT_EXTR4_SELECT_PL "%X4 Wybierz Extr. 5"
#define UI_TEXT_EXTR5_SELECT_PL "%X5 Wybierz Extr. 6"
#define UI_TEXT_DITTO_0_PL "%D0 Nie kopiuj"
#define UI_TEXT_DITTO_1_PL "%D1 1 Kopia"
#define UI_TEXT_DITTO_2_PL "%D2 2 Kopie"
#define UI_TEXT_DITTO_3_PL "%D3 3 Kopie"
#define UI_TEXT_ZPROBE_HEIGHT_PL "Wys. Sondy Z:%zh"

#define UI_TEXT_OFFSETS_PL  "Polozenie wydruku"
#define UI_TEXT_X_OFFSET_PL "Przesun w X : %T0mm"
#define UI_TEXT_Y_OFFSET_PL "Przesun w Y : %T1mm"
#define UI_TEXT_Z_OFFSET_PL "Przesun w Z :%T2mm"
#define UI_TEXT_LAYER_PL "Warstwa %Pl/%PL"
#define UI_TEXT_PROGRESS_PL "%Pp%%%"
#define UI_TEXT_PRINTNAME_PL "%Pn"

#define UI_TEXT_SETUP_PL "Setup"
#define UI_TEXT_MEASURE_DISTORTION_PL "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_PL "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_PL   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_PL "Cancel"
#define UI_TEXT_PLEASE_WAIT_PL "*** Please wait ***"
#define UI_TEXT_CLEARBED1_PL "Make sure the heated"
#define UI_TEXT_CLEARBED2_PL "bed is clear of any"
#define UI_TEXT_CLEARBED3_PL "obstructions"
#define UI_TEXT_NOTIFICATION_PL "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_PL "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_PL "Heater decoupled"
#define UI_TEXT_SLIPPING_PL "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_PL "Leveling error"
#define UI_TEXT_OK_PL "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_PL "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_PL "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_PL "Autolevel bed"
#define UI_TEXT_HOMING_PL "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_PL "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_PL "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_PL "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_PL "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_PL "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_PL "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_PL "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_PL "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_PL "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_PL "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_PL "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_PL "Continue"
#define UI_TEXT_CLOSE_PL "Close"
#define UI_TEXT_EXTR_ZOFF_PL "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_PL "Measuring ..."
#define UI_TEXT_Z_PROBE_PL "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_PL "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_PL "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_PL "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_PL "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_PL "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_PL "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_PL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_PL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_PL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_PL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_PL USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_PL UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_PL UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_PL UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_PL UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_PL UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_PL UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_PL UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_PL UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_PL UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_PL UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_PL UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_PL UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_PL UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_PL UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_PL UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_PL UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_PL UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_PL UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_PL UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_PL UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_PL UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_PL UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_PL UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_PL UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_PL UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_PL UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_PL UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_PL UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_PL UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_PL UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_PL UI_TEXT_WIZ_AC_LOST_43_TEXT


// Türk

#define UI_TEXT_ON_TR               "Acik"
#define UI_TEXT_OFF_TR              "Kapali"
#define UI_TEXT_NA_TR               "N/A" // Output for not available
#define UI_TEXT_YES_TR              "Evet"
#define UI_TEXT_NO_TR               "Hayir"
#define UI_TEXT_PRINT_POS_TR        "Yaziyor..."
#define UI_TEXT_PRINTING_TR         "Yaziyor"
#define UI_TEXT_IDLE_TR             "Bosta"
#define UI_TEXT_NOSDCARD_TR         "SD Kart Yok"
#define UI_TEXT_ERROR_TR            "**** HATA ****"
#define UI_TEXT_BACK_TR             "Geri " cUP
#define UI_TEXT_QUICK_SETTINGS_TR   "Control" //"Hizli Ayar"
#define UI_TEXT_ERRORMSG_TR         "%oe"
#define UI_TEXT_CONFIGURATION_TR    "Yapilandirma"
#define UI_TEXT_POSITION_TR         "Konum-Hareket"
#define UI_TEXT_EXTRUDER_TR         "Extruder"
#define UI_TEXT_SD_CARD_TR          "SD Kart"
#define UI_TEXT_DEBUGGING_TR        "Debugging"
#define UI_TEXT_HOME_DELTA_TR       "Deltayi Sifr. Gond."
#define UI_TEXT_HOME_ALL_TR         "Hepsini S.Gonder"
#define UI_TEXT_HOME_X_TR           "X S.Gonder"
#define UI_TEXT_HOME_Y_TR           "Y S.Gonder"
#define UI_TEXT_HOME_Z_TR           "Z S.Gonder"
#define UI_TEXT_PREHEAT_SINGLE_TR   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_TR      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_TR     "Isiklar :%lo"
#define UI_TEXT_COOLDOWN_TR         "Soguma"
#define UI_TEXT_SET_TO_ORIGIN_TR    "Orijine ayarla"
#define UI_TEXT_DISABLE_STEPPER_TR  "Motoru Kapat"
#define UI_TEXT_X_POSITION_TR       "X Hareketi"
#define UI_TEXT_X_POS_FAST_TR       "X Hizli Hareketi"
#define UI_TEXT_Y_POSITION_TR       "Y Hareketi"
#define UI_TEXT_Y_POS_FAST_TR       "Y Hizli Hareketi"
#define UI_TEXT_Z_POSITION_TR       "Z Hareketi"
#define UI_TEXT_Z_POS_FAST_TR       "Z Hizli Hareketi"
#define UI_TEXT_E_POSITION_TR       "Hareketi"
#define UI_TEXT_BED_TEMP_TR         "Tabla Sic: %Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_TR       "Sic. 1 : %E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_TR       "Sic. 2 : %E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_TR       "Sic. 3 : %E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_TR        "Extr. 1'i Kapa"
#define UI_TEXT_EXTR1_OFF_TR        "Extr. 2'i Kapa"
#define UI_TEXT_EXTR2_OFF_TR        "Extr. 3'i Kapa"
#define UI_TEXT_EXTR0_SELECT_TR     "%X0 Extr. 1'i Sec"
#define UI_TEXT_EXTR1_SELECT_TR     "%X1 Extr. 2'yi Sec"
#define UI_TEXT_EXTR2_SELECT_TR     "%X2 Extr. 3'u Sec"
#define UI_TEXT_EXTR_ORIGIN_TR      "Origin i Ayarla"
#define UI_TEXT_PRINT_X_TR          "Yazma H. X:%ax"
#define UI_TEXT_PRINT_Y_TR          "Yazma H. Y:%ay"
#define UI_TEXT_PRINT_Z_TR          "Yazma H. Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_TR    "Yazma H.:%az"
#define UI_TEXT_MOVE_X_TR           "Hareket X :%aX"
#define UI_TEXT_MOVE_Y_TR           "Hareket Y :%aY"
#define UI_TEXT_MOVE_Z_TR           "Hareket Z :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_TR     "Hareket :%aZ"
#define UI_TEXT_JERK_TR             "X-Y Jerk :%aj"
#define UI_TEXT_ZJERK_TR            "Z-Jerk :%aJ"
#define UI_TEXT_ACCELERATION_TR     "Ivme"
#define UI_TEXT_STORE_TO_EEPROM_TR  "EEPROM'a kaydet"
#define UI_TEXT_LOAD_EEPROM_TR      "EEPROM'dan cagir"
#define UI_TEXT_DBG_ECHO_TR         "Echo    :%do"
#define UI_TEXT_DBG_INFO_TR         "Bilgi   :%di"
#define UI_TEXT_DBG_ERROR_TR        "Hatalar :%de"
#define UI_TEXT_DBG_DRYRUN_TR       "Bosta Calis:%dd"
#define UI_TEXT_DBG_ENDSTOP_TR      "EndStop :%dp"
#define UI_TEXT_OPS_OFF_TR          "%O0 OPS Kapali"
#define UI_TEXT_OPS_CLASSIC_TR      "%O1 OPS Klasik"
#define UI_TEXT_OPS_FAST_TR         "%O2 OPS Hizli"
#define UI_TEXT_OPS_RETRACT_TR      "Geri Cekl.:%Or"
#define UI_TEXT_OPS_BACKSLASH_TR    "Eksen Bosl.:%Ob"
#define UI_TEXT_OPS_MINDIST_TR      "Min. Mesafe:%Od"
#define UI_TEXT_OPS_MOVE_AFTER_TR   "Move after:%Oa"
#define UI_TEXT_ANTI_OOZE_TR        "Anti Ooze"
#define UI_TEXT_PRINT_FILE_TR       "Dosya Yazdir"
#define UI_TEXT_PAUSE_PRINT_TR      "Baskiyi Duraklat"
#define UI_TEXT_CONTINUE_PRINT_TR   "Baskiya Devam"
#define UI_TEXT_UNMOUNT_CARD_TR     "Karti Cikar"
#define UI_TEXT_MOUNT_CARD_TR       "Karti Bagla"
#define UI_TEXT_DELETE_FILE_TR      "Dosyayi Sil"
#define UI_TEXT_FEEDRATE_TR         "Ilerleme"
#define UI_TEXT_FEED_MAX_X_TR       "Max X:%fx"
#define UI_TEXT_FEED_MAX_Y_TR       "Max Y:%fy"
#define UI_TEXT_FEED_MAX_Z_TR       "Max Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_TR "Max:%fz"
#define UI_TEXT_FEED_HOME_X_TR      "X'i Sif.Gon.Hiz.:%fX"
#define UI_TEXT_FEED_HOME_Y_TR      "Y'yi Sif.Gon.Hiz.:%fY"
#define UI_TEXT_FEED_HOME_Z_TR      "Z'i Sif.Gon.Hiz:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_TR "Delta Sif.Gon.Hiz:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_TR "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_TR "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_TR "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_TR ""
#define UI_TEXT_ACTION_YPOSITION4A_TR "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_TR "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_TR "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_TR ""
#define UI_TEXT_ACTION_ZPOSITION4A_TR "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_TR "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_TR "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_TR ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_TR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_TR "Min endstop:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_TR "Max endstop:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_TR ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_TR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_TR "Min endstop:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_TR "Max endstop:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_TR ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_TR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_TR "Min endstop:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_TR "Max endstop:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_TR ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_TR "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_TR "1 tik = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_TR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_TR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_TR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_TR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_TR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_TR "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_TR "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_TR "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_TR "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_TR "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_TR "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_TR "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_TR          "Fan Hizi"
#define UI_TEXT_ACTION_FANSPEED_TR   "Fan Hizi:%Fs%%%"
#define UI_TEXT_FAN_OFF_TR           "Fan'i Kapat"
#define UI_TEXT_FAN_25_TR            "Fan'i Ayarla 25%%%"
#define UI_TEXT_FAN_50_TR            "Fan'i Ayarla 50%%%"
#define UI_TEXT_FAN_75_TR            "Fan'i Ayarla 75%%%"
#define UI_TEXT_FAN_FULL_TR          "Fan Tam Acik"
#define UI_TEXT_STEPPER_INACTIVE_TR  "Motorlar Bosta"
#define UI_TEXT_STEPPER_INACTIVE2A_TR "Motor Kapa: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_TR "[min] 0=Off"
#define UI_TEXT_POWER_INACTIVE_TR    "Max. Bosta"
#define UI_TEXT_POWER_INACTIVE2A_TR   "Kapama sur.: %ip"
#define UI_TEXT_POWER_INACTIVE2B_TR    "[min] 0=Kapali"
#define UI_TEXT_GENERAL_TR           "Genel"
#define UI_TEXT_BAUDRATE_TR          "Baudrate:%oc"
#define UI_TEXT_EXTR_STEPS_TR        "Adim/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_TR   "Baslangic FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_TR     "Max FR:%XF"
#define UI_TEXT_EXTR_ACCEL_TR        "Ivme:%XA"
#define UI_TEXT_EXTR_WATCH_TR        "Stab.Time:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_TR    "Gelismis lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_TR    "Gelismis quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_TR      "Kontrol:%Xh"
#define UI_TEXT_EXTR_PGAIN_TR        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_TR     "Bos Zamn:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_TR      "Kontrol PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_TR        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_TR        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_TR         "Surucu Min:%Xm"
#define UI_TEXT_EXTR_DMAX_TR         "Surucu Max:%XM"
#define UI_TEXT_EXTR_PMAX_TR         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_TR         "X-Ofset:%Xx"
#define UI_TEXT_EXTR_YOFF_TR         "Y-Ofset:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_TR "BangBang"
#define UI_TEXT_STRING_HM_PID_TR     "PID"
#define UI_TEXT_STRING_ACTION_TR     "Eylem:%la"
#define UI_TEXT_HEATING_EXTRUDER_TR  "Extruder Isiniyor"
#define UI_TEXT_HEATING_BED_TR       "Bed Isiniyor"
#define UI_TEXT_KILLED_TR            "DURDU"
#define UI_TEXT_STEPPER_DISABLED_TR  "Motorlar Kapali"
#define UI_TEXT_EEPROM_STOREDA_TR     "Konfigurasyon"
#define UI_TEXT_EEPROM_STOREDB_TR     "EEPROM'a kaydedildi"
#define UI_TEXT_EEPROM_LOADEDA_TR     "Konfigurasyon"
#define UI_TEXT_EEPROM_LOADEDB_TR     "EEPROM'dan cagrildi"
#define UI_TEXT_UPLOADING_TR         "Yukluyor..."
#define UI_TEXT_PAGE_BUFFER_TR       "Onbellek:%oB"
#define UI_TEXT_PAGE_EXTRUDER_TR     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_TR     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_TR     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_TR     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_TR          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_TR    "Hiz Carp.:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_TR     "Akis Carp. :%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_TR  "Olcumu Goster"
#define UI_TEXT_RESET_MEASUREMENT_TR "Olcumu Sifirla"
#define UI_TEXT_SET_MEASURED_ORIGIN_TR "Z=0'a ayarla"
#define UI_TEXT_ZCALIB_TR             "Z Kalib."
#define UI_TEXT_SET_P1_TR            "Set P1"
#define UI_TEXT_SET_P2_TR            "Set P2"
#define UI_TEXT_SET_P3_TR            "Set P3"
#define UI_TEXT_CALCULATE_LEVELING_TR "Sevieyi Hesapla"
#define UI_TEXT_LEVEL_TR             "Deltayi seviyele"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_TR "Bekle Sic. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_TR "Bekle: %XU mm"
#define UI_TEXT_SD_REMOVED_TR       "SD Card Cikarildi"
#define UI_TEXT_SD_INSERTED_TR      "SD Card Takildi"
#define UI_TEXT_PRINTER_READY_TR    "Yazici Hazir"
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_TR   " gun "
#define UI_TEXT_PRINTTIME_HOURS_TR  ":"
#define UI_TEXT_PRINTTIME_MINUTES_TR ""
#define UI_TEXT_PRINT_TIME_TR     "Yazdirma Zamani"
#define UI_TEXT_PRINT_FILAMENT_TR "Filament harcandi"
#define UI_TEXT_PRINTED_TR           "yazildi"
#define UI_TEXT_POWER_TR            "ATX gucu on/off"
#define UI_TEXT_STRING_HM_DEADTIME_TR     "Bosta Zaman"
#define UI_TEXT_STRING_HM_SLOWBANG_TR     "SlowBang"
#define UI_TEXT_STOP_PRINT_TR "Yazdirmayi durdur"
#define UI_TEXT_Z_BABYSTEPPING_TR "Z Babystep.:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_TR "Filament degistir"
#define UI_TEXT_WIZ_CH_FILAMENT1_TR "Filament degistir"
#define UI_TEXT_WIZ_CH_FILAMENT2_TR "Filameti yukari asagi"
#define UI_TEXT_WIZ_CH_FILAMENT3_TR "almak icin cevirin"
#define UI_TEXT_CLICK_DONE_TR "Tamamlandiginda butona basin"
#define UI_TEXT_AUTOLEVEL_ONOFF_TR  "Oto seviye: %ll"
#define UI_TEXT_SERVOPOS_TR "Servo pos.: %oS"
#define UI_TEXT_IGNORE_M106_TR    "M106Yi atla %Fi"
#define UI_TEXT_WIZ_REHEAT1_TR "Extruderlari tekrar"
#define UI_TEXT_WIZ_REHEAT2_TR "isitmak icin tiklayin"
#define UI_TEXT_WIZ_WAITTEMP1_TR "Istnilen sicakliklar"
#define UI_TEXT_WIZ_WAITTEMP2_TR "icin bekleyin"
#define UI_TEXT_EXTRUDER_JAM_TR "Extruder takildi"
#define UI_TEXT_STANDBY_TR "Bekleme Modu"
#define UI_TEXT_BED_COATING_TR "Tabla ustu kaplama"
#define UI_TEXT_BED_COATING_SET1_TR "Kaplama Kalinligi"
#define UI_TEXT_BED_COATING_SET2_TR ""
#define UI_TEXT_NOCOATING_TR "Kaplama Yok"
#define UI_TEXT_BUILDTAK_TR "BuildTak"
#define UI_TEXT_KAPTON_TR "Kapton"
#define UI_TEXT_BLUETAPE_TR "Mavi Boya Kagidi"
#define UI_TEXT_PETTAPE_TR "Yesil PET Tape"
#define UI_TEXT_GLUESTICK_TR "Yapiskan"
#define UI_TEXT_CUSTOM_TR "Diger"
#define UI_TEXT_COATING_CUSTOM_TR "Diger : %oCmm"
#define UI_TEXT_LANGUAGE_TR "Dil"
#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_TR "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_TR "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_TR "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_TR "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_TR "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_TR "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_TR "Kopie: %ed     Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_TR "Przep:\xfd %of%%%  Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_TR "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_TR "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_TR "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_TR cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_TR "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_TR "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_TR "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_TR "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_TR "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_TR "%Uf m"
#define UI_TEXT_METER_PRINTED_TR "%Uf m " UI_TEXT_PRINTED_TR
#define UI_TEXT_STATUS_TR "%os"
#define UI_TEXT_EMPTY_TR ""
#define UI_TEXT_TEMP_SET_TR cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_TR cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_TR " %oCmm"
#define UI_TEXT_EXTR3_TEMP_TR       "Sic. 4 : %E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_TR       "Sic. 5 : %E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_TR       "Sic. 6 : %E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_TR "Ext. 4’u kapat"
#define UI_TEXT_EXTR4_OFF_TR " Ext. 5’i kapat "
#define UI_TEXT_EXTR5_OFF_TR " Ext. 6’yi kapat "
#define UI_TEXT_EXTR3_SELECT_TR "%X3 Ext. 4’u sec "
#define UI_TEXT_EXTR4_SELECT_TR "%X4 Ext. 5’i sec "
#define UI_TEXT_EXTR5_SELECT_TR "%X5 Ext. 6’yi sec "
#define UI_TEXT_DITTO_0_TR "%D0 Kopyalama"
#define UI_TEXT_DITTO_1_TR "%D1 1 kopya"
#define UI_TEXT_DITTO_2_TR "%D2 2 kopya"
#define UI_TEXT_DITTO_3_TR "%D3 3 kopya"
#define UI_TEXT_ZPROBE_HEIGHT_TR "Z-prob yuksekligi:%zh"
#define UI_TEXT_OFFSETS_TR "Set print offsets"
#define UI_TEXT_X_OFFSET_TR "Set X offset:%T0mm"
#define UI_TEXT_Y_OFFSET_TR "Set Y offset:%T1mm"
#define UI_TEXT_Z_OFFSET_TR "Set Z offset:%T2mm"
#define UI_TEXT_LAYER_TR "Katman %Pl/%PL"
#define UI_TEXT_PROGRESS_TR "%Pp%%%"
#define UI_TEXT_PRINTNAME_TR "%Pn"

#define UI_TEXT_SETUP_TR "Setup"
#define UI_TEXT_MEASURE_DISTORTION_TR "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_TR "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_TR   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_TR "Cancel"
#define UI_TEXT_PLEASE_WAIT_TR "*** Please wait ***"
#define UI_TEXT_CLEARBED1_TR "Make sure the heated"
#define UI_TEXT_CLEARBED2_TR "bed is clear of any"
#define UI_TEXT_CLEARBED3_TR "obstructions"
#define UI_TEXT_NOTIFICATION_TR "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_TR "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_TR "Heater decoupled"
#define UI_TEXT_SLIPPING_TR "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_TR "Leveling error"
#define UI_TEXT_OK_TR "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_TR "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_TR "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_TR "Autolevel bed"
#define UI_TEXT_HOMING_TR "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_TR "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_TR "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_TR "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_TR "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_TR "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_TR "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_TR "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_TR "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_TR "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_TR "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_TR "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_TR "Continue"
#define UI_TEXT_CLOSE_TR "Close"
#define UI_TEXT_EXTR_ZOFF_TR "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_TR "Measuring ..."
#define UI_TEXT_Z_PROBE_TR "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_TR "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_TR "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_TR "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_TR "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_TR "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_TR "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TR USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_TR UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_TR UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_TR UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_TR UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_TR UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_TR UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_TR UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_TR UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_TR UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_TR UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_TR UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_TR UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_TR UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_TR UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_TR UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_TR UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_TR UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_TR UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_TR UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_TR UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_TR UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_TR UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_TR UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_TR UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_TR UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_TR UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_TR UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_TR UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_TR UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_TR UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_TR UI_TEXT_WIZ_AC_LOST_43_TEXT


// *************** Finnish translation ****************
// ********** By Matti Granstedt 28.01.2016 ***********

#define UI_TEXT_ON_FI               "P" STR_auml STR_auml "lle"
#define UI_TEXT_OFF_FI              "Sammuta"
#define UI_TEXT_NA_FI               "N/A" // Output for not available
#define UI_TEXT_YES_FI              "Kyll" STR_auml ""
#define UI_TEXT_NO_FI               "Ei"
#define UI_TEXT_PRINT_POS_FI        "Tulostaa..."
#define UI_TEXT_PRINTING_FI         "Tulosta"
#define UI_TEXT_IDLE_FI             "Valmis"
#define UI_TEXT_NOSDCARD_FI         "Ei SD korttia"
#define UI_TEXT_ERROR_FI            "**** VIRHE ****"
#define UI_TEXT_BACK_FI             "Takaisin" cUP
#define UI_TEXT_QUICK_SETTINGS_FI   "Control" //"Pika-asetukset"
#define UI_TEXT_ERRORMSG_FI         "%oe"
#define UI_TEXT_CONFIGURATION_FI    "Kokoonpano"
#define UI_TEXT_POSITION_FI         "Paikka"
#define UI_TEXT_EXTRUDER_FI         "Pursotin"
#define UI_TEXT_SD_CARD_FI          "SD kortti"
#define UI_TEXT_DEBUGGING_FI        "Virheenetsint" STR_auml ""
#define UI_TEXT_HOME_DELTA_FI       "Koti delta"
#define UI_TEXT_HOME_ALL_FI         "Koti kaikki"
#define UI_TEXT_HOME_X_FI           "Koti X"
#define UI_TEXT_HOME_Y_FI           "Koti Y"
#define UI_TEXT_HOME_Z_FI           "Koti Z"
#define UI_TEXT_PREHEAT_SINGLE_FI   "Preheat Single Extr."
#define UI_TEXT_PREHEAT_ALL_FI      "Preheat All Extr."
#define UI_TEXT_LIGHTS_ONOFF_FI     "Valot:%lo"
#define UI_TEXT_COOLDOWN_FI         "J" STR_auml STR_auml "hdytys"
#define UI_TEXT_SET_TO_ORIGIN_FI    "Aseta l" STR_auml "ht" STR_ouml "piste"
#define UI_TEXT_DISABLE_STEPPER_FI  "Sammuta moottori"
#define UI_TEXT_X_POSITION_FI       "X Paikka"
#define UI_TEXT_X_POS_FAST_FI       "X Paikka nopea"
#define UI_TEXT_Y_POSITION_FI       "Y Paikka"
#define UI_TEXT_Y_POS_FAST_FI       "Y Paikka nopea"
#define UI_TEXT_Z_POSITION_FI       "Z Paikka"
#define UI_TEXT_Z_POS_FAST_FI       "Z Paikka nopea"
#define UI_TEXT_E_POSITION_FI       "Pursot. paikka"
#define UI_TEXT_BED_TEMP_FI         "Alustan :%eb/%Eb" cDEG "C"
#define UI_TEXT_EXTR0_TEMP_FI       "Purso 1 :%e0/%E0" cDEG "C"
#define UI_TEXT_EXTR1_TEMP_FI       "Purso 2 :%e1/%E1" cDEG "C"
#define UI_TEXT_EXTR2_TEMP_FI       "Purso 3 :%e2/%E2" cDEG "C"
#define UI_TEXT_EXTR0_OFF_FI        "Pursotin 1 Ei"
#define UI_TEXT_EXTR1_OFF_FI        "Pursotin 2 Ei"
#define UI_TEXT_EXTR2_OFF_FI        "Pursotin 3 Ei"
#define UI_TEXT_EXTR0_SELECT_FI     "%X0 Valitse purs.1"
#define UI_TEXT_EXTR1_SELECT_FI     "%X1 Valitse purs.2"
#define UI_TEXT_EXTR2_SELECT_FI     "%X2 Valitse purs.3"
#define UI_TEXT_EXTR_ORIGIN_FI      "Aseta l" STR_auml "ht" STR_ouml "piste"
#define UI_TEXT_PRINT_X_FI          "Tulosta X:%ax"
#define UI_TEXT_PRINT_Y_FI          "Tulosta Y:%ay"
#define UI_TEXT_PRINT_Z_FI          "Tulosta Z:%az"
#define UI_TEXT_PRINT_Z_DELTA_FI    "Tulosta:%az"
#define UI_TEXT_MOVE_X_FI           "Siirr" STR_auml "X :%aX"
#define UI_TEXT_MOVE_Y_FI           "Siirr" STR_auml "Y :%aY"
#define UI_TEXT_MOVE_Z_FI           "Siirr" STR_auml "Z :%aZ"
#define UI_TEXT_MOVE_Z_DELTA_FI     "Siirr" STR_auml ":%aZ"
#define UI_TEXT_JERK_FI             "Askel   :%aj"
#define UI_TEXT_ZJERK_FI            "Z-Askel :%aJ"
#define UI_TEXT_ACCELERATION_FI     "Kiihtyvyys"
#define UI_TEXT_STORE_TO_EEPROM_FI  "Tallenna EEPROM"
#define UI_TEXT_LOAD_EEPROM_FI      "Lataa    EEPROM"
#define UI_TEXT_DBG_ECHO_FI         "Toista   :%do"
#define UI_TEXT_DBG_INFO_FI         "Tiedot   :%di"
#define UI_TEXT_DBG_ERROR_FI        "Virheet  :%de"
#define UI_TEXT_DBG_DRYRUN_FI       "Kuiva-ajo:%dd"
#define UI_TEXT_DBG_ENDSTOP_FI      "EndStop  :%dp"
#define UI_TEXT_OPS_OFF_FI          "%O0 OPS ei"
#define UI_TEXT_OPS_CLASSIC_FI      "%O1 OPS normaali"
#define UI_TEXT_OPS_FAST_FI         "%O2 OPS nopea"
#define UI_TEXT_OPS_RETRACT_FI      "Peruuta   :%Or"
#define UI_TEXT_OPS_BACKSLASH_FI    "Backsl.   :%Ob"
#define UI_TEXT_OPS_MINDIST_FI      "Min.dist  :%Od"
#define UI_TEXT_OPS_MOVE_AFTER_FI   "Siirr" STR_auml "j" STR_auml "lkeen:%Oa"
#define UI_TEXT_ANTI_OOZE_FI        "Vuodon poisto"
#define UI_TEXT_PRINT_FILE_FI       "Tulosta Tiedosto"
#define UI_TEXT_PAUSE_PRINT_FI      "Tulostustauko"
#define UI_TEXT_CONTINUE_PRINT_FI   "Jatka tulostusta"
#define UI_TEXT_UNMOUNT_CARD_FI     "Kortti poistettu"
#define UI_TEXT_MOUNT_CARD_FI       "Kortti asetettu"
#define UI_TEXT_DELETE_FILE_FI      "Poista tiedosto"
#define UI_TEXT_FEEDRATE_FI         "Sy" STR_ouml "tt" STR_ouml "nopeus"
#define UI_TEXT_FEED_MAX_X_FI       "Maks. X:%fx"
#define UI_TEXT_FEED_MAX_Y_FI       "Maks. Y:%fy"
#define UI_TEXT_FEED_MAX_Z_FI       "Maks. Z:%fz"
#define UI_TEXT_FEED_MAX_Z_DELTA_FI "Maks.:%fz"
#define UI_TEXT_FEED_HOME_X_FI      "Koti X:%fX"
#define UI_TEXT_FEED_HOME_Y_FI      "Koti Y:%fY"
#define UI_TEXT_FEED_HOME_Z_FI      "Koti Z:%fZ"
#define UI_TEXT_FEED_HOME_Z_DELTA_FI "Koti:%fZ"
#define UI_TEXT_ACTION_XPOSITION4A_FI "X:%x0 mm %dx%dX"
#define UI_TEXT_ACTION_XPOSITION4B_FI "Min. rajoittimesta:%sx"
#define UI_TEXT_ACTION_XPOSITION4C_FI "Maks rajoittimesta:%sX"
#define UI_TEXT_ACTION_XPOSITION4D_FI ""
#define UI_TEXT_ACTION_YPOSITION4A_FI "Y:%x1 mm %dy%dY"
#define UI_TEXT_ACTION_YPOSITION4B_FI "Min. rajoittimesta:%sy"
#define UI_TEXT_ACTION_YPOSITION4C_FI "Maks rajoittimesta:%sY"
#define UI_TEXT_ACTION_YPOSITION4D_FI ""
#define UI_TEXT_ACTION_ZPOSITION4A_FI "Z:%x2 mm %dz%dZ"
#define UI_TEXT_ACTION_ZPOSITION4B_FI "Min. rajoittimesta:%sz"
#define UI_TEXT_ACTION_ZPOSITION4C_FI "Maks rajoittimesta:%sZ"
#define UI_TEXT_ACTION_ZPOSITION4D_FI ""
#define UI_TEXT_ACTION_XPOSITION_FAST4A_FI "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST4B_FI "Min. rajoittimesta:%sx"
#define UI_TEXT_ACTION_XPOSITION_FAST4C_FI "Maks rajoittimesta:%sX"
#define UI_TEXT_ACTION_XPOSITION_FAST4D_FI ""
#define UI_TEXT_ACTION_YPOSITION_FAST4A_FI "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST4B_FI "Min. rajoittimesta:%sy"
#define UI_TEXT_ACTION_YPOSITION_FAST4C_FI "Maks rajoittimesta:%sY"
#define UI_TEXT_ACTION_YPOSITION_FAST4D_FI ""
#define UI_TEXT_ACTION_ZPOSITION_FAST4A_FI "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST4B_FI "Min. rajoittimesta:%sz"
#define UI_TEXT_ACTION_ZPOSITION_FAST4C_FI "Maks rajoittimesta:%sZ"
#define UI_TEXT_ACTION_ZPOSITION_FAST4D_FI ""
#define UI_TEXT_ACTION_EPOSITION_FAST2A_FI "E:%x3 mm"
#define UI_TEXT_ACTION_EPOSITION_FAST2B_FI "1 klikkaus = 1 mm"
#define UI_TEXT_ACTION_XPOSITION2A_FI "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION2B_FI "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION2A_FI "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION2B_FI "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION2A_FI "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION2B_FI "Min:%sz Max:%sZ"
#define UI_TEXT_ACTION_XPOSITION_FAST2A_FI "X:%x0 mm"
#define UI_TEXT_ACTION_XPOSITION_FAST2B_FI "Min:%sx Max:%sX"
#define UI_TEXT_ACTION_YPOSITION_FAST2A_FI "Y:%x1 mm"
#define UI_TEXT_ACTION_YPOSITION_FAST2B_FI "Min:%sy Max:%sY"
#define UI_TEXT_ACTION_ZPOSITION_FAST2A_FI "Z:%x2 mm"
#define UI_TEXT_ACTION_ZPOSITION_FAST2B_FI "Min:%sz Max:%sZ"
#define UI_TEXT_FANSPEED_FI          "Tuulettimen nopeus"
#define UI_TEXT_ACTION_FANSPEED_FI   "Tuuletin nopeus:%Fs%%%"
#define UI_TEXT_FAN_OFF_FI           "Sammuta tuuletin"
#define UI_TEXT_FAN_25_FI            "Aseta nop. 25%%%"
#define UI_TEXT_FAN_50_FI            "Aseta nop. 50%%%"
#define UI_TEXT_FAN_75_FI            "Aseta nop. 75%%%"
#define UI_TEXT_FAN_FULL_FI          "Aseta nop. maks."
#define UI_TEXT_STEPPER_INACTIVE_FI  "Moottori toimeton"
#define UI_TEXT_STEPPER_INACTIVE2A_FI "Toimeton j" STR_auml "lkeen: %is"
#define UI_TEXT_STEPPER_INACTIVE2B_FI "[min] 0=sammuta"
#define UI_TEXT_POWER_INACTIVE_FI    "Maks. toimeton"
#define UI_TEXT_POWER_INACTIVE2A_FI   "Toimeton j" STR_auml "lkeen: %ip"
#define UI_TEXT_POWER_INACTIVE2B_FI   "[min] 0=sammuta"
#define UI_TEXT_GENERAL_FI           "Yleiset"
#define UI_TEXT_BAUDRATE_FI          "Siirtonopeus:%oc"
#define UI_TEXT_EXTR_STEPS_FI        "Askelta/MM:%Se"
#define UI_TEXT_EXTR_START_FEED_FI   "K" STR_auml "ynnist" STR_auml "FR:%Xf"
#define UI_TEXT_EXTR_MAX_FEED_FI     "Maks. FR:%XF"
#define UI_TEXT_EXTR_ACCEL_FI        "Kiihdytys:%XA"
#define UI_TEXT_EXTR_WATCH_FI        "Stab.Aika:%Xw"
#define UI_TEXT_EXTR_ADVANCE_L_FI    "Eteneminen lin:%Xl"
#define UI_TEXT_EXTR_ADVANCE_K_FI    "Eteneminen quad:%Xa"
#define UI_TEXT_EXTR_MANAGER_FI      "Hallinta:%Xh"
#define UI_TEXT_EXTR_PGAIN_FI        "PID P:%Xp"
#define UI_TEXT_EXTR_DEADTIME_FI     "Kuollut aika:%Xp"
#define UI_TEXT_EXTR_DMAX_DT_FI      "Valvonta PWM:%XM"
#define UI_TEXT_EXTR_IGAIN_FI        "PID I:%Xi"
#define UI_TEXT_EXTR_DGAIN_FI        "PID D:%Xd"
#define UI_TEXT_EXTR_DMIN_FI         "Ajo Min:%Xm"
#define UI_TEXT_EXTR_DMAX_FI         "Ajo Max:%XM"
#define UI_TEXT_EXTR_PMAX_FI         "PID Max:%XD"
#define UI_TEXT_EXTR_XOFF_FI         "X-tasoitus:%Xx"
#define UI_TEXT_EXTR_YOFF_FI         "Y-tasoitus:%Xy"
#define UI_TEXT_STRING_HM_BANGBANG_FI "BangBang"
#define UI_TEXT_STRING_HM_PID_FI     "PID"
#define UI_TEXT_STRING_ACTION_FI     "Toiminta:%la"
#define UI_TEXT_HEATING_EXTRUDER_FI  "Kuumentaa Pursot."
#define UI_TEXT_HEATING_BED_FI       "Kuumentaa Alustaa"
#define UI_TEXT_KILLED_FI            "Poistettu"
#define UI_TEXT_STEPPER_DISABLED_FI  "Moottori pois k" STR_auml "yt."
#define UI_TEXT_EEPROM_STOREDA_FI     "Kokoonpano"
#define UI_TEXT_EEPROM_STOREDB_FI     "Tallennettu EEPROM"
#define UI_TEXT_EEPROM_LOADEDA_FI     "Kokoonpano"
#define UI_TEXT_EEPROM_LOADEDB_FI     "Ladattu EEPROM"
#define UI_TEXT_UPLOADING_FI         "Ladataan..."
#define UI_TEXT_PAGE_BUFFER_FI       "Puskuri:%oB"
#define UI_TEXT_PAGE_EXTRUDER_FI     " E:%ec/%Ec" cDEG "C" cARROW "%oC"
#define UI_TEXT_PAGE_EXTRUDER1_FI     "E1:%e0/%E0" cDEG "C" cARROW "%o0"
#define UI_TEXT_PAGE_EXTRUDER2_FI     "E2:%e1/%E1" cDEG "C" cARROW "%o1"
#define UI_TEXT_PAGE_EXTRUDER3_FI     "E3:%e2/%E2" cDEG "C" cARROW "%o2"
#define UI_TEXT_PAGE_BED_FI          " B:%eb/%Eb" cDEG "C" cARROW "%ob"
#define UI_TEXT_SPEED_MULTIPLY_FI    "Nopeuskerroin:%om%%%"
#define UI_TEXT_FLOW_MULTIPLY_FI     "Puhalluskerroin:%of%%%"
#define UI_TEXT_SHOW_MEASUREMENT_FI  "N" STR_auml "yt" STR_auml " mitat"
#define UI_TEXT_RESET_MEASUREMENT_FI "Poista mitat."
#define UI_TEXT_SET_MEASURED_ORIGIN_FI "Aseta Z=0"
#define UI_TEXT_ZCALIB_FI             "Z kalibrointi"
#define UI_TEXT_SET_P1_FI            "Aseta P1"
#define UI_TEXT_SET_P2_FI            "Aseta P2"
#define UI_TEXT_SET_P3_FI            "Aseta P3"
#define UI_TEXT_CALCULATE_LEVELING_FI "Laske tasot"
#define UI_TEXT_LEVEL_FI             "Taso delta"
#define UI_TEXT_EXTR_WAIT_RETRACT_TEMP_FI "Odottaa l" STR_auml "mm. %XT" cDEG "C"
#define UI_TEXT_EXTR_WAIT_RETRACT_UNITS_FI "Odottaa yks.:%XU mm"
#define UI_TEXT_SD_REMOVED_FI       "SD kortti pois"
#define UI_TEXT_SD_INSERTED_FI      "SD kortti on"
#define UI_TEXT_PRINTER_READY_FI    "Tulostin valmis."
// Printtime output gets aggregated like <Days_5gisgits>UI_TEXT_PRINTTIME_DAYS<Hours>UI_TEXT_PRINTTIME_HOURS<Minutes>UI_TEXT_PRINTTIME_MINUTES
// ___88 days 12:45
#define UI_TEXT_PRINTTIME_DAYS_FI   " p" STR_auml "iv" STR_auml STR_auml " "
#define UI_TEXT_PRINTTIME_HOURS_FI  ":"
#define UI_TEXT_PRINTTIME_MINUTES_FI ""
#define UI_TEXT_PRINT_TIME_FI     "Tulostusaika"
#define UI_TEXT_PRINT_FILAMENT_FI "Lanka tulostettu"
#define UI_TEXT_PRINTED_FI           "Tulostettu"
#define UI_TEXT_POWER_FI            "ATX virtal. on/ei"
#define UI_TEXT_STRING_HM_DEADTIME_FI     "Joutoaika"
#define UI_TEXT_STRING_HM_SLOWBANG_FI     "SlowBang"
#define UI_TEXT_STOP_PRINT_FI "Lopeta tulostus"
#define UI_TEXT_Z_BABYSTEPPING_FI "Z mikroaskellus:%oYmm"
#define UI_TEXT_CHANGE_FILAMENT_FI "Vaihda tulostuslanka"
#define UI_TEXT_WIZ_CH_FILAMENT1_FI "Vaihda tulostuslanka"
#define UI_TEXT_WIZ_CH_FILAMENT2_FI "Py" STR_ouml "rit" STR_auml " siirr" STR_auml ""
#define UI_TEXT_WIZ_CH_FILAMENT3_FI "Tul.lanka yl" STR_ouml "s/alas"
#define UI_TEXT_CLICK_DONE_FI "Klik kun valmis"
#define UI_TEXT_AUTOLEVEL_ONOFF_FI  "Autom.taso: %ll"
#define UI_TEXT_SERVOPOS_FI "Servo paikka: %oS"
#define UI_TEXT_IGNORE_M106_FI      "Ohita M106 %Fi"
#define UI_TEXT_WIZ_REHEAT1_FI "Klik uusi kuumennus"
#define UI_TEXT_WIZ_REHEAT2_FI "pursottimet"
#define UI_TEXT_WIZ_WAITTEMP1_FI "Odottaa tavoitetta"
#define UI_TEXT_WIZ_WAITTEMP2_FI "l" STR_auml "mp" STR_ouml "tilat..."
#define UI_TEXT_EXTRUDER_JAM_FI "Pursottimen tukos"
#define UI_TEXT_STANDBY_FI "Valmiina"
#define UI_TEXT_BED_COATING_FI "Alustan pinnote"
#define UI_TEXT_BED_COATING_SET1_FI "Alustan pinta valittu"
#define UI_TEXT_BED_COATING_SET2_FI ""
#define UI_TEXT_NOCOATING_FI "Ei pinnotetta"
#define UI_TEXT_BUILDTAK_FI "BuildTak"
#define UI_TEXT_KAPTON_FI "Kapton"
#define UI_TEXT_BLUETAPE_FI "Sininen paperi teippi"
#define UI_TEXT_PETTAPE_FI "Vihreä PET teippi"
#define UI_TEXT_GLUESTICK_FI "Liimapuikko"
#define UI_TEXT_CUSTOM_FI "Mukautettu"
#define UI_TEXT_COATING_CUSTOM_FI "Mukautettu:%BCmm"
#define UI_TEXT_LANGUAGE_FI "Kieli"

#if NUM_EXTRUDER > 2 || MIXING_EXTRUDER != 0
#define UI_TEXT_MAINPAGE6_1_FI "\xa %ec/%Ec\xb0 X:%x0"
#else
#define UI_TEXT_MAINPAGE6_1_FI "\xa %e0/%E0\xb0 X:%x0"
#endif // NUM_EXTRUDER
#if NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_2_FI "\xa %e1/%E1\xb0 Y:%x1"
#elif HAVE_HEATED_BED
#define UI_TEXT_MAINPAGE6_2_FI "\xe %eb/%Eb\xb0 Y:%x1"
#else
#define UI_TEXT_MAINPAGE6_2_FI "             Y:%x1"
#endif
#if HAVE_HEATED_BED && NUM_EXTRUDER == 2 && MIXING_EXTRUDER == 0
#define UI_TEXT_MAINPAGE6_3_FI "\xe %eb/%Eb\xb0 Z:%x2"
#elif FEATURE_DITTO_PRINTING
#define UI_TEXT_MAINPAGE6_3_FI "Kopiot: %ed    Z:%x2"
#else
#define UI_TEXT_MAINPAGE6_3_FI "Virtaus:\xfd %of%%%   Z:%x2"
#endif
#define UI_TEXT_MAINPAGE6_4_FI "Mul: %om%%% \xfd   E: %x4m"
#define UI_TEXT_MAINPAGE6_5_FI "Buf: %oB"
#define UI_TEXT_MAINPAGE6_6_FI "%os"
#define UI_TEXT_MAINPAGE_TEMP_BED_FI cTEMP "%ec/%Ec" cDEG "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_BED_FI "B%eB/%Eb" cDEG
#define UI_TEXT_MAINPAGE_Z_BUF_FI "Z:%x2  Buf : %oB"
#define UI_TEXT_MAINPAGE_MUL_EUSAGE_FI "Mul: %om   E:%x4"
#define UI_TEXT_MAINPAGE_XY_FI "X:%x0 Y:%x1"
#define UI_TEXT_PRINT_TIME_VALUE_FI "%Ut"
#define UI_TEXT_PRINT_FILAMENT_VALUE_FI "%Uf m"
#define UI_TEXT_METER_PRINTED_FI "%Uf m " UI_TEXT_PRINTED_FI
#define UI_TEXT_STATUS_FI "%os"
#define UI_TEXT_EMPTY_FI ""
#define UI_TEXT_TEMP_SET_FI cTEMP "%ec/%Ec" cDEG
#define UI_TEXT_CURRENT_TEMP_FI cTEMP "%ec" cDEG
#define UI_TEXT_COATING_THICKNESS_FI " %BCmm"
#define UI_TEXT_EXTR3_TEMP_FI "L" STR_auml "mp" STR_ouml " 4 :%e3/%E3" cDEG "C"
#define UI_TEXT_EXTR4_TEMP_FI "L" STR_auml "mp" STR_ouml " 5 :%e4/%E4" cDEG "C"
#define UI_TEXT_EXTR5_TEMP_FI "L" STR_auml "mp" STR_ouml " 6 :%e5/%E5" cDEG "C"
#define UI_TEXT_EXTR3_OFF_FI "Pursotin 4 ei"
#define UI_TEXT_EXTR4_OFF_FI "Pursotin 5 ei"
#define UI_TEXT_EXTR5_OFF_FI "Pursotin 6 ei"
#define UI_TEXT_EXTR3_SELECT_FI "%X3 Valitse purs. 4"
#define UI_TEXT_EXTR4_SELECT_FI "%X4 Valitse purs. 5"
#define UI_TEXT_EXTR5_SELECT_FI "%X5 Valitse purs. 6"
#define UI_TEXT_DITTO_0_FI "%D0 Ei kopiota"
#define UI_TEXT_DITTO_1_FI "%D1 1 kopio"
#define UI_TEXT_DITTO_2_FI "%D2 2 kopiota"
#define UI_TEXT_DITTO_3_FI "%D3 3 kopiota"
#define UI_TEXT_ZPROBE_HEIGHT_FI "Z-anturin korkeus:%zh"

#define UI_TEXT_OFFSETS_FI "Aseta tulostimen poikkeamat"
#define UI_TEXT_X_OFFSET_FI "Aseta X poikkeama:%T0mm"
#define UI_TEXT_Y_OFFSET_FI "Aseta Y poikkeama:%T1mm"
#define UI_TEXT_Z_OFFSET_FI "Aseta Z poikkeama:%T2mm"
#define UI_TEXT_LAYER_FI "Kerros %Pl/%PL"
#define UI_TEXT_PROGRESS_FI "%Pp%%%"
#define UI_TEXT_PRINTNAME_FI "%Pn"

#define UI_TEXT_SETUP_FI "Setup"
#define UI_TEXT_MEASURE_DISTORTION_FI "Measure z-distortion"
#define UI_TEXT_DISTORTION_CORR_FI "Distortion corr.:%De"
#define UI_TEXT_ACTION_FAN2SPEED_FI   "Fan 2 speed:%FS%%%"
#define UI_TEXT_CANCEL_FI "Cancel"
#define UI_TEXT_PLEASE_WAIT_FI "*** Please wait ***"
#define UI_TEXT_CLEARBED1_FI "Make sure the heated"
#define UI_TEXT_CLEARBED2_FI "bed is clear of any"
#define UI_TEXT_CLEARBED3_FI "obstructions"
#define UI_TEXT_NOTIFICATION_FI "Notification:"
#define UI_TEXT_TEMPSENSOR_DEFECT_FI "Temp. sensor defect"
#define UI_TEXT_HEATER_DECOUPLED_FI "Heater decoupled"
#define UI_TEXT_SLIPPING_FI "Filament slipping"
#define UI_TEXT_LEVELING_ERROR_FI "Leveling error"
#define UI_TEXT_OK_FI "    >>> Ok <<<"
#define UI_TEXT_CALIBRATING_FI "Calibrating bed"
#define UI_TEXT_CALIBRATION_ERROR_FI "Calibration Error"
#define UI_TEXT_AUTOLEVEL_BED_FI "Autolevel bed"
#define UI_TEXT_HOMING_FI "Homing..."
#define UI_TEXT_PREHEAT_TEMPS_FI "Preheat Temperatures"
#define UI_TEXT_PREHEAT_E0_FI "Extr. 1: %p0" cDEG "C"
#define UI_TEXT_PREHEAT_E1_FI "Extr. 2: %p1" cDEG "C"
#define UI_TEXT_PREHEAT_E2_FI "Extr. 3: %p2" cDEG "C"
#define UI_TEXT_PREHEAT_E3_FI "Extr. 4: %p3" cDEG "C"
#define UI_TEXT_PREHEAT_E4_FI "Extr. 5: %p4" cDEG "C"
#define UI_TEXT_PREHEAT_E5_FI "Extr. 6: %p5" cDEG "C"
#define UI_TEXT_PREHEAT_BED_FI "Bed    : %pb" cDEG "C"
#define UI_TEXT_MEAS_ZP_HEIGHT_FI "Meas. Probe Height"
#define UI_TEXT_CUR_TEMP_FI "Temp. %ec/%Ec" cDEG "C"
#define UI_TEXT_REAL_Z_FI "Real Z Pos:%W0mm"
#define UI_TEXT_CONTINUE_FI "Continue"
#define UI_TEXT_CLOSE_FI "Close"
#define UI_TEXT_EXTR_ZOFF_FI "Z-Offset:%Xz"
#define UI_TEXT_MEASURING_FI "Measuring ..."
#define UI_TEXT_Z_PROBE_FI "Start Z-Probe"
#define UI_TEXT_MAINPAGE6_1_C_FI "Xw:%x5   X:%x0"
#define UI_TEXT_MAINPAGE6_2_C_FI "Yw:%x6   Y:%x1"
#define UI_TEXT_MAINPAGE6_3_C_FI "Zw:%x7   Z:%x2"
#define UI_TEXT_MAINPAGE6_4_L_FI "Mul: %om%%%    Las:%op W"
#define UI_TEXT_MAINPAGE6_4_C_FI "Mul: %om%%%    Spi:%opRPM "
#define UI_TEXT_JAMCONTROL_FI "%ej Jam Control"

#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_FI USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_FI USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_FI USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_FI USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_4_TEXT
#define UI_TEXT_USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_FI USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_5_TEXT
#define UI_TEXT_SERVICE_MENU_FI UI_TEXT_SERVICE_MENU_TEXT
#define UI_SERVICE_MENU_ITEM1_FI UI_SERVICE_MENU_ITEM1_TEXT
#define UI_SERVICE_MENU_ITEM2_FI UI_SERVICE_MENU_ITEM2_TEXT
#define UI_SERVICE_MENU_ITEM3_FI UI_SERVICE_MENU_ITEM3_TEXT
#define UI_SERVICE_MENU_ITEM4_FI UI_SERVICE_MENU_ITEM4_TEXT
#define UI_SERVICE_MENU_ITEM5_FI UI_SERVICE_MENU_ITEM5_TEXT

#define UI_TEXT_WIZ_CRASH_11_FI UI_TEXT_WIZ_CRASH_11_TEXT
#define UI_TEXT_WIZ_CRASH_12_FI UI_TEXT_WIZ_CRASH_12_TEXT
#define UI_TEXT_WIZ_CRASH_13_FI UI_TEXT_WIZ_CRASH_13_TEXT

#define UI_TEXT_WIZ_CRASH_21_FI UI_TEXT_WIZ_CRASH_21_TEXT
#define UI_TEXT_WIZ_CRASH_22_FI UI_TEXT_WIZ_CRASH_22_TEXT
#define UI_TEXT_WIZ_CRASH_23_FI UI_TEXT_WIZ_CRASH_23_TEXT

#define UI_TEXT_WIZ_CRASH_31_FI UI_TEXT_WIZ_CRASH_31_TEXT
#define UI_TEXT_WIZ_CRASH_32_FI UI_TEXT_WIZ_CRASH_32_TEXT
#define UI_TEXT_WIZ_CRASH_33_FI UI_TEXT_WIZ_CRASH_33_TEXT

#define UI_TEXT_WIZ_CRASH_41_FI UI_TEXT_WIZ_CRASH_41_TEXT
#define UI_TEXT_WIZ_CRASH_42_FI UI_TEXT_WIZ_CRASH_42_TEXT
#define UI_TEXT_WIZ_CRASH_43_FI UI_TEXT_WIZ_CRASH_43_TEXT
#define UI_TEXT_STALLGUARD_ITEM_FI UI_TEXT_STALLGUARD_ITEM_TEXT

#define UI_TEXT_WIZ_AC_LOST_11_FI UI_TEXT_WIZ_AC_LOST_11_TEXT
#define UI_TEXT_WIZ_AC_LOST_12_FI UI_TEXT_WIZ_AC_LOST_12_TEXT
#define UI_TEXT_WIZ_AC_LOST_13_FI UI_TEXT_WIZ_AC_LOST_13_TEXT
#define UI_TEXT_WIZ_AC_LOST_21_FI UI_TEXT_WIZ_AC_LOST_21_TEXT
#define UI_TEXT_WIZ_AC_LOST_22_FI UI_TEXT_WIZ_AC_LOST_22_TEXT
#define UI_TEXT_WIZ_AC_LOST_23_FI UI_TEXT_WIZ_AC_LOST_23_TEXT
#define UI_TEXT_WIZ_AC_LOST_31_FI UI_TEXT_WIZ_AC_LOST_31_TEXT
#define UI_TEXT_WIZ_AC_LOST_32_FI UI_TEXT_WIZ_AC_LOST_32_TEXT
#define UI_TEXT_WIZ_AC_LOST_33_FI UI_TEXT_WIZ_AC_LOST_33_TEXT
#define UI_TEXT_WIZ_AC_LOST_41_FI UI_TEXT_WIZ_AC_LOST_41_TEXT
#define UI_TEXT_WIZ_AC_LOST_42_FI UI_TEXT_WIZ_AC_LOST_42_TEXT
#define UI_TEXT_WIZ_AC_LOST_43_FI UI_TEXT_WIZ_AC_LOST_43_TEXT


#define TRANS(x) UI_STRING(F ## x,x)
#ifdef CUSTOM_TRANSLATIONS
#include "CustomTranslations.h"
#else
#define NUM_EXTRA_TRANSLATIONS 0 //23
#define CUSTOM_TRANS_EN
#define CUSTOM_TRANS_DE
#define CUSTOM_TRANS_NL
#define CUSTOM_TRANS_ES
#define CUSTOM_TRANS_PT
#define CUSTOM_TRANS_FR
#define CUSTOM_TRANS_IT
#define CUSTOM_TRANS_SE
#define CUSTOM_TRANS_CZ
#define CUSTOM_TRANS_PL
#define CUSTOM_TRANS_TR
#define CUSTOM_TRANS_FI
#endif
