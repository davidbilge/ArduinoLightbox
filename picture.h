#ifndef Picture_h
#define Picture_h

#include "Arduino.h"
#include "symbols.h"

class Picture {
public:
    virtual void setup() = 0;
    virtual void loop() = 0;
    virtual int getDelay() = 0;
};

class H_Lines : public Picture {
public:
    H_Lines();
    
    virtual void setup();
    virtual void loop();
    virtual int getDelay();
};

#endif
