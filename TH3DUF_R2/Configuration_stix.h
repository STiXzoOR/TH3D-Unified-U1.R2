#ifndef CONFIGURATION_STIX_H
#define CONFIGURATION_STIX_H
#define CONFIGURATION_STIX_H_VERSION 010109

// STIX Machines
//#define STIX_ENDER3
//#define STIX_A8

#if ENABLED(STIX_ENDER3)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  #define PIDBED_ENABLE
  #define X_DRIVER_TYPE  TMC2208_STANDALONE
  #define Y_DRIVER_TYPE  TMC2208_STANDALONE
  #define Z_DRIVER_TYPE  TMC2208_STANDALONE
  #define E0_DRIVER_TYPE LV8729
  #define E1_DRIVER_TYPE LV8729

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_GEN_L
  #endif
  #define BAUDRATE 250000
  
  #define BLTOUCH
  #define SPEAKER_KILL
  #define PETSFANG
  #define EZABL_POINTS 3
  #define EZABL_PROBE_EDGE 15
  #define EZABL_FASTPROBE
  #define HEATERS_ON_DURING_PROBING
  #define BABYSTEP_OFFSET
  
  #define LINEAR_ADVANCE
  #define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
  
  #define USER_PRINTER_NAME "STiX's Ender3" 

  #define POWER_SUPPLY 0
  #define TEMP_SENSOR_0 1
  #define TEMP_SENSOR_BED 5

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 500, 1000, 500, 5000 }

  #define DEFAULT_ACCELERATION          500   
  #define DEFAULT_RETRACT_ACCELERATION  500
  #define DEFAULT_TRAVEL_ACCELERATION   500   
  
  #define DEFAULT_XJERK                 7.0
  #define DEFAULT_YJERK                 7.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  5.0

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #define INVERT_E0_DIR true

  #define X_BED_SIZE 235
  #define Y_BED_SIZE 235
  
  #define X_MIN_POS 0
  #define Y_MIN_POS 0
  #define Z_MAX_POS 250

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define SDSUPPORT
  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#endif

#if ENABLED(STIX_A8)
  #define TH3DINHOUSEMACHINE
  #define NO_COLD_PREVENT
  #define PIDBED_ENABLE  
  #define X_DRIVER_TYPE  A4988
  #define Y_DRIVER_TYPE  A4988
  #define Z_DRIVER_TYPE  A4988
  #define E0_DRIVER_TYPE A4988
  #define E1_DRIVER_TYPE A4988
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_BASE_15
  #endif
  #define BAUDRATE 250000
  
  #define Z_DUAL_STEPPER_DRIVERS

  #define BLTOUCH
  #define CUSTOM_PROBE
  #define X_PROBE_OFFSET_FROM_EXTRUDER 30
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_POINTS 5
  #define EZABL_PROBE_EDGE 20
  #define EZABL_FASTPROBE
  #define HEATERS_ON_DURING_PROBING
  #define BABYSTEP_OFFSET
  
  #define LINEAR_ADVANCE
  #define LINEAR_ADVANCE_K 0
  #define NEW_JERK_CONTROL
  #define NEW_ACCELERATION_CONTROL
    
  #define CUSTOM_MACHINE_NAME "STiX's A8"

  #define POWER_SUPPLY 0
  #define TEMP_SENSOR_0 13
  #define TEMP_SENSOR_BED 5

  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  
  #define ENDSTOPPULLUPS
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 98 }
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }
  
  #define DEFAULT_ACCELERATION          500   
  #define DEFAULT_RETRACT_ACCELERATION  1000  
  #define DEFAULT_TRAVEL_ACCELERATION   500   
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #define INVERT_E0_DIR true

  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220

  #define X_MIN_POS -17
  #define Y_MIN_POS -7
  #define Z_MAX_POS 240
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

  #define SDSUPPORT
  #define REVERSE_ENCODER_DIRECTION
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#endif

#endif // CONFIGURATION_STIX_H
