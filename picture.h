#ifndef Picture_h
#define Picture_h

#include "Arduino.h"
#include "symbols.h"
#include "constants.h"

class Picture {
public:
    Picture(LedControl& lc) : lc(lc) {}
    virtual void setup() = 0;
    virtual void enter() {}
    virtual void leave() {}
    virtual void loop() = 0;
    virtual int getDelay() = 0;

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

#endif
