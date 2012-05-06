#include "LedControl.h"

#define PIN_DIN 3
#define PIN_CLK 5
#define PIN_LOAD 6

#define MAX_INTENSITY 15
#define MAX_ROW 6
#define MAX_COL 6
#define NUM_OF_LEDS (MAX_ROW+1)*(MAX_COL+1)

#include "symbols.h"

LedControl lc = LedControl(PIN_DIN, PIN_CLK, PIN_LOAD, 1);

void setup() {
  lc.shutdown(0,false);
  lc.setScanLimit(0, MAX_ROW);
  lc.setIntensity(0, MAX_INTENSITY);
  lc.clearDisplay(0);

  //stack();

  lc.clearDisplay(0);
  
  const prog_uint8_t* ver[13] = {L, i, g, h, t, b, o, x, spc, v, one, dot, zero};
  scrollSymbols(lc, ver, 13, 150);

  testCycle();
  
  lc.clearDisplay(0);
}

void loop() {

}

void testCycle() {
  lightAll(); 
  delay(1000);
  lightEvenRows();
  delay(1000);
  lightOddRows();
  delay(1000);
  lightEvenCols();
  delay(1000);
  lightOddCols();
}

void lightAll() {
  for (int row=0; row<=MAX_ROW; ++row) {
    for (int col=0; col<=MAX_COL; ++col) {
      lc.setLed(0, row, col, true);
    }
  }
}

void lightEvenRows() {
  lc.clearDisplay(0);
  
  for (int row=0;row<=MAX_ROW;row+=2) {
    for (int col=0; col<=MAX_COL; ++col) {
      lc.setLed(0, row, col, true);
    }
  }
}


void lightOddRows() {
  lc.clearDisplay(0);
  
  for (int row=1;row<=MAX_ROW;row+=2) {
    for (int col=0; col<=MAX_COL; ++col) {
      lc.setLed(0, row, col, true);
    }
  }
}


void lightEvenCols() {
  lc.clearDisplay(0);
  
  for (int row=0;row<=MAX_ROW;row++) {
    for (int col=0; col<=MAX_COL; col+=2) {
      lc.setLed(0, row, col, true);
    }
  }
}


void lightOddCols() {
  lc.clearDisplay(0);
  
  for (int row=0;row<=MAX_ROW;row++) {
    for (int col=1; col<=MAX_COL; col+=2) {
      lc.setLed(0, row, col, true);
    }
  }
}

void stack() {
  for (int i=0; i<NUM_OF_LEDS; ++i) {
    
    for (int j=0; j<NUM_OF_LEDS-i; ++j) {
      lineSnake(j, true);
      if (j>0) lineSnake(j-1, false);
      
      delay(100);
    }
    
    
  }
}

void lineSnake(int c_step, boolean light_mode) {
  int row = c_step / (MAX_COL+1);
  
  int col = c_step % (MAX_COL+1);
  if (row%2 != 0) {
    col = MAX_COL - col;
  }
  

  
  lc.setLed(0, row, col, light_mode);
}

void breathe() {
  for (int i=0; i<16; ++i) {
    lc.setIntensity(0,i);
    delay(100);
  }
  for (int i=15; i>=0; --i) {
    lc.setIntensity(0,i);
    delay(100);
  }
}
