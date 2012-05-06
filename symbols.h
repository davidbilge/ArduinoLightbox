#include <Arduino.h>
#include "LedControl.h"

#ifndef SYMBOLS_H
#define SYMBOLS_H
    
const prog_uint8_t PROGMEM spc[8] = {
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        1
    }; 
    
const prog_uint8_t PROGMEM dot[8] = {
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B1000000,
        B0000000,
        1
    }; 
    
const prog_uint8_t PROGMEM comma[8] = {
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B0000000,
        B1000000,
        B1000000,
        1
    }; 
    
const prog_uint8_t PROGMEM colon[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1000000,
        B0000000,
        B1000000,
        B0000000,
        1
    }; 
    
const prog_uint8_t PROGMEM semicolon[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1000000,
        B0000000,
        B1000000,
        B1000000,
        1
    }; 
    
    
const prog_uint8_t PROGMEM plus[8] = {
        B0000000,
        B0000000,
        B0000000,
        B0100000,
        B1110000,
        B0100000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM A[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1010000,
        B1110000,
        B1010000,
        B0000000,
        3
    }; 
    
    
const prog_uint8_t PROGMEM B[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1110000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 

const prog_uint8_t PROGMEM C[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1000000,
        B1010000,
        B1110000,
        B0000000,
        3
    };   
  
const prog_uint8_t PROGMEM D[8] = {
        B0000000,
        B1100000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B0000000,
        3
    };  
  
const prog_uint8_t PROGMEM E[8] = {
        B0000000,
        B1110000,
        B1000000,
        B1110000,
        B1000000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM F[8] = {
        B0000000,
        B1110000,
        B1000000,
        B1110000,
        B1000000,
        B1000000,
        B0000000,
        3
    }; 
  
const prog_uint8_t PROGMEM G[8] = {
        B0000000,
        B1110000,
        B1000000,
        B1000000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
  
const prog_uint8_t PROGMEM H[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1110000,
        B1010000,
        B1010000,
        B0000000,
        3
    }; 
        
const prog_uint8_t PROGMEM I[8] = {
        B0000000,
        B1110000,
        B0100000,
        B0100000,
        B0100000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM J[8] = {
        B0000000,
        B1110000,
        B0010000,
        B0010000,
        B1010000,
        B1110000,
        B0000000,
        3
    };
  
const prog_uint8_t PROGMEM K[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1100000,
        B1010000,
        B1010000,
        B0000000,
        3
    };
 
const prog_uint8_t PROGMEM L[8] = {
        B0000000,
        B1000000,
        B1000000,
        B1000000,
        B1000000,
        B1110000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM M[8] = {
        B0000000,
        B1010000,
        B1110000,
        B1010000,
        B1010000,
        B1010000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM N[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1010000,
        B1010000,
        B1010000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM O[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM P[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1110000,
        B1000000,
        B1000000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM Q[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B0010000,
        3
    };
    
const prog_uint8_t PROGMEM R[8] = {
        B0000000,
        B1110000,
        B1010000,
        B1010000,
        B1100000,
        B1010000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM S[8] = {
        B0000000,
        B1110000,
        B1000000,
        B1110000,
        B0010000,
        B1110000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM T[8] = {
        B0000000,
        B1110000,
        B0100000,
        B0100000,
        B0100000,
        B0100000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM U[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
 
 const prog_uint8_t PROGMEM V[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1010000,
        B1010000,
        B0100000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM W[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B1010000,
        B0000000,
        3
    };  
    
const prog_uint8_t PROGMEM X[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1110000,
        B1010000,
        B1010000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM Y[8] = {
        B0000000,
        B1010000,
        B1010000,
        B1010000,
        B0100000,
        B0100000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM Z[8] = {
        B0000000,
        B1110000,
        B0010000,
        B0100000,
        B1000000,
        B1110000,
        B0000000,
        3
    }; 
    
    
const prog_uint8_t PROGMEM a[8] = {
        B0000000,
        B0000000,
        B0000000,
        B0110000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM b[8] = {
        B0000000,
        B1000000,
        B1000000,
        B1110000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM c[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1110000,
        B1000000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM d[8] = {
        B0000000,
        B0010000,
        B0010000,
        B1110000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM e[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1110000,
        B1010000,
        B1100000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM f[8] = {
        B0000000,
        B0110000,
        B0100000,
        B1110000,
        B0100000,
        B0100000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM g[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1110000,
        B1010000,
        B1110000,
        B0100000,
        3
    };
    
const prog_uint8_t PROGMEM h[8] = {
        B0000000,
        B1000000,
        B1000000,
        B1110000,
        B1010000,
        B1010000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM i[8] = {
        B0000000,
        B1000000,
        B0000000,
        B1000000,
        B1000000,
        B1000000,
        B0000000,
        1
    };
    
const prog_uint8_t PROGMEM j[8] = {
        B0000000,
        B0100000,
        B0000000,
        B0100000,
        B0100000,
        B1100000,
        B0000000,
        2
    }; 
    
const prog_uint8_t PROGMEM k[8] = {
        B0000000,
        B1000000,
        B1000000,
        B1110000,
        B1100000,
        B1010000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM l[8] = {
        B0000000,
        B1000000,
        B1000000,
        B1000000,
        B1000000,
        B1000000,
        B0000000,
        1
    };
    
    
const prog_uint8_t PROGMEM o[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1110000,
        B1010000,
        B1110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM t[8] = {
        B0000000,
        B0100000,
        B0100000,
        B1110000,
        B0100000,
        B0110000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM v[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1010000,
        B1010000,
        B0100000,
        B0000000,
        3
    };
    
const prog_uint8_t PROGMEM w[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1000100,
        B1010100,
        B0101000,
        B0000000,
        5
    };
    
const prog_uint8_t PROGMEM x[8] = {
        B0000000,
        B0000000,
        B0000000,
        B1010000,
        B0100000,
        B1010000,
        B0000000,
        3
    }; 
    
const prog_uint8_t PROGMEM one[8] = {
        B0000000,
        B0100000,
        B1100000,
        B0100000,
        B0100000,
        B0100000,
        B0000000,
        2
    };
    
const prog_uint8_t PROGMEM zero[8] = {
        B0001000,
        B1110000,
        B1010000,
        B1010000,
        B1010000,
        B1110000,
        B0000000,
        4
    };
    
void drawSymbol(LedControl& lc, const prog_uint8_t* symbol, int x_offset);

void drawSymbols(LedControl& lc, const prog_uint8_t** symbols, int n_symbols, int x_offset);

void scrollSymbols(LedControl& lc, const prog_uint8_t** symbols, int n_symbols, int delay);

#endif
