/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * German
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

#define CHARSIZE 2

#define THIS_LANGUAGES_SPECIAL_SYMBOLS      _UxGT("ÄäÖöÜüß²³")

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" bereit")
#define MSG_BACK                            _UxGT("Zurück")
#define MSG_SD_INSERTED                     _UxGT("SD-Karte erkannt")
#define MSG_SD_REMOVED                      _UxGT("SD-Karte entfernt")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopp") // Max length 8 characters
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Soft-Endstopp")
#define MSG_MAIN                            _UxGT("Hauptmenü")
#define MSG_ADVANCED_SETTINGS               _UxGT("Erw. Einstellungen")
#define MSG_CONFIGURATION                   _UxGT("Konfiguration")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Motoren deaktivieren") // M84
#define MSG_DEBUG_MENU                      _UxGT("Debug-Menü")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Fortschrittsb.-Test")
#define MSG_AUTO_HOME                       _UxGT("Home XYZ") // G28
#define MSG_AUTO_HOME_X                     _UxGT("Home X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Kalibriere Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Home XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Klick zum Starten")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Nächste Koordinate")
#define MSG_LEVEL_BED_DONE                  _UxGT("Nivellieren fertig!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Ausblendhöhe")
#define MSG_SET_HOME_OFFSETS                _UxGT("Setze Homeversatz")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Homeversatz aktiv")
#define MSG_SET_ORIGIN                      _UxGT("Setze Nullpunkte") //"G92 X0 Y0 Z0" commented out in ultralcd.cpp
#define MSG_PREHEAT_1                       _UxGT("Vorwärmen " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     _UxGT("Vorwärmen " PREHEAT_1_LABEL " ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Vorw. " PREHEAT_1_LABEL " Alles")
#define MSG_PREHEAT_1_END                   _UxGT("Vorw. " PREHEAT_1_LABEL " Extr.")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Vorw. " PREHEAT_1_LABEL " Bett")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Vorw. " PREHEAT_1_LABEL " Einst.")
#define MSG_PREHEAT_2                       _UxGT("Vorwärmen " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     _UxGT("Vorwärmen " PREHEAT_2_LABEL " ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Vorw. " PREHEAT_2_LABEL " Alles")
#define MSG_PREHEAT_2_END                   _UxGT("Vorw. " PREHEAT_2_LABEL " Extr.")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Vorw. " PREHEAT_2_LABEL " Bett")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Vorw. " PREHEAT_2_LABEL " Einst.")
#define MSG_PREHEAT_CUSTOM                  _UxGT("benutzerdef. Heizen")
#define MSG_COOLDOWN                        _UxGT("Abkühlen")
#define MSG_SWITCH_PS_ON                    _UxGT("Netzteil ein")
#define MSG_SWITCH_PS_OFF                   _UxGT("Netzteil aus")
#define MSG_EXTRUDE                         _UxGT("Extrudieren")
#define MSG_RETRACT                         _UxGT("Rückzug")
#define MSG_MOVE_AXIS                       _UxGT("Achse Bewegen")
#define MSG_BED_LEVELING                    _UxGT("Bett-Nivellierung")
#define MSG_LEVEL_BED                       _UxGT("Bett nivellieren")
#define MSG_LEVEL_CORNERS                   _UxGT("Ecken nivellieren")
#define MSG_NEXT_CORNER                     _UxGT("Nächste Ecke")
#define MSG_EDITING_STOPPED                 _UxGT("Netzbearb. angeh.")
#define MSG_USER_MENU                       _UxGT("Benutzer-Menü")
#define MSG_UBL_DOING_G29                   _UxGT("G29 ausführen")
#define MSG_UBL_UNHOMED                     _UxGT("Home XYZ zuerst")
#define MSG_UBL_TOOLS                       _UxGT("UBL-Werkzeuge")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_IDEX_MENU                       _UxGT("IDEX-Modus")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Autom. Parken")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplizieren")
#define MSG_IDEX_MODE_SCALED_COPY           _UxGT("Skalierung kopieren")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("vollstä. Kontrolle")
#define MSG_IDEX_X_OFFSET                   _UxGT("2. Düse X")
#define MSG_IDEX_Y_OFFSET                   _UxGT("2. Düse Y")
#define MSG_IDEX_Z_OFFSET                   _UxGT("2. Düse Z")
#define MSG_IDEX_SAVE_OFFSETS               _UxGT("Versätze speichern")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Netz manuell erst.")
#define MSG_UBL_BC_INSERT                   _UxGT("Unterlegen & messen")
#define MSG_UBL_BC_INSERT2                  _UxGT("Messen")
#define MSG_UBL_BC_REMOVE                   _UxGT("Entfernen & messen")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Nächster Punkt...")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("UBL aktivieren")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("UBL deaktivieren")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Betttemperatur")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Hotend-Temp.")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Netz bearbeiten")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Eigenes Netz bearb.")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Feineinstellung...")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Bearbeitung beendet")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Eigenes Netz erst.")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Netz erstellen")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Netz erstellen " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Netz erstellen " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Netz erstellen kalt")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Netzhöhe einst.")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Höhe")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Netz validieren")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Netz validieren " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Netz validieren " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Eig. Netz validieren")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Netzerst. forts.")
#define MSG_UBL_MESH_LEVELING               _UxGT("Netz-Nivellierung")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-Punkt-Nivell.")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Gitternetz-Nivell.")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Netz nivellieren")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Eckpunkte")
#define MSG_UBL_MAP_TYPE                    _UxGT("Kartentyp")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Karte ausgeben")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Ausgabe für Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Ausgabe für CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Externe Sicherung")
#define MSG_UBL_INFO_UBL                    _UxGT("UBL-Info ausgeben")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Netz bearbeiten")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Menge an Füllung")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Manuelles Füllen")
#define MSG_UBL_SMART_FILLIN                _UxGT("Cleveres Füllen")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Netz Füllen")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Alles annullieren")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Nächstlieg. ann.")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Feineinst. Alles")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Feineinst. Nächstl.")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Netz-Speicherplatz")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Speicherort")
#define MSG_UBL_LOAD_MESH                   _UxGT("Bettnetz laden")
#define MSG_UBL_SAVE_MESH                   _UxGT("Bettnetz speichern")
#define MSG_MESH_LOADED                     _UxGT("Netz %i geladen")
#define MSG_MESH_SAVED                      _UxGT("Netz %i gespeichert")
#define MSG_NO_STORAGE                      _UxGT("Kein Speicher")
#define MSG_UBL_SAVE_ERROR                  _UxGT("ERR:UBL speichern")
#define MSG_UBL_RESTORE_ERROR               _UxGT("ERR:UBL wiederherst.")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Versatz angehalten")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("Schrittweises UBL")
#define MSG_LED_CONTROL                     _UxGT("LED-Steuerung")
#define MSG_LEDS                            _UxGT("Licht")
#define MSG_LED_PRESETS                     _UxGT("Licht-Einstellungen")
#define MSG_SET_LEDS_RED                    _UxGT("Rot")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Gelb")
#define MSG_SET_LEDS_GREEN                  _UxGT("Grün")
#define MSG_SET_LEDS_BLUE                   _UxGT("Blau")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Violett")
#define MSG_SET_LEDS_WHITE                  _UxGT("Weiß")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Standard")
#define MSG_CUSTOM_LEDS                     _UxGT("Benutzerdef.")
#define MSG_INTENSITY_R                     _UxGT("Intensität Rot")
#define MSG_INTENSITY_G                     _UxGT("Intensität Grün")
#define MSG_INTENSITY_B                     _UxGT("Intensität Blau")
#define MSG_INTENSITY_W                     _UxGT("Intensität Weiß")
#define MSG_LED_BRIGHTNESS                  _UxGT("Helligkeit")
#define MSG_MOVING                          _UxGT("In Bewegung...")
#define MSG_FREE_XY                         _UxGT("Abstand XY")
#define MSG_MOVE_X                          _UxGT("Bewege X")
#define MSG_MOVE_Y                          _UxGT("Bewege Y")
#define MSG_MOVE_Z                          _UxGT("Bewege Z")
#define MSG_MOVE_E                          _UxGT("Bewege Extruder")
#define MSG_MOVE_01MM                       _UxGT(" 0,1 mm")
#define MSG_MOVE_1MM                        _UxGT(" 1,0 mm")
#define MSG_MOVE_10MM                       _UxGT("10,0 mm")
#define MSG_SPEED                           _UxGT("Geschw.")
#define MSG_BED_Z                           _UxGT("Bett Z")
#define MSG_NOZZLE                          _UxGT("Düse")
#define MSG_BED                             _UxGT("Bett")
#define MSG_FAN_SPEED                       _UxGT("Lüfter")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Extra Lüfter")
#define MSG_FLOW                            _UxGT("Flussrate")
#define MSG_CONTROL                         _UxGT("Einstellungen")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Faktor")
#define MSG_AUTOTEMP                        _UxGT("Auto Temperatur")
#define MSG_ON                              _UxGT("Ein")
#define MSG_OFF                             _UxGT("Aus")
#define MSG_PID_P                           _UxGT("PID P")
#define MSG_PID_I                           _UxGT("PID I")
#define MSG_PID_D                           _UxGT("PID D")
#define MSG_PID_C                           _UxGT("PID C")
#define MSG_SELECT                          _UxGT("Auswählen")
#define MSG_ACC                             _UxGT("Beschleunigung")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("V A Jerk")
  #define MSG_VB_JERK                       _UxGT("V B Jerk")
  #define MSG_VC_JERK                       _UxGT("V C Jerk")
#else
  #define MSG_VA_JERK                       _UxGT("V X Jerk")
  #define MSG_VB_JERK                       _UxGT("V Y Jerk")
  #define MSG_VC_JERK                       _UxGT("V Z Jerk")
#endif
#define MSG_VE_JERK                         _UxGT("V E Jerk")
#define MSG_VELOCITY                        _UxGT("Geschwindigkeit")
#define MSG_VMAX                            _UxGT("V max ") // space intentional
#define MSG_VMIN                            _UxGT("V min")
#define MSG_VTRAV_MIN                       _UxGT("V min Leerfahrt")
#define MSG_ACCELERATION                    _UxGT("Beschleunigung")
#define MSG_AMAX                            _UxGT("A max ") // space intentional
#define MSG_A_RETRACT                       _UxGT("A Rückzug")
#define MSG_A_TRAVEL                        _UxGT("A Leerfahrt")
#define MSG_STEPS_PER_MM                    _UxGT("Steps/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A Steps/mm")
  #define MSG_BSTEPS                        _UxGT("B Steps/mm")
  #define MSG_CSTEPS                        _UxGT("C Steps/mm")
#else
  #define MSG_ASTEPS                        _UxGT("X Steps/mm")
  #define MSG_BSTEPS                        _UxGT("Y Steps/mm")
  #define MSG_CSTEPS                        _UxGT("Z Steps/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E Steps/mm")
#define MSG_E1STEPS                         _UxGT("E1 Steps/mm")
#define MSG_E2STEPS                         _UxGT("E2 Steps/mm")
#define MSG_E3STEPS                         _UxGT("E3 Steps/mm")
#define MSG_E4STEPS                         _UxGT("E4 Steps/mm")
#define MSG_E5STEPS                         _UxGT("E5 Steps/mm")
#define MSG_E6STEPS                         _UxGT("E6 Steps/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatur")
#define MSG_MOTION                          _UxGT("Bewegung")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm³")
#define MSG_FILAMENT_DIAM                   _UxGT("Durchm. Filament")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Entladen mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Laden mm")
#define MSG_ADVANCE_K                       _UxGT("Vorschubfaktor")
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")
#define MSG_STORE_EEPROM                    _UxGT("Konfig. speichern")
#define MSG_LOAD_EEPROM                     _UxGT("Konfig. laden")
#define MSG_RESTORE_FAILSAFE                _UxGT("Standardwerte laden")
#define MSG_INIT_EEPROM                     _UxGT("Werkseinstellungen")

#define MSG_SD_UPDATE                       _UxGT("SD Firmware-Update")
#define MSG_RESET_PRINTER                   _UxGT("Drucker neustarten")

#define MSG_REFRESH                         _UxGT("Aktualisieren")
#define MSG_WATCH                           _UxGT("Info")
#define MSG_PREPARE                         _UxGT("Vorbereitung")
#define MSG_TUNE                            _UxGT("Justierung")
#define MSG_PAUSE_PRINT                     _UxGT("SD-Druck pausieren")
#define MSG_RESUME_PRINT                    _UxGT("SD-Druck fortsetzen")
#define MSG_STOP_PRINT                      _UxGT("SD-Druck abbrechen")
#define MSG_POWER_LOSS_RECOVERY             _UxGT("Wiederh. n. Stroma.")
#define MSG_CARD_MENU                       _UxGT("Druck v. SD-Karte")
#define MSG_NO_CARD                         _UxGT("Keine SD-Karte")
#define MSG_DWELL                           _UxGT("Warten...")
#define MSG_USERWAIT                        _UxGT("Klick zum Fortsetzen")
#define MSG_PRINT_PAUSED                    _UxGT("Druck pausiert")
#define MSG_PRINTING                        _UxGT("Druckt...")
#define MSG_PRINT_ABORTED                   _UxGT("Druck abgebrochen")
#define MSG_NO_MOVE                         _UxGT("Motoren angeschaltet")
#define MSG_KILLED                          _UxGT("ABGEBROCHEN")
#define MSG_STOPPED                         _UxGT("ANGEHALTEN")
#define MSG_CONTROL_RETRACT                 _UxGT("Rückzug mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Wechs. Rückzug mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Rückzug  V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Z-Sprung mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Wechs. UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("Autom. Rückzug")
#define MSG_FILAMENT_SWAP_LENGTH            _UxGT("Rückzug Länge")
#define MSG_TOOL_CHANGE                     _UxGT("Werkzeugwechsel")
#define MSG_TOOL_CHANGE_ZLIFT               _UxGT("Z anheben")
#define MSG_SINGLENOZZLE_PRIME_SPD          _UxGT("Prime-Geschwin.")
#define MSG_SINGLENOZZLE_RETRACT_SPD        _UxGT("Rückzug-Geschwin.")
#define MSG_FILAMENTCHANGE                  _UxGT("Filament wechseln")
#define MSG_FILAMENTLOAD                    _UxGT("Filament laden")
#define MSG_FILAMENTUNLOAD                  _UxGT("Filament entladen")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Alles entladen")
#define MSG_INIT_SDCARD                     _UxGT("SD-Karte erkennen")  // Manually initialize the SD-card via user interface
#define MSG_CNG_SDCARD                      _UxGT("SD-Karte getauscht") // SD-card changed by user. For machines with no autocarddetect. Both send "M21"
#define MSG_ZPROBE_OUT                      _UxGT("Z-Sonde außerhalb")
#define MSG_SKEW_FACTOR                     _UxGT("Korrekturfaktor")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch zurücks.")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch ausfahren")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch einfahren")
#define MSG_MANUAL_DEPLOY                   _UxGT("Z-Sonde ausfahren")
#define MSG_MANUAL_STOW                     _UxGT("Z-Sonde einfahren")
#define MSG_HOME                            _UxGT("Vorher")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("homen")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Sondenversatz Z")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstopp Abbr.")
#define MSG_HEATING_FAILED_LCD              _UxGT("HEIZEN ERFOLGLOS")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Bett heizen fehlge.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEMP-ABWEI.")
#define MSG_THERMAL_RUNAWAY                 LCD_STR_THERMOMETER _UxGT(" NICHT ERREICHT")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("BETT") MSG_THERMAL_RUNAWAY
#define MSG_ERR_MAXTEMP                     LCD_STR_THERMOMETER _UxGT(" ÜBERSCHRITTEN")
#define MSG_ERR_MINTEMP                     LCD_STR_THERMOMETER _UxGT(" UNTERSCHRITTEN")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("BETT ") LCD_STR_THERMOMETER _UxGT(" ÜBERSCHRITTEN")
#define MSG_ERR_MINTEMP_BED                 _UxGT("BETT ") LCD_STR_THERMOMETER _UxGT(" UNTERSCHRITTEN")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("DRUCKER STOPP")
#define MSG_PLEASE_RESET                    _UxGT("Bitte neustarten")
#define MSG_SHORT_DAY                       _UxGT("t") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#define MSG_HEATING                         _UxGT("Extr. heizt...")
#define MSG_COOLING                         _UxGT("Extr. kühlt...")
#define MSG_BED_HEATING                     _UxGT("Bett heizt...")
#define MSG_BED_COOLING                     _UxGT("Bett kühlt...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta kalibrieren")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibriere X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibriere Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibriere Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibriere Mitte")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta Einst. anzeig.")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Autom. Kalibrierung")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta Höhe setzen")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Sondenversatz Z")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag Rod")
#define MSG_DELTA_HEIGHT                    _UxGT("Höhe")
#define MSG_DELTA_RADIUS                    _UxGT("Radius")
#define MSG_INFO_MENU                       _UxGT("Über den Drucker")
#define MSG_INFO_PRINTER_MENU               _UxGT("Drucker-Info")
#define MSG_3POINT_LEVELING                 _UxGT("3-Punkt-Nivellierung")
#define MSG_LINEAR_LEVELING                 _UxGT("Lineare Nivellierung")
#define MSG_BILINEAR_LEVELING               _UxGT("Bilineare Nivell.")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("Netz-Nivellierung")
#define MSG_INFO_STATS_MENU                 _UxGT("Drucker-Statistik")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board-Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistoren")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruder")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokoll")
#define MSG_CASE_LIGHT                      _UxGT("Beleuchtung")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Helligkeit")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Gesamte Drucke")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Komplette Drucke")
  #define MSG_INFO_PRINT_TIME               _UxGT("Gesamte Druckzeit")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Längste Druckzeit")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Gesamt Extrudiert")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Drucke")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Komplette")
  #define MSG_INFO_PRINT_TIME               _UxGT("Gesamte")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Längste")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extrud.")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#define MSG_INFO_PSU                        _UxGT("Netzteil")

#define MSG_DRIVE_STRENGTH                  _UxGT("Treiberstärke")
#define MSG_DAC_PERCENT                     _UxGT("Treiber %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Werte speichern")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("DRUCK PAUSIERT")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("FILAMENT LADEN")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("FILAMENT ENTLADEN")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("FORTS. OPTIONEN:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Mehr entleeren")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Drucke weiter")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Düse: ")
#define MSG_RUNOUT_SENSOR_ENABLE            _UxGT("Auslaufsensor")
#define MSG_ERR_HOMING_FAILED               _UxGT("Homing gescheitert")
#define MSG_ERR_PROBING_FAILED              _UxGT("Probing gescheitert")
#define MSG_M600_TOO_COLD                   _UxGT("M600: zu kalt")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Warte auf den")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("Start des")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("Filamentwechsels")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("Herausnahme")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("des Filaments...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Filament einlegen")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("und Knopf")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("drücken...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Knopf drücken um")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Düse aufzuheizen.")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Düse heizt auf")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Bitte warten...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("Laden des")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("Filaments")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("Entleeren des")
  #define MSG_FILAMENT_CHANGE_PURGE_3         _UxGT("Filaments")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("Fortsetzung des")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("Druckes...")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Bitte warten...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Auswerfen...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Laden und Klick")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Klick zum Heizen")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heizen...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Laden...")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Entleeren...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Fortsetzen...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_DE_H