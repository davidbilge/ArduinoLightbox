#include "picture.h"

void H_Lines::setup() {
    Serial.println("Initialized H_Lines");
}

void H_Lines::enter() {
  Serial.println("Entering H_Lines");
    
  for (int row=1;row<=MAX_ROW;row+=2) {
    for (int col=0; col<=MAX_COL; ++col) {
      lc.setLed(0, row, col, true);
    }
  }
}

void H_Lines::leave() {
  Serial.println("Leaving H_Lines");
}

void H_Lines::loop() {
    
}

int H_Lines::getDelay() {
  return 200;
}

void StaticSymbol::enter() {
  drawSymbol(lc, symbol, 0);
}
