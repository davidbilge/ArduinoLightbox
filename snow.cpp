#include "snow.h"

void Snow::setup() {
  randomSeed(analogRead(0));
  
  for (int i=0; i<ROWS; ++i) {
    framebuffer[i] = 0x00;
  }
}

void Snow::enter() {
  drawFramebuffer();
}

void Snow::loop() {
  Serial.println("loop");
  
  // Check full rows
  clearFullRows();
  
  // Drop snowflakes
  dropFlakes();
  
  avalanche();
  
  // Spawn new snowflake
  spawnFlakes();
  
  // Draw
  drawFramebuffer();
}

void Snow::drawFramebuffer() {
  for (int r=0; r<ROWS; ++r) {
    byte row = framebuffer[r];
    
    for (int c=0; c<COLS; ++c) {
      lc.setLed(0,r,c,getFramebuffer(r,c));
    }
  }
}

void Snow::setFramebuffer(byte row, byte col, boolean state) {
  byte val = B1000000 >> col;
  if (state) {
    framebuffer[row] = framebuffer[row] | val;
  } else {
    val=~val;
    framebuffer[row] = framebuffer[row] & val;
  }
}

boolean Snow::getFramebuffer(byte row, byte col) {
  byte val = B1000000 >> col;
  
  if (row < 0) return false;
  
  return framebuffer[row] & val;
}





void Snow::clearFullRows() {
  const byte fullRow = B1111111;
  const byte clearRow = 0x00;
  
  for (int r=MAX_ROW; r>0; --r) {
    byte row = framebuffer[r];
    if (row == fullRow && framebuffer[r-1] == fullRow) {
      framebuffer[r] = clearRow;
    } else {
      return; // clear full rows only from the bottom
    }
  }
}

void Snow::dropFlakes() {
  for (int r=MAX_ROW-1; r>=0; --r) {
    byte row = framebuffer[r];
    for (int c=0; c<COLS; ++c) {
      if (getFramebuffer(r,c) && !getFramebuffer(r+1,c)) {
        setFramebuffer(r,c,false);
        setFramebuffer(r+1,c,true);
      }
    }
  }
}

void Snow::avalanche() {
  for (int r=0; r<ROWS-2; ++r) {
    for (int c=0; c<COLS; ++c) {
      if (getFramebuffer(r,c) && !getFramebuffer(r-1,c) && getFramebuffer(r+1,c)) {
        boolean rightGap = c<MAX_COL && (!getFramebuffer(r+1,c+1) && !getFramebuffer(r+2,c+1));
        boolean leftGap = 0<c && (!getFramebuffer(r+1,c-1) && !getFramebuffer(r+2,c-1));
        
        if (leftGap && rightGap) {
          if (random(0,2) == 0) {
            rightGap = false;
          } else {
            leftGap = false;
          }
        }
        
        if (leftGap || rightGap) {
          setFramebuffer(r,c, false);
          if (leftGap) {
            setFramebuffer(r,c-1, true);
          } else {
            setFramebuffer(r,c+1, true);
          }
        }
      }
    }
  }
}

void Snow::spawnFlakes() {
  if(random(0,10) > 5) {
    int c = random(0,COLS+1);
    Serial.println("Spawning at " + String(c));
    setFramebuffer(0,c,true);
  }
}
