#include "symbols.h"

void drawSymbol(LedControl& lc, const prog_uint8_t symbol[], int x_offset) {
    byte width = pgm_read_byte (&symbol[7]);  // symbol width is coded in the last array element
  
    for (byte r=0; r<7; ++r) {
        byte data = pgm_read_byte (&symbol[r]);   // fetch data from program memory
        for (byte c=0; c<width; ++c) {
            if (data & (1<<(6-c))) {
                lc.setLed(0,r,c+x_offset,true);
            } else {
                //lc.setLed(0,r,c-x_offset,false);
            }
        }
    }
}

void drawSymbols(LedControl& lc, const prog_uint8_t** symbols, int n_symbols, int x_offset) {
  int totalTextWidth = 0;
  
  for (int i=0; i<n_symbols; ++i) {
    const prog_uint8_t* symbol = symbols[i];
    byte w = pgm_read_byte (&symbol[7]);
    
    drawSymbol(lc, symbol, x_offset+totalTextWidth);
    
    totalTextWidth += w + 1;  // Leave 1px space between symbols
  }
}

void scrollSymbols(LedControl& lc, const prog_uint8_t** symbols, int n_symbols, int n_delay) {
    int total_w = 0;
  
    for (int i=0; i<n_symbols; ++i) {
      const prog_uint8_t* symbol = symbols[i];
      byte w = pgm_read_byte (&symbol[7]);
      total_w += w + 1;  // Leave 1px space between symbols
    }
  
  
    for (int i=7; i>=-(total_w); --i) {
      drawSymbols(lc, symbols, n_symbols, i);
      delay(n_delay);
      lc.clearDisplay(0);
    }
}

