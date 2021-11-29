#ifndef DPROT_H
#define DPROT_H
#include <iostream>
#include <string>
#include "ProtDerived.h"
using namespace std;

class dProt : public ProtDerived {
public:
   dProt( );
   virtual ~dProt( );
   void print( );
   int getBpri();
   int getBpro();
   using ProtDerived::publicB;
};

#endif /* DPROT_H */
