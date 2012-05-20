#ifndef SNOW_H
#define SNOW_H

#include "picture.h"
#include "constants.h"

class Snow : public Picture {
public:
  Snow(LedControl& lc) : Picture(lc) {}
  virtual void setup();
  virtual void enter();
  virtual void loop();
  virtual int getDelay() {return 700;}
private:
  byte framebuffer[ROWS];
  void drawFramebuffer();
  void setFramebuffer(byte row, byte col, boolean state);
  boolean getFramebuffer(byte row, byte col);
  
  void clearFullRows();
  void dropFlakes();
  void avalanche();
  void spawnFlakes();
};

#endif
