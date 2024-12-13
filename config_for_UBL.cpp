#define AUTO_BED_LEVELING_UBL      // and turn off or remove other AUTO_BED_LEVELING_* defines
#define RESTORE_LEVELING_AFTER_G28 // pick one of these if you want Home to restore level or turn it on
//#define ENABLE_LEVELING_AFTER_G28

//#define PREHEAT_BEFORE_LEVELING // you can enable this section or just preheat manually
#if ENABLED(PREHEAT_BEFORE_LEVELING)
#define LEVELING_NOZZLE_TEMP 120 // (°C) Only applies to E0 at this time
#define LEVELING_BED_TEMP 50
#endif

#define MANUAL_PROBE_START_Z 0.2 // Manual probes will start here so if this value is large, you will waste a lot of time

#define ENABLE_LEVELING_FADE_HEIGHT // When to fade leveling effect to zero (10mm is good)
#if ENABLED(ENABLE_LEVELING_FADE_HEIGHT)
#define DEFAULT_LEVELING_FADE_HEIGHT 10.0 // (mm) Default fade height.
#endif

#define SEGMENT_LEVELED_MOVES // split moves into small pieces instead of entire grid
#define LEVELED_SEGMENT_LENGTH 5.0
// This section sets the parameters for the mesh validation pattern if you want to use it
#define G26_MESH_VALIDATION
#if ENABLED(G26_MESH_VALIDATION)
#define MESH_TEST_NOZZLE_SIZE 0.4  // (mm) Diameter of primary nozzle.
#define MESH_TEST_LAYER_HEIGHT 0.2 // (mm) Default layer height for G26.
#define MESH_TEST_HOTEND_TEMP 205  // (°C) Default nozzle temperature for G26.
#define MESH_TEST_BED_TEMP 60      // (°C) Default bed temperature for G26.
#define G26_XY_FEEDRATE 20         // (mm/s) Feedrate for G26 XY moves.
#define G26_XY_FEEDRATE_TRAVEL 100 // (mm/s) Feedrate for G26 XY travel moves.
#define G26_RETRACT_MULTIPLIER 1.0 // G26 Q (retraction) used by default between mesh test elements.
#endif

#elif ENABLED(AUTO_BED_LEVELING_UBL) // settings for UBL
//#define MESH_EDIT_GFX_OVERLAY // Display a graphics overlay while editing the mesh
#define MESH_INSET 0 // Set Mesh bounds as an inset region of the bed -- to avoid clips or other margins
// Set the # of rows/columns to use&nbsp;
#define GRID_MAX_POINTS_X 7 // Don't use more than 15 points per axis, implementation limited.
#define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
//#define UBL_HILBERT_CURVE // Use Hilbert distribution for less travel when probing multiple points
#define UBL_MESH_EDIT_MOVES_Z   // If you turn this off, the nozzle could scrape the bed while moving between edit points
#define UBL_SAVE_ACTIVE_ON_M500 // Save the currently active mesh in the current slot on M500
//#define UBL_Z_RAISE_WHEN_OFF_MESH 2.5 // You can force a height when there is no data for a point

#define UBL_MESH_WIZARD // add a wizard for setup to the menu

// more menu setup
#define LCD_BED_LEVELING
#if ENABLED(LCD_BED_LEVELING)
#define MESH_EDIT_Z_STEP 0.025 // (mm) Step size while manually probing Z axis.
#define LCD_PROBE_Z_RANGE 4    // (mm) Z Range centered on Z_MIN_POS for LCD Z adjustment
#define MESH_EDIT_MENU         // Add a menu to edit mesh points
#endif

// What do do after a Z probe
#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y200\nG1 Z10"

