#ifndef Picture_h
#define Picture_h

#include "Arduino.h"
#include "symbols.h"
#include "constants.h"

class Picture {
public:
    Picture(LedControl& lc) : lc(lc) {}
    virtual void setup() {}
    virtual void enter() {}
    virtual void leave() {}
    virtual void loop() {}
    virtual int getDelay() {return 250;}
    
protected:
    LedControl& lc;
};

class H_Lines : public Picture {
public:
    H_Lines(LedControl& lc) : Picture(lc) {}
    
    virtual void setup();
    virtual void enter();
    virtual void leave();
    virtual void loop();
    virtual int getDelay();
};

class StaticSymbol : public Picture {
public:
  StaticSymbol(LedControl& lc, const prog_uint8_t* symbol) : Picture(lc), symbol(symbol) {}
  virtual void enter();
  
private:
  const prog_uint8_t* symbol;
};

#endif
