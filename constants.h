#ifndef LB_Constants_h
#define LB_Constants_h

#define MAX_ROW 6
#define MAX_COL 6

#define ROWS MAX_ROW+1
#define COLS MAX_COL+1 //This must not exceed 8 as framebuffers are implemented with bytes!

#define NUM_OF_LEDS (ROWS)*(COLS)

#endif
