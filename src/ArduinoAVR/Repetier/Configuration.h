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

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

Speed is in mm/s
Acceleration in mm/s^2
Temperature is in degrees Celsius

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

##########################################################################################
##                                        IMPORTANT                                     ##
##########################################################################################

For easy configuration, the default settings enable parameter storage in EEPROM.
This means, after the first upload many variables can only be changed using the special
M commands as described in the documentation. Changing these values in the configuration.h
file has no effect. Parameters overridden by EEPROM settings are calibration values, extruder
values except thermistor tables and some other parameter likely to change during usage
like advance steps or ops mode.
To override EEPROM settings with config settings, set EEPROM_MODE 0

*/

#define NUM_EXTRUDER 1

/** Set to 1 if all extruder motors go to 1 nozzle that mixes your colors. */
#define MIXING_EXTRUDER 0

//// The following define selects which electronics board you have. Please choose the one that matches your setup
// Gen3 PLUS for RepRap Motherboard V1.2 = 21
// MEGA/RAMPS up to 1.2       = 3
// RAMPS 1.3/RAMPS 1.4        = 33
// Azteeg X3                  = 34
// Azteeg X3 Pro              = 35
// MPX3  (mainly RAMPS compatible) = 38
// Ultimaker Shield 1.5.7     = 37
// Gen6                       = 5
// Gen6 deluxe                = 51
// Sanguinololu up to 1.1     = 6
// Sanguinololu 1.2 and above = 62
// 3Drag/Velleman K8200       = 66 (experimental)
// Open Motion Controller     = 91
// Melzi board                = 63  // Define REPRAPPRO_HUXLEY if you have one for correct HEATER_1_PIN assignment!
// Azteeg X1                  = 65
// 3Drag/Velleman K8200 (experimental) = 66
// Gen7 1.1 till 1.3.x        = 7
// Gen7 1.4.1 and later       = 71
// Sethi 3D_1                 = 72
// Teensylu (at90usb)         = 8 // requires Teensyduino
// Printrboard (at90usb)      = 9 // requires Teensyduino
// Printrboard Ref. F or newer= 92 // requires Teensyduino
// Foltyn 3D Master           = 12
// MegaTronics 1.0            = 70
// Megatronics 2.0            = 701
// Megatronics 3.0            = 703 // Thermistors predefined not thermocouples
// Minitronics 1.0            = 702
// RUMBA                      = 80  // Get it from reprapdiscount
// FELIXprinters              = 101
// Rambo                      = 301
// PiBot for Repetier V1.0-1.3= 314
// PiBot for Repetier V1.4    = 315
// PiBot Controller V2.0      = 316
// Sanguish Beta              = 501
// Unique One rev. A          = 88
// SAV MK1                    = 89
// MJRice Pica Rev B          = 183
// MJRice Pica Rev C          = 184
// Zonestar ZRIB 2.1          = 39
// User layout defined in userpins.h = 999

#define MOTHERBOARD 33

#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################
// ################ END MANUAL SETTINGS ##########################

#undef FAN_BOARD_PIN
#define FAN_BOARD_PIN -1
#define BOARD_FAN_SPEED 255
#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using Arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not being compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0

#define DRIVE_SYSTEM 0
/*
  Normal core xy implementation needs 2 virtual steps for a motor step to guarantee
  that every tiny move gets maximum one step regardless of direction. This can cost
  some speed, so alternatively you can activate the FAST_COREXYZ by uncommenting
  the define. This solves the core movements as nonlinear movements like done for
  deltas but without the complicated transformations. Since transformations are still
  linear you can reduce delta computations per second to 10 and also use 10 
  subsegments instead of 20 to reduce memory usage.
*/
//#define FAST_COREXYZ

/* You can write some GCODE to be executed on startup. Use this e.g. to set some 
pins. Separate multiple GCODEs with \n
*/
//#define STARTUP_GCODE ""

// ##########################################################################################
// ##                               Calibration                                            ##
// ##########################################################################################

/** Drive settings for the Delta printers
*/
#if DRIVE_SYSTEM == DELTA
    // ***************************************************
    // *** These parameter are only for Delta printers ***
    // ***************************************************

/** \brief Delta drive type: 0 - belts and pulleys, 1 - filament drive */
#define DELTA_DRIVE_TYPE 0

#if DELTA_DRIVE_TYPE == 0
/** \brief Pitch in mm of drive belt. GT2 = 2mm */
#define BELT_PITCH 2
/** \brief Number of teeth on X, Y and Z tower pulleys */
#define PULLEY_TEETH 20
#define PULLEY_CIRCUMFERENCE (BELT_PITCH * PULLEY_TEETH)
#elif DELTA_DRIVE_TYPE == 1
/** \brief Filament pulley diameter in millimeters */
#define PULLEY_DIAMETER 10
#define PULLEY_CIRCUMFERENCE (PULLEY_DIAMETER * 3.1415927)
#endif

/** \brief Steps per rotation of stepper motor */
#define STEPS_PER_ROTATION 200

/** \brief Micro stepping rate of X, Y and Y tower stepper drivers */
#define MICRO_STEPS 16

// Calculations
#define AXIS_STEPS_PER_MM ((float)(MICRO_STEPS * STEPS_PER_ROTATION) / PULLEY_CIRCUMFERENCE)
#define XAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#define YAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#define ZAXIS_STEPS_PER_MM AXIS_STEPS_PER_MM
#else
// *******************************************************
// *** These parameter are for all other printer types ***
// *******************************************************

/** Drive settings for printers with cartesian drive systems */
/** \brief Number of steps for a 1mm move in x direction.
For xy gantry use 2*belt moved!
Overridden if EEPROM activated. */
#define XAXIS_STEPS_PER_MM 98.425196
/** \brief Number of steps for a 1mm move in y direction.
For xy gantry use 2*belt moved!
Overridden if EEPROM activated.*/
#define YAXIS_STEPS_PER_MM 98.425196
/** \brief Number of steps for a 1mm move in z direction  Overridden if EEPROM activated.*/
#define ZAXIS_STEPS_PER_MM 2560
#endif

// ##########################################################################################
// ##                           Extruder configuration                                     ##
// ##########################################################################################

// You can use either PWM (pulse width modulation) or PDM (pulse density modulation) for
// extruders or coolers. PDM will give more signal changes per second, so on average it gives
// the cleaner signal. The only advantage of PWM is giving signals at a fixed rate and never more
// then PWM.
#define PDM_FOR_EXTRUDER 1
#define PDM_FOR_COOLER 1

// The firmware checks if the heater and sensor got decoupled, which is dangerous. Since it will never reach target
// temperature, the heater will stay on for every which can burn your printer or house.
// As an additional barrier to your smoke detectors (I hope you have one above your printer) we now
// do some more checks to detect if something got wrong.

// If the temp. is on hold target, it may not sway more then this degrees celsius, or we mark
// sensor as defect.
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 0
#define RETRACT_ON_PAUSE 2
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""
#define SHARED_EXTRUDER_HEATER 0
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0
// for skeinforge 40 and later, steps to pull the plastic 1 mm inside the extruder, not out.  Overridden if EEPROM activated.
#define EXT0_STEPS_PER_MM 413 //385
// What type of sensor is used?
// 0 is no thermistor/temperature control
// 1 is 100k thermistor (Epcos B57560G0107F000 - RepRap-Fab.org and many other)
// 2 is 200k thermistor
// 3 is mendel-parts thermistor (EPCOS G550)
// 4 is 10k thermistor
// 8 is ATC Semitec 104GT-2
// 12 is 100k RS thermistor 198-961
// 13 is PT100 for E3D/Ultimaker
// 14 is 100K NTC 3950
// 15 DYZE DESIGN 500°C Thermistor
// 16 is B3 innovations 500°C sensor
// 5 is userdefined thermistor table 0
// 6 is userdefined thermistor table 1
// 7 is userdefined thermistor table 2
// 50 is userdefined thermistor table 0 for PTC thermistors
// 51 is userdefined thermistor table 0 for PTC thermistors
// 52 is userdefined thermistor table 0 for PTC thermistors
// 60 is AD8494, AD8495, AD8496 or AD8497 (5mV/degC and 1/4 the price of AD595 but only MSOT_08 package)
// 61 is AD8494, AD8495, AD8496 or AD8497 (5mV/degC and 1.25 Vref offset like adafruit breakout)
// 97 Generic thermistor table 1
// 98 Generic thermistor table 2
// 99 Generic thermistor table 3
// 100 is AD595
// 101 is MAX6675
// 102 is MAX31855
#define EXT0_TEMPSENSOR_TYPE 1
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 0
#define EXT0_ENABLE_PIN ORIG_E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MIRROR_STEPPER 0
#define EXT0_STEP2_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR2_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE2 0
#define EXT0_ENABLE2_PIN ORIG_E0_ENABLE_PIN
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 3
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 230
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 7
#define EXT0_PID_I 2
#define EXT0_PID_D 40
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN -1
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define EXT0_DECOUPLE_TEST_PERIOD 12000
#define EXT0_JAM_PIN -1
/** Pull-up resistor for jam pin? */
#define EXT0_JAM_PULLUP false
/* Temperature when using preheat */
#define EXT0_PREHEAT_TEMP 190
// =========================== Configuration for second extruder ========================
#define EXT1_X_OFFSET 0
#define EXT1_Y_OFFSET 0
#define EXT1_Z_OFFSET 0
// for skeinforge 40 and later, steps to pull the plastic 1 mm inside the extruder, not out.  Overridden if EEPROM activated.
#define EXT1_STEPS_PER_MM 373
// What type of sensor is used?
// 0 is no thermistor/temperature control
// 1 is 100k thermistor (Epcos B57560G0107F000 - RepRap-Fab.org and many other)
// 2 is 200k thermistor
// 3 is mendel-parts thermistor (EPCOS G550)
// 4 is 10k thermistor
// 5 is userdefined thermistor table 0
// 6 is userdefined thermistor table 1
// 7 is userdefined thermistor table 2
// 8 is ATC Semitec 104GT-2
// 50 is userdefined thermistor table 0 for PTC thermistors
// 51 is userdefined thermistor table 0 for PTC thermistors
// 52 is userdefined thermistor table 0 for PTC thermistors
// 60 is AD8494, AD8495, AD8496 or AD8497 (5mV/degC and 1/4 the price of AD595 but only MSOT_08 package)
// 61 is AD8494, AD8495, AD8496 or AD8497 (5mV/degC and 1.25 Vref offset like adafruit breakout)
// 97 Generic thermistor table 1
// 98 Generic thermistor table 2
// 99 Generic thermistor table 3
// 100 is AD595
// 101 is MAX6675
#define EXT1_TEMPSENSOR_TYPE 3
// Analog input pin for reading temperatures or pin enabling SS for MAX6675
#define EXT1_TEMPSENSOR_PIN TEMP_2_PIN
// Which pin enables the heater
#define EXT1_HEATER_PIN HEATER_2_PIN
#define EXT1_STEP_PIN E1_STEP_PIN
#define EXT1_DIR_PIN E1_DIR_PIN
// set to 0/1 for normal / inverse direction
#define EXT1_INVERSE false
#define EXT1_ENABLE_PIN E1_ENABLE_PIN
// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
#define EXT1_ENABLE_ON false
/* Set to 1 to mirror motor. Pins for mirrored motor are below */
#define EXT1_MIRROR_STEPPER 0
#define EXT1_STEP2_PIN E0_STEP_PIN
#define EXT1_DIR2_PIN E0_DIR_PIN
#define EXT1_INVERSE2 false
#define EXT1_ENABLE2_PIN E0_ENABLE_PIN
// The following speed settings are for skeinforge 40+ where e is the
// length of filament pulled inside the heater. For repsnap or older
// skeinforge use heigher values.
//  Overridden if EEPROM activated.
#define EXT1_MAX_FEEDRATE 25
// Feedrate from halted extruder in mm/s
//  Overridden if EEPROM activated.
#define EXT1_MAX_START_FEEDRATE 12
// Acceleration in mm/s^2
//  Overridden if EEPROM activated.
#define EXT1_MAX_ACCELERATION 10000
/** Type of heat manager for this extruder.
- 0 = Simply switch on/off if temperature is reached. Works always.
- 1 = PID Temperature control. Is better but needs good PID values. Defaults are a good start for most extruder.
 Overridden if EEPROM activated.
*/
#define EXT1_HEAT_MANAGER 1
/** Wait x seconds, after reaching target temperature. Only used for M109.  Overridden if EEPROM activated. */
#define EXT1_WATCHPERIOD 1

/** \brief The maximum value, I-gain can contribute to the output.

A good value is slightly higher then the output needed for your temperature.
Values for starts:
130 => PLA for temperatures from 170-180 deg C
180 => ABS for temperatures around 240 deg C

The precise values may differ for different nozzle/resistor combination.
 Overridden if EEPROM activated.
*/
#define EXT1_PID_INTEGRAL_DRIVE_MAX 130
/** \brief lower value for integral part

The I state should converge to the exact heater output needed for the target temperature.
To prevent a long deviation from the target zone, this value limits the lower value.
A good start is 30 lower then the optimal value. You need to leave room for cooling.
 Overridden if EEPROM activated.
*/
#define EXT1_PID_INTEGRAL_DRIVE_MIN 60
/** P-gain.  Overridden if EEPROM activated. */
#define EXT1_PID_PGAIN_OR_DEAD_TIME   24
/** I-gain.  Overridden if EEPROM activated.
*/
#define EXT1_PID_I   0.88
/** D-gain.  Overridden if EEPROM activated.*/
#define EXT1_PID_D 200
// maximum time the heater is can be switched on. Max = 255.  Overridden if EEPROM activated.
#define EXT1_PID_MAX 255
/** \brief Faktor for the advance algorithm. 0 disables the algorithm.  Overridden if EEPROM activated.
K is the factor for the quadratic term, which is normally disabled in newer versions. If you want to use
the quadratic factor make sure ENABLE_QUADRATIC_ADVANCE is defined.
L is the linear factor and seems to be working better then the quadratic dependency.
*/
#define EXT1_ADVANCE_K 0.0f
#define EXT1_ADVANCE_L 0.0f
/* Motor steps to remove backlash for advance algorithm. These are the steps
needed to move the motor cog in reverse direction until it hits the driving
cog. Direct drive extruder need 0. */
#define EXT1_ADVANCE_BACKLASH_STEPS 0

#define EXT1_WAIT_RETRACT_TEMP 	150
#define EXT1_WAIT_RETRACT_UNITS	0
#define EXT1_SELECT_COMMANDS "M117 Extruder 2"
#define EXT1_DESELECT_COMMANDS ""
/** The extruder cooler is a fan to cool the extruder when it is heating. If you turn the etxruder on, the fan goes on. */
#define EXT1_EXTRUDER_COOLER_PIN -1
/** PWM speed for the cooler fan. 0=off 255=full speed */
#define EXT1_EXTRUDER_COOLER_SPEED 255
/** Time in ms between a heater action and test of success. Must be more then time between turning heater on and first temp. rise! 
 * 0 will disable decoupling test */
#define EXT1_DECOUPLE_TEST_PERIOD 18000
/** Pin which toggles regularly during extrusion allowing jam control. -1 = disabled */
#define EXT1_JAM_PIN -1
/** Pull-up resistor for jam pin? */
#define EXT1_JAM_PULLUP false
#define EXT1_PREHEAT_TEMP 190

/** If enabled you can select the distance your filament gets retracted during a
M140 command, after a given temperature is reached. */
#define RETRACT_DURING_HEATUP 1

/** Allow retraction with G10/G11 removing requirement for retraction setting in slicer. Also allows filament change if lcd is configured. */
#define FEATURE_RETRACTION 1
#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 3
#define RETRACTION_LONG_LENGTH 13
#define RETRACTION_SPEED 40
#define RETRACTION_Z_LIFT 0
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 20
#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD  2
#define FILAMENTCHANGE_REHOME 1
#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 50
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 1

#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 0
#define USER_THERMISTORTABLE0 {}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 0
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 1
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 0
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000

// When temperature exceeds max temp, your heater will be switched off.
// This feature exists to protect your hotend from overheating accidentally, but *NOT* from thermistor short/failure!
#define MAXTEMP 260

#define HEATED_BED_PREHEAT_TEMP 55

/** Extreme values to detect defect thermistors. */
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 290

//How many milliseconds a hot end will preheat before starting to check the
//temperature. This value should NOT be set to the time it takes the
//hot end to reach the target temperature, but should be set to the time it 
//takes to reach the minimum temperature your thermistor can read. The lower
//the better/safer, and shouldn't need to be more than 30 seconds (30000) 
#define MILLISECONDS_PREHEAT_TIME 30000

// ##########################################################################################
// ##                             Laser configuration                                      ##
// ##########################################################################################

/*
If the firmware is in laser mode, it can control a laser output to cut or engrave materials.
Please use this feature only if you know about safety and required protection. Lasers are
dangerous and can hurt or make you blind!!!

The default laser driver only supports laser on and off. Here you control the eíntensity with
your feedrate. For exchangeable diode lasers this is normally enough. If you need more control
you can set the intensity in a range 0-255 with a custom extension to the driver. See driver.h
and comments on how to extend the functions non invasive with our event system.

If you have a laser - powder system you will like your E override. If moves contain a
increasing extruder position it will laser that move. With this trick you can
use existing fdm slicers to laser the output. Laser width is extrusion width.

Other tools may use M3 and M5 to enable/disable laser. Here G1/G2/G3 moves have laser enabled
and G0 moves have it disables.

In any case, laser only enables while moving. At the end of a move it gets
automatically disabled.
*/

#define SUPPORT_LASER 0 // set 1 to enable laser support
#define LASER_PIN -1    // set to pin enabling laser
#define LASER_ON_HIGH 1 // Set 0 if low signal enables laser
#define LASER_WARMUP_TIME 0// wait x milliseconds to start material burning before move
#define LASER_PWM_MAX 255 //255 8-bit PWM 4095 for 12Bit PWM
#define LASER_WATT 1.6  // Laser diode power

// ##                              CNC configuration                                       ##

/*
If the firmware is in CNC mode, it can control a mill with M3/M4/M5. It works
similar to laser mode, but mill keeps enabled during G0 moves and it allows
setting rpm (only with event extension that supports this) and milling direction.
It also can add a delay to wait for spindle to run on full speed.
*/

#define SUPPORT_CNC 0 // Set 1 for CNC support
#define CNC_WAIT_ON_ENABLE 300 // wait x milliseconds after enabling
#define CNC_WAIT_ON_DISABLE 0 // delay in milliseconds after disabling spindle. May be required for direction changes.
#define CNC_ENABLE_PIN -1 // Pin to enable mill
#define CNC_ENABLE_WITH 1 // Set 0 if low enables spindle
#define CNC_DIRECTION_PIN -1 // Set to pin if direction control is possible
#define CNC_DIRECTION_CW 1 // Set signal required for clockwise rotation
#define CNC_PWM_MAX 255  //255 8-bit PWM 4095 for 12Bit PWM
#define CNC_RPM_MAX 25000   //max spindle RPM
#define CNC_SAFE_Z 150  // Safe Z height so tool is outside object, used for pause

/* Select the default mode when the printer gets enables. Possible values are
PRINTER_MODE_FFF 0
PRINTER_MODE_LASER 1
PRINTER_MODE_CNC 2
*/
#define DEFAULT_PRINTER_MODE PRINTER_MODE_FFF

// ################ Endstop configuration #####################

#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_X_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_Y_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_Z_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Z true
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_X false
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Y false
#define MAX_HARDWARE_ENDSTOP_Z true

// If you have a mirrored motor you can put a second endstop to that motor.
// On homing you would then need to trigge rboth endstops. Each endstop only 
// stopps one motor, so they are aligned after homing. After homing only the 
// first endstop gets used.

#define ENDSTOP_PULLUP_X2_MIN false
#define ENDSTOP_PULLUP_Y2_MIN false
#define ENDSTOP_PULLUP_Z2_MINMAX false
#define ENDSTOP_PULLUP_X2_MAX true
#define ENDSTOP_PULLUP_Y2_MAX true

#define ENDSTOP_X2_MIN_INVERTING true
#define ENDSTOP_Y2_MIN_INVERTING true
#define ENDSTOP_X2_MAX_INVERTING true
#define ENDSTOP_Y2_MAX_INVERTING true

#define MIN_HARDWARE_ENDSTOP_X2 false
#define MIN_HARDWARE_ENDSTOP_Y2 false
#define MAX_HARDWARE_ENDSTOP_X2 false
#define MAX_HARDWARE_ENDSTOP_Y2 false
#define MINMAX_HARDWARE_ENDSTOP_Z2 false

#define X2_MIN_PIN -1
#define X2_MAX_PIN -1
#define Y2_MIN_PIN -1
#define Y2_MAX_PIN -1
#define Z2_MINMAX_PIN -1

//If your axes are only moving in one direction, make sure the endstops are connected properly.
//If your axes move in one direction ONLY when the endstops are triggered, set ENDSTOPS_INVERTING to true here

//// ADVANCED SETTINGS - to tweak parameters

// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0

// Disables axis when it's not being used.
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false
/* If you want to keep z motor running on stepper timeout, remove comments below.
  This may be useful if your z bed moves when motors are disabled. Will still
  turn z off when heaters get also disabled. 
*/
//#define PREVENT_Z_DISABLE_ON_STEPPER_TIMEOUT

// Inverting motor direction. Only in case of pure cartesian printers, this
// is also the axis you invert!
#define INVERT_X_DIR 1
#define INVERT_X2_DIR 1
#define INVERT_Y_DIR 1
#define INVERT_Y2_DIR 1
#define INVERT_Z_DIR 1
#define INVERT_Z2_DIR 1
#define INVERT_Z3_DIR 1
#define INVERT_Z4_DIR 1

//// ENDSTOP SETTINGS:
// Sets direction of endstops when homing; 1=MAX, -1=MIN
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR 1

// Delta robot radius endstop
#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z true
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 2
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 0
// If you do z min homing, you might want to rise extruder a bit after homing so it does not heat
// touching your bed.
#define Z_UP_AFTER_HOME 0
// You can disable endstop checking for print moves. This is needed, if you get sometimes
// false signals from your endstops. If your endstops don't give false signals, you
// can set it on for safety.
#define ALWAYS_CHECK_ENDSTOPS 1

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 0
#define INVERT_Y_DIR 0
#define INVERT_Z_DIR 0
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define X_MAX_LENGTH 200
#define Y_MAX_LENGTH 200
#define Z_MAX_LENGTH 120
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define DISTORTION_CORRECTION 0
#define DISTORTION_CORRECTION_POINTS 5
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0
#define DISTORTION_XMIN 10
#define DISTORTION_YMIN 10
#define DISTORTION_XMAX 190
#define DISTORTION_YMAX 190

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves
#define EXACT_DELTA_MOVES 1

// Delta settings
#define DELTA_HOME_ON_POWER 0

#define DELTASEGMENTS_PER_PRINTLINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 200
#define MAX_FEEDRATE_Y 200
#define MAX_FEEDRATE_Z 2
#define HOMING_FEEDRATE_X 40
#define HOMING_FEEDRATE_Y 40
#define HOMING_FEEDRATE_Z 2
#define HOMING_ORDER HOME_ORDER_ZXY
/*
  Raise Z before homing z axis
  0 = no
  1 = if z min is triggered
  2 = always
  This is for printers with z probe used as z min. For homing the probe must be
  at a minimum height for some endstop types, so raising it before will help
  to make sure this is guaranteed. 
*/
#define ZHOME_PRE_RAISE 0
// Distance in mm to raise if required
#define ZHOME_PRE_RAISE_DISTANCE 10

/*
 Raises Z before swapping extruder (tool change) and lowers it afterwards
 Unit is mm (INTEGER NUMBERS ONLY)
 */
#define RAISE_Z_ON_TOOLCHANGE 0

// Used for homing order HOME_ORDER_ZXYTZ
#define ZHOME_MIN_TEMPERATURE 0
#define ZHOME_HEAT_ALL 1
#define ZHOME_HEAT_HEIGHT 20
// If your bed might bend while probing, because your sensor is the extruder tip
// you can define a predefined x,y position so bending is always the same and
// can be compensated. Set coordinate to 999999 to ignore positions and just
// use the position you are at.
#define ZHOME_X_POS IGNORE_COORDINATE
#define ZHOME_Y_POS IGNORE_COORDINATE

/* If you have a backlash in both z-directions, you can use this. For most printer, the bed will be pushed down by it's
own weight, so this is nearly never needed. */
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define DIRECTION_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 0 // time in microseconds
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 100
#define INTERPOLATE_ACCELERATION_WITH_Z 0
#define ACCELERATION_FACTOR_TOP 100
#define MAX_JERK 20
#define MAX_ZJERK 0.3

/** \brief Number of moves we can cache in advance.

This number of moves can be cached in advance. If you want to cache more, increase this. Especially on
many very short moves the cache may go empty. The minimum value is 5.
*/
#define PRINTLINE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define EXTRUDER_SWITCH_XY_SPEED 100
#define DUAL_X_AXIS 0
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   ORIG_E2_STEP_PIN
#define Z3_DIR_PIN    ORIG_E2_DIR_PIN
#define Z3_ENABLE_PIN ORIG_E2_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE 0
#define ENABLE_QUADRATIC_ADVANCE 0


// ################# Misc. settings ##################

//// AD595 THERMOCOUPLE SUPPORT UNTESTED... USE WITH CAUTION!!!!

/** \brief Communication speed.

- 250000 : Fastest with error rate of 0% with 16 or 32 MHz - update wiring_serial.c in your board files. See boards/readme.txt
- 115200 : Fast, but may produce communication errors on quite regular basis, Error rate -3,5%
- 76800 : Best setting for Arduino with 16 MHz, Error rate 0,2% page 198 AVR1284 Manual. Result: Faster communication then 115200
- 57600 : Should produce nearly no errors, on my gen 6 it's faster than 115200 because there are no errors slowing down the connection
- 38600

 Overridden if EEPROM activated.
*/
//#define BAUDRATE 76800
#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0

/** Automatically enable power when temperatures or moves/homing is used. Set only to 1 if
 *you have a power unit controlled by PS_ON_PIN! */
#define AUTOMATIC_POWERUP 0

/** What shall the printer do, when it receives an M112 emergency stop signal?
 0 = Disable heaters/motors, wait forever until someone presses reset.
 1 = restart by resetting the AVR controller. The USB connection will not reset if managed by a different chip!
*/
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 1
/** Communication errors can swallow part of the ok, which tells the host software to send
the next command. Not receiving it will cause your printer to stop. Sending this string every
second, if our queue is empty should prevent this. Comment it, if you don't want this feature. */
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#define EEPROM_MODE 1
#undef PS_ON_PIN
#define PS_ON_PIN ORIG_PS_ON_PIN
#define JSON_OUTPUT 0

/** \brief EEPROM storage mode

Set the EEPROM_MODE to 0 if you always want to use the settings in this configuration file. If not,
set it to a value not stored in the first EEPROM-byte used. If you later want to overwrite your current
EEPROM settings with configuration defaults, just select an other value. On the first call to epr_init()
it will detect a mismatch of the first byte and copy default values into EEPROM. If the first byte
matches, the stored values are used to overwrite the settings.

IMPORTANT: With mode <>0 some changes in Configuration.h are not set any more, as they are
           taken from the EEPROM.
*/
#define EEPROM_MODE 2


/**************** duplicate motor driver ***************

If you have unused extruder steppers free, you could use it to drive the second or third z motor
instead of driving them with a single stepper. The same works for the other axis if needed.
*/

#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   E1_STEP_PIN
#define X2_DIR_PIN    E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN

/* Dual x axis mean having a printer with x motors and each controls one
extruder position. In that case you can also have different resolutions for the
2 motors. */
#define DUAL_X_AXIS 0
#define DUAL_X_RESOLUTION 0
#define X2AXIS_STEPS_PER_MM 100


#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   E1_STEP_PIN
#define Y2_DIR_PIN    E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN

#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   E1_STEP_PIN
#define Z2_DIR_PIN    E1_DIR_PIN
#define Z2_ENABLE_PIN E1_ENABLE_PIN

#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   E2_STEP_PIN
#define Z3_DIR_PIN    E2_DIR_PIN
#define Z3_ENABLE_PIN E2_ENABLE_PIN

#define FEATURE_FOUR_ZSTEPPER 0
#define Z4_STEP_PIN   E2_STEP_PIN
#define Z4_DIR_PIN    E2_DIR_PIN
#define Z4_ENABLE_PIN E2_ENABLE_PIN

/* Ditto printing allows 2 extruders to do the same action. This effectively allows
to print an object two times at the speed of one. Works only with dual extruder setup.
*/
#define FEATURE_DITTO_PRINTING 0


// ##########################################################################################
// ##                        Trinamic TMC2130 driver configuration                         ##
// ##########################################################################################

/* If you want to use TMC2130 specific features uncomment next line and make sure all
following settings are correct. 
You need this library to compile:
https://github.com/teemuatlut/TMC2130Stepper

*/

// #define DRV_TMC2130

// Uncomment if you use the stall guard for homing. Only for cartesian printers and xy direction
// #define SENSORLESS_HOMING

// The drivers with set CS pin will be used, all others are normal step/dir/enable drivers
#define TMC2130_X_CS_PIN -1
#define TMC2130_Y_CS_PIN -1
#define TMC2130_Z_CS_PIN -1
#define TMC2130_EXT0_CS_PIN -1
#define TMC2130_EXT1_CS_PIN -1
#define TMC2130_EXT2_CS_PIN -1

// Per-axis current setting in mA { X, Y, Z, E0, E1, E2}
#define MOTOR_CURRENT {1000,1000,1000,1000,1000,1000}

/**  Global settings - these apply to all configured drivers
     Per-axis values will override these
*/
#define TMC2130_STEALTHCHOP         1  // Enable extremely quiet stepping
#define TMC2130_INTERPOLATE_256  true  // Enable internal driver microstep interpolation
#define TMC2130_STALLGUARD          0  // Sensorless homing sensitivity (between -63 and +64)

/** PWM values for chopper tuning
    only change if you know what you're doing
*/
#define TMC2130_PWM_AMPL          255
#define TMC2130_PWM_GRAD            1
#define TMC2130_PWM_AUTOSCALE    true
#define TMC2130_PWM_FREQ            2

/**  Per-axis parameters

  To define different values for certain parameters on each axis,
  append either _X, _Y, _Z, _EXT0, _EXT1 or _EXT2 
  to the name of the global parameter.

  Examples for the X axis:

  #define TMC2130_STEALTHCHOP_X         1
  #define TMC2130_INTERPOLATE_256_X  true
*/

/** Minimum speeds for stall detection.

  These values may need to be adjusted if SENSORLESS_HOMING is enabled,
  but endstops trigger prematurely or don't trigger at all. 
  The exact value is dependent on the duration of one microstep,
  but good approximations can be determined by experimentation.
*/
#define TMC2130_TCOOLTHRS_X 300
#define TMC2130_TCOOLTHRS_Y 300
#define TMC2130_TCOOLTHRS_Z 300

/* Servos

If you need to control servos, enable this feature. You can control up to 4 servos.
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 0
#define FAN_KICKSTART_TIME  200
/** Defines the max. fan speed for M106 controlled fans. Normally 255 to use full range, but for
 12V fans on 24V this might help preventing a defect. For all other fans there is a explicit maximum PWM value
 you can set, so this is not used for other fans! */
#define MAX_FAN_PWM 255

        #define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################

#define Z_PROBE_Z_OFFSET 0
#define Z_PROBE_Z_OFFSET_MODE 0
#define UI_BED_COATING 1
#define FEATURE_Z_PROBE 1
// Especially if you have more then 1 extruder acting as z probe this is important!
#define EXTRUDER_IS_Z_PROBE 0
// Disable all heaters before probing - required for inductive sensors
#define Z_PROBE_DISABLE_HEATERS 0
#define Z_PROBE_PIN 63
#define Z_PROBE_PULLUP 1
#define Z_PROBE_ON_HIGH 1
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
/** Delay before going down. Needed for piezo endstops to reload safely. */
#define Z_PROBE_DELAY 0
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_HEIGHT 12.3
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define Z_PROBE_REQUIRES_HEATING 0
#define Z_PROBE_MIN_TEMPERATURE 150
#define FEATURE_AUTOLEVEL 1
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 100
#define Z_PROBE_Y3 160
#define BED_LEVELING_METHOD 0
#define BED_CORRECTION_METHOD 0
#define BED_LEVELING_GRID_SIZE 5
#define BED_LEVELING_REPETITIONS 5
#define BED_MOTOR_1_X 0
#define BED_MOTOR_1_Y 0
#define BED_MOTOR_2_X 200
#define BED_MOTOR_2_Y 0
#define BED_MOTOR_3_X 100
#define BED_MOTOR_3_Y 200
#define BENDING_CORRECTION_A 0
#define BENDING_CORRECTION_B 0
#define BENDING_CORRECTION_C 0

/* DISTORTION_CORRECTION compensates the distortion caused by mechanical imprecisions of nonlinear (i.e. DELTA) printers
 * assumes that the floor is plain (i.e. glass plate)
 *     and that it is perpendicular to the towers
 *     and that the (0,0) is in center
 * requires z-probe
 * G33 measures the Z offset in matrix NxN points (due to nature of the delta printer, the corners are extrapolated instead of measured)
 * and compensate the distortion
 * more points means better compensation, but consumes more memory and takes more time
 * DISTORTION_CORRECTION_R is the distance of last row or column from center
 */

#define DISTORTION_CORRECTION         1
#define DISTORTION_CORRECTION_POINTS  5
/** Max. distortion value to enter. Used to prevent dangerous errors with big values. */
#define DISTORTION_LIMIT_TO 2
/* For delta printers you simply define the measured radius around origin */
#define DISTORTION_CORRECTION_R       80
/* For all others you define the correction rectangle by setting the min/max coordinates. Make sure the the probe can reach all points! */
#define DISTORTION_XMIN 10
#define DISTORTION_YMIN 10
#define DISTORTION_XMAX 190
#define DISTORTION_YMAX 190

/** Uses EEPROM instead of ram. Allows bigger matrix (up to 22x22) without any ram cost.
  Especially on arm based systems with cached EEPROM it is good, on AVR it has a small
  performance penalty.
*/
#define DISTORTION_PERMANENT          1
/** Correction computation is not a cheap operation and changes are only small. So it
is not necessary to update it for every sub-line computed. For example lets take DELTA_SEGMENTS_PER_SECOND_PRINT = 150
and fastest print speed 100 mm/s. So we have a maximum segment length of 100/150 = 0.66 mm.
Now lats say our point field is 200 x 200 mm with 9 x 9 points. So between 2 points we have
200 / (9-1) = 25 mm. So we need at least 25 / 0.66 = 37 lines to move to the next measuring
point. So updating correction every 15 calls gives us at least 2 updates between the
measured points.
NOTE: Explicit z changes will always trigger an update!
*/
#define DISTORTION_UPDATE_FREQUENCY   15
/** z distortion degrades to 0 from this height on. You should start after the first layer to get
best bonding with surface. */
#define DISTORTION_START_DEGRADE 0.5
/** z distortion correction gets down to 0 at this height. */
#define DISTORTION_END_HEIGHT 1.5
/** If your corners measurement points are not measurable with given radius, you can
set this to 1. It then omits the outer measurement points allowing a larger correction area.*/
#define DISTORTION_EXTRAPOLATE_CORNERS 0

/* If your printer is not exactly square but is more like a parallelogram, you can
use this to compensate the effect of printing squares like parallelograms. Set the
parameter to then tangents of the deviation from 90° when you print a square object.
E.g. if you angle is 91° enter tan(1) = 0.017. If error doubles you have the wrong sign.
Always hard to say since the other angle is 89° in this case!
*/
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0



/** \brief Experimental calibration utility for delta printers
 * Change 1 to 0 to disable
*/
#define FEATURE_SOFTWARE_LEVELING 0

/* Babystepping allows to change z height during print without changing official z height */
#define FEATURE_BABYSTEPPING 0
/* If you have a threaded rod, you want a higher multiplicator to see an effect. Limit value to 50 or you get easily overflows.*/
#define BABYSTEP_MULTIPLICATOR 1

/* Define a pin to turn light on/off */
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1

/** Set to false to disable SD support: */
#ifndef SDSUPPORT  // Some boards have SD support on board. These define the values already in pins.h
#define SDSUPPORT false
// Uncomment to enable or change card detection pin. With card detection the card is mounted on insertion.
#undef SDCARDDETECT
#define SDCARDDETECT -1
#define SDCARDDETECTINVERTED 0
#endif
/** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_EXTENDED_DIR 1
/** The GCODEs in this line get executed, when you stop a SD print before it was ended.
Separate commands by \n */
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_FAN2_CONTROL 0
//#define FAN2_PIN ORIG_FAN2_PIN

/* By setting FAN_BOARD_PIN to a pin number you get a board cooler. That fan 
goes on as soon as moves occur. Mainly to prevent overheating of stepper drivers. */
//#undef FAN_BOARD_PIN
//#define FAN_BOARD_PIN ORIG_FAN_PIN
/** Speed of board fan when on. 0 = off, 255 = max */
#define BOARD_FAN_SPEED 255
/* Speed when no cooling is required. Normally 0 but if you need slightly cooling
it can be set here */
#define BOARD_FAN_MIN_SPEED 0
/* You can have one additional fan controlled by a temperature. You can set
   set at which temperature it should turn on and at which it should reach max. speed.
*/
#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
// Analog pin number or channel for due boards
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1

/** The door pin is to detect a door opening. This will prevent new command
 from serial or sd card getting executed. It will not stop immediately. Instead
 it lets the move buffer run empty so closing the door allows continuing the print.
 The exact behavior might change in the future.
  */
 
#define DOOR_PIN -1
#define DOOR_PULLUP 1
#define DOOR_INVERTING 1

/** Adds support for ESP8266 Duet web interface, PanelDue and probably some other things. 
 * This essentially adds command M36/M408 and extends M20.
 * Since it requires some memory do not enable it unless you have such a display!
 *  */
#define FEATURE_JSON 0

/** For displays and keys there are too many permutations to handle them all in once.
For the most common available combinations you can set the controller type here, so
you don't need to configure uicong.h at all. Controller settings > 1 disable usage
of uiconfig.h

0 or NO_CONTROLLER = no display
1 or UICONFIG_CONTROLLER = Manual definition of display and keys parameter in uiconfig.h

The following settings override uiconfig.h!
2 or CONTROLLER_SMARTRAMPS = Smartcontroller from reprapdiscount on a RAMPS or RUMBA board
3 or CONTROLLER_ADAFRUIT = Adafruit RGB controller
4 or CONTROLLER_FOLTYN = Foltyn 3DMaster with display attached
5 or CONTROLLER_VIKI = ViKi LCD - Check pin configuration in ui.h for feature controller 5!!! sd card disabled by default!
6 or CONTROLLER_MEGATRONIC = ReprapWorld Keypad / LCD, predefined pins for Megatronics v2.0 and RAMPS 1.4. Please check if you have used the defined pin layout in ui.h.
7 or CONTROLLER_RADDS = RADDS Extension Port
8 or CONTROLLER_PIBOT20X4 = PiBot Display/Controller extension with 20x4 character display
9 or CONTROLLER_PIBOT16X2 = PiBot Display/Controller extension with 16x2 character display
10 or CONTROLLER_GADGETS3D_SHIELD = Gadgets3D shield on RAMPS 1.4, see http://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
11 or CONTROLLER_REPRAPDISCOUNT_GLCD = RepRapDiscount Full Graphic Smart Controller
12 or CONTROLLER_FELIX = FELIXPrinters Controller
13 or CONTROLLER_RAMBO = SeeMeCNC Display on Rambo (ORION)
14 or CONTROLLER_OPENHARDWARE_LCD2004 = OpenHardware.co.za LCD2004 V2014
15 or CONTROLLER_SANGUINOLOLU_PANELOLU2 = Sanguinololu + Panelolu2
16 or CONTROLLER_GAMEDUINO2 (in development)
17 or CONTROLLER_MIREGLI 17
18 or CONTROLLER_GATE_3NOVATICA Gate Controller from 3Novatica
21 or CONTROLLER_VIKI2 Panucatt VIKI2 graphic lcd
24 or CONTROLLER_ZONESTAR = Zonestar P802M with LCD 20x4 and 5 ADC button keypad
25 or CONTROLLER_ORCABOTXXLPRO2 
26 or CONTROLLER_AZSMZ_12864 
405 or CONTROLLER_FELIX_DUE Felix LCD für due based board
27 or CONTROLLER_REPRAPWORLD_GLCD = ReprapWorld Graphical LCD
*/

#define FEATURE_CONTROLLER NO_CONTROLLER

/* You can have one keypad connected via single analog pin as seen on
 some printers with Melzi V2.0 board, 20x4 LCD and 5 buttons keypad. This must be
 the analog pin number! */
#define ADC_KEYPAD_PIN -1

/**
Select the languages to use. On first startup user can select
the language from a menu with activated languages. In Configuration->Language
the language can be switched any time. 
On 8 bit processors do not active all or you run out of text memory (64kb)
and strange errors occur. 8-9 languages normally work.
*/
#define LANGUAGE_EN_ACTIVE 1 // English
#define LANGUAGE_DE_ACTIVE 1 // German
#define LANGUAGE_NL_ACTIVE 0 // Dutch
#define LANGUAGE_PT_ACTIVE 1 // Brazilian Portuguese
#define LANGUAGE_IT_ACTIVE 1 // Italian
#define LANGUAGE_ES_ACTIVE 1 // Spanish
#define LANGUAGE_FI_ACTIVE 0 // Finnish
#define LANGUAGE_SE_ACTIVE 0 // Swedish
#define LANGUAGE_FR_ACTIVE 1 // French
#define LANGUAGE_CZ_ACTIVE 0 // Czech
#define LANGUAGE_PL_ACTIVE 1 // Polish
#define LANGUAGE_TR_ACTIVE 1 // Turkish

/* Some displays loose their settings from time to time. Try uncommenting the
auto-repair function if this is the case. It is not supported for all display
types. It creates a minimal flicker from time to time and also slows down
computations, so do not enable it if your display works stable!
*/
//#define TRY_AUTOREPAIR_LCD_ERRORS

// This is line 2 of the status display at startup. Change to your like.
#define UI_PRINTER_NAME "MyPrinter"
#define UI_PRINTER_COMPANY "Self Made"


/** For graphic displays you can have a fixed top line. It can also contain
 * dynamic modifiers. Do not define it if you want full 6 rows of data */
//#define UI_HEAD "E1:%e0/%E0 E2:%e1/%E1 B:%eb/%Eb"

/** How many ms should a single page be shown, until it is switched to the next one.*/
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 0
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_REVERSE_ENCODER 0
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8

// ###############################################################################
// ##                         Values for menu settings                          ##
// ###############################################################################

/*
If you have leveling with bed coating or fixed z min you can use this menu to adjust 
0 height with a simple bed coating menu which adds coating thickness.
*/
#define UI_BED_COATING 0
// Extreme values
#define UI_SET_MIN_HEATED_BED_TEMP  50
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3


/*
#define USER_KEY1_PIN     UI_DISPLAY_D5_PIN      // D5 to display (not used for graphics controller), change to other pin if you use character LCD !
#define USER_KEY1_ACTION  UI_ACTION_FAN_SUSPEND
#define USER_KEY2_PIN     UI_DISPLAY_D6_PIN      // D6 to display (not used for graphics controller)...
#define USER_KEY2_ACTION  UI_ACTION_SD_PRI_PAU_CONT
#define USER_KEY3_PIN     UI_DISPLAY_D7_PIN      // D7 to display (not used for graphics controller)...
#define USER_KEY3_ACTION  UI_ACTION_LIGHTS_ONOFF
#define USER_KEY4_PIN     -1
#define USER_KEY4_ACTION  UI_ACTION_DUMMY
*/

#define NUM_MOTOR_DRIVERS 0

#define USER_QUICK_MENU_Z_PROBE_HEIGHT_USER_CHANGE
#define UI_Z_PROBE_HEIGHT_USER_CHANGE 1
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1 "G28\n G92 E0\n G91\n M109 S210\n G1 E100 F6000\n G1 E100 F6000\n G1 E100 F6000\n G1 E100 F6000\n G1 E100 F6000\n G1 E100 F6000\n G1 E50 F6000\n G1 E50 F1000\n G1 E50 F200\n G90\n G92 E0\n M84"
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_1_TEXT "Load Filament"
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2 "G28\n G92 E0\n G91\n M109 S210\n G1 E20 F200\n G1 E-100 F6000\n G90\n G92 E0\n M84"
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_2_TEXT "Unload Filament"
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3 "G28\n G92 E0\n G91\n M109 S210\n G1 E50 F200\n G90\n G92 E0\n M84"
#define USER_QUICK_MENU_ITEM_CUSTOM_SCRIPT_3_TEXT "Purge Filament"

#define NUM_MOTOR_DRIVERS 0
// #define MOTOR_DRIVER_x StepperDriver<int stepPin, int dirPin, int enablePin,bool invertDir, bool invertEnable>(float stepsPerMM,float speed)
// #define MOTOR_DRIVER_x StepperDriverWithEndstop<int stepPin, int dirPin, int enablePin,bool invertDir, bool invertEnable,int endstop_pin,bool minEndstop,minEndstop, bool endstopPullup> var(300,10,50)
#define MOTOR_DRIVER_1(var) StepperDriver<E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, false, false> var(float stepsPerMM,float speed,float maxXPos)






#endif

/* Below you will find the configuration string, that created this Configuration.h

========== Start configuration string ==========
{
    "editMode": 1,
    "processor": 0,
    "baudrate": 115200,
    "bluetoothSerial": -1,
    "bluetoothBaudrate": 115200,
    "xStepsPerMM": 80,
    "yStepsPerMM": 80,
    "zStepsPerMM": 80,
    "xInvert": 0,
    "xInvertEnable": 0,
    "eepromMode": 1,
    "yInvert": 0,
    "yInvertEnable": 0,
    "zInvert": 0,
    "zInvertEnable": 0,
    "extruder": [
        {
            "id": 0,
            "heatManager": 3,
            "pidDriveMin": 40,
            "pidDriveMax": 230,
            "pidMax": 255,
            "sensorType": 1,
            "sensorPin": "TEMP_0_PIN",
            "heaterPin": "HEATER_0_PIN",
            "maxFeedrate": 50,
            "startFeedrate": 20,
            "invert": "0",
            "invertEnable": "0",
            "acceleration": 5000,
            "watchPeriod": 1,
            "pidP": 7,
            "pidI": 2,
            "pidD": 40,
            "advanceK": 0,
            "advanceL": 0,
            "waitRetractTemp": 150,
            "waitRetractUnits": 0,
            "waitRetract": 0,
            "stepsPerMM": 370,
            "coolerPin": -1,
            "coolerSpeed": 255,
            "selectCommands": "",
            "deselectCommands": "",
            "xOffset": 0,
            "yOffset": 0,
            "zOffset": 0,
            "xOffsetSteps": 0,
            "yOffsetSteps": 0,
            "zOffsetSteps": 0,
            "stepper": {
                "name": "Extruder 0",
                "step": "ORIG_E0_STEP_PIN",
                "dir": "ORIG_E0_DIR_PIN",
                "enable": "ORIG_E0_ENABLE_PIN"
            },
            "advanceBacklashSteps": 0,
            "decoupleTestPeriod": 12,
            "jamPin": -1,
            "jamPullup": "0",
            "mirror": "0",
            "invert2": "0",
            "stepper2": {
                "name": "Extruder 0",
                "step": "ORIG_E0_STEP_PIN",
                "dir": "ORIG_E0_DIR_PIN",
                "enable": "ORIG_E0_ENABLE_PIN"
            }
        }
    ],
    "uiLanguage": 0,
    "uiController": 0,
    "xMinEndstop": 1,
    "yMinEndstop": 1,
    "zMinEndstop": 1,
    "xMaxEndstop": 0,
    "yMaxEndstop": 0,
    "zMaxEndstop": 0,
    "motherboard": 80,
    "driveSystem": 0,
    "xMaxSpeed": 200,
    "xHomingSpeed": 40,
    "xTravelAcceleration": 1000,
    "xPrintAcceleration": 1000,
    "yMaxSpeed": 200,
    "yHomingSpeed": 40,
    "yTravelAcceleration": 1000,
    "yPrintAcceleration": 1000,
    "zMaxSpeed": 2,
    "zHomingSpeed": 2,
    "zTravelAcceleration": 100,
    "zPrintAcceleration": 100,
    "xMotor": {
        "name": "X motor",
        "step": "ORIG_X_STEP_PIN",
        "dir": "ORIG_X_DIR_PIN",
        "enable": "ORIG_X_ENABLE_PIN"
    },
    "yMotor": {
        "name": "Y motor",
        "step": "ORIG_Y_STEP_PIN",
        "dir": "ORIG_Y_DIR_PIN",
        "enable": "ORIG_Y_ENABLE_PIN"
    },
    "zMotor": {
        "name": "Z motor",
        "step": "ORIG_Z_STEP_PIN",
        "dir": "ORIG_Z_DIR_PIN",
        "enable": "ORIG_Z_ENABLE_PIN"
    },
    "enableBacklash": "0",
    "backlashX": 0,
    "backlashY": 0,
    "backlashZ": 0,
    "stepperInactiveTime": 360,
    "maxInactiveTime": 0,
    "xMinPos": 0,
    "yMinPos": 0,
    "zMinPos": 0,
    "xLength": 200,
    "yLength": 200,
    "zLength": 120,
    "alwaysCheckEndstops": "1",
    "disableX": "0",
    "disableY": "0",
    "disableZ": "0",
    "disableE": "0",
    "xHomeDir": "-1",
    "yHomeDir": "-1",
    "zHomeDir": "-1",
    "xEndstopBack": 1,
    "yEndstopBack": 1,
    "zEndstopBack": 0,
    "deltaSegmentsPerSecondPrint": 180,
    "deltaSegmentsPerSecondTravel": 70,
    "deltaDiagonalRod": 445,
    "deltaHorizontalRadius": 209.25,
    "deltaAlphaA": 210,
    "deltaAlphaB": 330,
    "deltaAlphaC": 90,
    "deltaDiagonalCorrA": 0,
    "deltaDiagonalCorrB": 0,
    "deltaDiagonalCorrC": 0,
    "deltaMaxRadius": 150,
    "deltaFloorSafetyMarginMM": 15,
    "deltaRadiusCorrA": 0,
    "deltaRadiusCorrB": 0,
    "deltaRadiusCorrC": 0,
    "deltaXOffsetSteps": 0,
    "deltaYOffsetSteps": 0,
    "deltaZOffsetSteps": 0,
    "deltaSegmentsPerLine": 24,
    "stepperHighDelay": 0,
    "directionDelay": 0,
    "stepDoublerFrequency": 12000,
    "allowQuadstepping": "1",
    "doubleStepDelay": 0,
    "maxJerk": 20,
    "maxZJerk": 0.3,
    "moveCacheSize": 16,
    "moveCacheLow": 10,
    "lowTicksPerMove": 250000,
    "enablePowerOnStartup": "1",
    "echoOnExecute": "1",
    "sendWaits": "1",
    "ackWithLineNumber": "1",
    "killMethod": 1,
    "useAdvance": "0",
    "useQuadraticAdvance": "0",
    "powerInverting": 0,
    "mirrorX": 0,
    "mirrorXMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "mirrorY": 0,
    "mirrorYMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "mirrorZ": "0",
    "mirrorZMotor": {
        "name": "Extruder 1",
        "step": "ORIG_E1_STEP_PIN",
        "dir": "ORIG_E1_DIR_PIN",
        "enable": "ORIG_E1_ENABLE_PIN"
    },
    "mirrorZ3": "0",
    "mirrorZ3Motor": {
        "name": "Extruder 2",
        "step": "ORIG_E2_STEP_PIN",
        "dir": "ORIG_E2_DIR_PIN",
        "enable": "ORIG_E2_ENABLE_PIN"
    },
    "dittoPrinting": "0",
    "featureServos": "0",
    "servo0Pin": 11,
    "servo1Pin": -1,
    "servo2Pin": -1,
    "servo3Pin": -1,
    "featureWatchdog": "0",
    "hasHeatedBed": "0",
    "enableZProbing": "1",
    "extrudeMaxLength": 160,
    "homeOrder": "HOME_ORDER_ZXY",
    "featureController": 11,
    "uiPrinterName": "RepRap",
    "uiPrinterCompany": "Home made",
    "uiPagesDuration": 4000,
    "uiAnimation": "0",
    "uiDisablePageswitch": "1",
    "uiAutoReturnAfter": 30000,
    "featureKeys": "0",
    "uiEncoderSpeed": 1,
    "uiReverseEncoder": "0",
    "uiKeyBouncetime": 10,
    "uiKeyFirstRepeat": 500,
    "uiKeyReduceRepeat": 50,
    "uiKeyMinRepeat": 50,
    "featureBeeper": "0",
    "uiPresetBedTempPLA": 60,
    "uiPresetBedABS": 110,
    "uiPresetExtruderPLA": 190,
    "uiPresetExtruderABS": 240,
    "uiMinHeatedBed": 30,
    "uiMaxHeatedBed": 120,
    "uiMinEtxruderTemp": 170,
    "uiMaxExtruderTemp": 260,
    "uiExtruderFeedrate": 2,
    "uiExtruderRetractDistance": 3,
    "uiSpeeddependentPositioning": "0",
    "maxBedTemperature": 120,
    "bedSensorType": 1,
    "bedSensorPin": "TEMP_1_PIN",
    "bedHeaterPin": "HEATER_1_PIN",
    "bedHeatManager": 0,
    "bedUpdateInterval": 5000,
    "bedPidDriveMin": 80,
    "bedPidDriveMax": 255,
    "bedPidP": 196,
    "bedPidI": 33,
    "bedPidD": 290,
    "bedPidMax": 255,
    "bedDecoupleTestPeriod": 300,
    "caseLightPin": -1,
    "caseLightDefaultOn": "1",
    "bedSkipIfWithin": 3,
    "gen1T0": 25,
    "gen1R0": 100000,
    "gen1Beta": 4036,
    "gen1MinTemp": -20,
    "gen1MaxTemp": 300,
    "gen1R1": 0,
    "gen1R2": 4700,
    "gen2T0": 25,
    "gen2R0": 100000,
    "gen2Beta": 4036,
    "gen2MinTemp": -20,
    "gen2MaxTemp": 300,
    "gen2R1": 0,
    "gen2R2": 4700,
    "gen3T0": 25,
    "gen3R0": 100000,
    "gen3Beta": 4036,
    "gen3MinTemp": -20,
    "gen3MaxTemp": 300,
    "gen3R1": 0,
    "gen3R2": 4700,
    "userTable0": {
        "r1": 0,
        "r2": 4700,
        "temps": [],
        "numEntries": 0
    },
    "userTable1": {
        "r1": 0,
        "r2": 4700,
        "temps": [],
        "numEntries": 0
    },
    "userTable2": {
        "r1": 0,
        "r2": 4700,
        "temps": [],
        "numEntries": 0
    },
    "tempHysteresis": 0,
    "pidControlRange": 20,
    "skipM109Within": 2,
    "extruderFanCoolTemp": 50,
    "minTemp": 150,
    "maxTemp": 275,
    "minDefectTemp": -10,
    "maxDefectTemp": 290,
    "arcSupport": "1",
    "featureMemoryPositionWatchdog": "1",
    "forceChecksum": "0",
    "sdExtendedDir": "1",
    "featureFanControl": "1",
    "fanPin": "ORIG_FAN_PIN",
    "featureFan2Control": "0",
    "fan2Pin": "ORIG_FAN2_PIN",
    "fanThermoPin": -1,
    "fanThermoMinPWM": 128,
    "fanThermoMaxPWM": 255,
    "fanThermoMinTemp": 45,
    "fanThermoMaxTemp": 60,
    "fanThermoThermistorPin": -1,
    "fanThermoThermistorType": 1,
    "scalePidToMax": 0,
    "zProbePin": -1,
    "zProbeBedDistance": 10,
    "zProbePullup": "0",
    "zProbeOnHigh": "0",
    "zProbeXOffset": 0,
    "zProbeYOffset": 0,
    "zProbeWaitBeforeTest": "0",
    "zProbeSpeed": 2,
    "zProbeXYSpeed": 150,
    "zProbeHeight": 12.3,
    "zProbeStartScript": "",
    "zProbeFinishedScript": "",
    "featureAutolevel": "1",
    "zProbeX1": 20,
    "zProbeY1": 20,
    "zProbeX2": 160,
    "zProbeY2": 20,
    "zProbeX3": 100,
    "zProbeY3": 160,
    "zProbeSwitchingDistance": 1,
    "zProbeRepetitions": 1,
    "sdSupport": "0",
    "sdCardDetectPin": -1,
    "sdCardDetectInverted": "0",
    "uiStartScreenDelay": 1000,
    "xEndstopBackMove": 5,
    "yEndstopBackMove": 5,
    "zEndstopBackMove": 2,
    "xEndstopRetestFactor": 3,
    "yEndstopRetestFactor": 3,
    "zEndstopRetestFactor": 3,
    "xMinPin": "ORIG_X_MIN_PIN",
    "yMinPin": "ORIG_Y_MIN_PIN",
    "zMinPin": "ORIG_Z_MIN_PIN",
    "xMaxPin": "ORIG_X_MAX_PIN",
    "yMaxPin": "ORIG_Y_MAX_PIN",
    "zMaxPin": "ORIG_Z_MAX_PIN",
    "deltaHomeOnPower": "0",
    "fanBoardPin": -1,
    "heaterPWMSpeed": 0,
    "featureBabystepping": "1",
    "babystepMultiplicator": 1,
    "pdmForHeater": "0",
    "pdmForCooler": "0",
    "psOn": "ORIG_PS_ON_PIN",
    "mixingExtruder": "0",
    "decouplingTestMaxHoldVariance": 20,
    "decouplingTestMinTempRise": 1,
    "featureAxisComp": "0",
    "axisCompTanXY": 0,
    "axisCompTanXZ": 0,
    "axisCompTanYZ": 0,
    "retractOnPause": 2,
    "pauseStartCommands": "",
    "pauseEndCommands": "",
    "distortionCorrection": "0",
    "distortionCorrectionPoints": 5,
    "distortionCorrectionR": 100,
    "distortionPermanent": "1",
    "distortionUpdateFrequency": 15,
    "distortionStartDegrade": 0.5,
    "distortionEndDegrade": 1,
    "distortionExtrapolateCorners": "0",
    "distortionXMin": 10,
    "distortionXMax": 190,
    "distortionYMin": 10,
    "distortionYMax": 190,
    "sdRunOnStop": "",
    "sdStopHeaterMotorsOnStop": "1",
    "featureRetraction": "1",
    "autoretractEnabled": "0",
    "retractionLength": 3,
    "retractionLongLength": 13,
    "retractionSpeed": 40,
    "retractionZLift": 0,
    "retractionUndoExtraLength": 0,
    "retractionUndoExtraLongLength": 0,
    "retractionUndoSpeed": 20,
    "filamentChangeXPos": 0,
    "filamentChangeYPos": 0,
    "filamentChangeZAdd": 2,
    "filamentChangeRehome": 1,
    "filamentChangeShortRetract": 5,
    "filamentChangeLongRetract": 50,
    "fanKickstart": 200,
    "servo0StartPos": -1,
    "servo1StartPos": -1,
    "servo2StartPos": -1,
    "servo3StartPos": -1,
    "uiDynamicEncoderSpeed": "1",
    "uiServoControl": 0,
    "killIfSensorDefect": "0",
    "jamSteps": 220,
    "jamSlowdownSteps": 320,
    "jamSlowdownTo": 70,
    "jamErrorSteps": 500,
    "jamMinSteps": 10,
    "jamAction": 1,
    "primaryPort": 0,
    "numMotorDrivers": 0,
    "motorDrivers": [
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        },
        {
            "t": "None",
            "s": "",
            "invertEnable": "0",
            "invertDirection": "0",
            "stepsPerMM": 100,
            "speed": 10,
            "dirPin": -1,
            "stepPin": -1,
            "enablePin": -1
        }
    ],
    "manualConfig": "",
    "zHomeMinTemperature": 0,
    "zHomeXPos": 999999,
    "zHomeYPos": 999999,
    "zHomeHeatHeight": 20,
    "zHomeHeatAll": "1",
    "zProbeZOffsetMode": 0,
    "zProbeZOffset": 0,
    "uiBedCoating": "1",
    "langEN": "1",
    "langDE": "1",
    "langNL": "0",
    "langPT": "1",
    "langIT": "1",
    "langES": "1",
    "langFI": "0",
    "langSE": "0",
    "langFR": "1",
    "langCZ": "0",
    "langPL": "1",
    "langTR": "1",
    "interpolateAccelerationWithZ": 0,
    "accelerationFactorTop": 100,
    "bendingCorrectionA": 0,
    "bendingCorrectionB": 0,
    "bendingCorrectionC": 0,
    "preventZDisableOnStepperTimeout": "0",
    "supportLaser": "0",
    "laserPin": -1,
    "laserOnHigh": "1",
    "defaultPrinterMode": 0,
    "supportCNC": "0",
    "cncWaitOnEnable": 300,
    "cncWaitOnDisable": 0,
    "cncEnablePin": -1,
    "cncEnableWith": "1",
    "cncDirectionPin": -1,
    "cncDirectionCW": "1",
    "startupGCode": "",
    "jsonOutput": "0",
    "bedLevelingMethod": 0,
    "bedCorrectionMethod": 0,
    "bedLevelingGridSize": 5,
    "bedLevelingRepetitions": 5,
    "bedMotor1X": 0,
    "bedMotor1Y": 0,
    "bedMotor2X": 200,
    "bedMotor2Y": 0,
    "bedMotor3X": 100,
    "bedMotor3Y": 200,
    "zProbeRequiresHeating": "0",
    "zProbeMinTemperature": 150,
    "adcKeypadPin": -1,
    "sharedExtruderHeater": "0",
    "extruderSwitchXYSpeed": 100,
    "dualXAxis": "0",
    "boardFanSpeed": 255,
    "hasMAX6675": false,
    "hasMAX31855": false,
    "hasGeneric1": false,
    "hasGeneric2": false,
    "hasGeneric3": false,
    "hasUser0": false,
    "hasUser1": false,
    "hasUser2": false,
    "numExtruder": 1,
    "version": 92.9,
    "primaryPortName": ""
}
========== End configuration string ==========

*/