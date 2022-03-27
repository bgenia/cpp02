#pragma once

// Control sequence introducer
#define TERM_CSI                        "\e["

// Style reset
#define TERM_RESET                      TERM_CSI "0" "m"

// Basic foreground colors
#define TERM_F_BLACK                    TERM_CSI "30" "m"
#define TERM_F_RED                      TERM_CSI "31" "m"
#define TERM_F_GREEN                    TERM_CSI "32" "m"
#define TERM_F_YELLOW                   TERM_CSI "33" "m"
#define TERM_F_BLUE                     TERM_CSI "34" "m"
#define TERM_F_MAGENTA                  TERM_CSI "35" "m"
#define TERM_F_CYAN                     TERM_CSI "36" "m"
#define TERM_F_WHITE                    TERM_CSI "37" "m"

// Light foreground colors
#define TERM_F_LIGHT_BLACK              TERM_CSI "30" ";" "1" "m"
#define TERM_F_LIGHT_RED                TERM_CSI "31" ";" "1" "m"
#define TERM_F_LIGHT_GREEN              TERM_CSI "32" ";" "1" "m"
#define TERM_F_LIGHT_YELLOW             TERM_CSI "33" ";" "1" "m"
#define TERM_F_LIGHT_BLUE               TERM_CSI "34" ";" "1" "m"
#define TERM_F_LIGHT_MAGENTA            TERM_CSI "35" ";" "1" "m"
#define TERM_F_LIGHT_CYAN               TERM_CSI "36" ";" "1" "m"
#define TERM_F_LIGHT_WHITE              TERM_CSI "37" ";" "1" "m"

#define TERM_F_GREY                     TERM_CSI "30" ";" "1" "m"
#define TERM_F_GRAY                     TERM_CSI "30" ";" "1" "m"

// Implementation defined / may not work as expected
#define TERM_F_DEFAULT                  TERM_CSI "39" ";" "1" "m"

// Basic background colors
#define TERM_B_BLACK                    TERM_CSI "40" "m"
#define TERM_B_RED                      TERM_CSI "41" "m"
#define TERM_B_GREEN                    TERM_CSI "42" "m"
#define TERM_B_YELLOW                   TERM_CSI "43" "m"
#define TERM_B_BLUE                     TERM_CSI "44" "m"
#define TERM_B_MAGENTA                  TERM_CSI "45" "m"
#define TERM_B_CYAN                     TERM_CSI "46" "m"
#define TERM_B_WHITE                    TERM_CSI "47" "m"

// Light background colors
#define TERM_B_LIGHT_BLACK              TERM_CSI "40" ";" "1" "m"
#define TERM_B_LIGHT_RED                TERM_CSI "41" ";" "1" "m"
#define TERM_B_LIGHT_GREEN              TERM_CSI "42" ";" "1" "m"
#define TERM_B_LIGHT_YELLOW             TERM_CSI "43" ";" "1" "m"
#define TERM_B_LIGHT_BLUE               TERM_CSI "44" ";" "1" "m"
#define TERM_B_LIGHT_MAGENTA            TERM_CSI "45" ";" "1" "m"
#define TERM_B_LIGHT_CYAN               TERM_CSI "46" ";" "1" "m"
#define TERM_B_LIGHT_WHITE              TERM_CSI "47" ";" "1" "m"


#define TERM_B_GREY                     TERM_CSI "40" ";" "1" "m"
#define TERM_B_GRAY                     TERM_CSI "40" ";" "1" "m"

// Implementation defined / may not work as expected
#define TERM_B_DEFAULT                  TERM_CSI "49" ";" "1" "m"

// x256 colors
#define TERM_F_X256(C)                  TERM_CSI "38" ";" "5" ";" #C "m"
#define TERM_B_X256(C)                  TERM_CSI "48" ";" "5" ";" #C "m"

// RGB colors
#define TERM_F_RGB(R, G, B)             TERM_CSI "38" ";" "2" ";" #R ";" #G ";" #B "m"
#define TERM_B_RGB(R, G, B)             TERM_CSI "48" ";" "2" ";" #R ";" #G ";" #B "m"

// Text decorations
#define TERM_BOLD                       TERM_CSI "1" "m"
#define TERM_FAINT                      TERM_CSI "2" "m"
#define TERM_ITALIC                     TERM_CSI "3" "m"
#define TERM_UNDERLINE                  TERM_CSI "4" "m"
#define TERM_BLINK_SLOW                 TERM_CSI "5" "m"
#define TERM_BLINK_FAST                 TERM_CSI "6" "m"
#define TERM_INVERT                     TERM_CSI "7" "m"
#define TERM_HIDE                       TERM_CSI "8" "m"
#define TERM_STRIKE                     TERM_CSI "9" "m"

#define TERM_NOT_BOLD                   TERM_CSI "21" "m"
#define TERM_NOT_FAINT                  TERM_CSI "22" "m"
#define TERM_NOT_ITALIC                 TERM_CSI "22" "m"
#define TERM_NOT_UNDERLINE              TERM_CSI "24" "m"
#define TERM_NOT_BLINK                  TERM_CSI "25" "m"
#define TERM_NOT_INVERT                 TERM_CSI "27" "m"
#define TERM_NOT_HIDE                   TERM_CSI "28" "m"
#define TERM_NOT_STRIKE                 TERM_CSI "29" "m"

// Cursor position
#define TERM_CURSOR_UP(N)               TERM_CSI #N "A"
#define TERM_CURSOR_DOWN(N)             TERM_CSI #N "B"
#define TERM_CURSOR_RIGHT(N)            TERM_CSI #N "C"
#define TERM_CURSOR_LEFT(N)             TERM_CSI #N "D"

#define TERM_CURSOR_PREV_LINE(N)        TERM_CSI #N "F"
#define TERM_CURSOR_NEXT_LINE(N)        TERM_CSI #N "E"

#define TERM_CURSOR_SET_COLUMN(N)       TERM_CSI #N "G"
#define TERM_CURSOR_SET_POSITION(R, C)  TERM_CSI #R ";" #C "H"

// Clear screen
#define TERM_CLEAR_SCREEN               TERM_CSI "2" "J"
#define TERM_CLEAR_SCREEN_FROM_CURSOR   TERM_CSI "0" "J"
#define TERM_CLEAR_SCREEN_TO_CURSOR     TERM_CSI "1" "J"

// Clear line
#define TERM_CLEAR_LINE                 TERM_CSI "2" "K"
#define TERM_CLEAR_LINE_FROM_CURSOR     TERM_CSI "0" "K"
#define TERM_CLEAR_LINE_TO_CURSOR       TERM_CSI "1" "K"
