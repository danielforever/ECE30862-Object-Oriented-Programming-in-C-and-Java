#ifndef PRIVDERIVED_H
#define PRIVDERIVED_H
#include "Base.h"
#include <iostream>
#include <string>
using namespace std;

class PrivDerived : private Base {
public:
   PrivDerived( );
   virtual ~PrivDerived( );
   void print( );
   int getBpri();
   int getBpro();
   using Base::publicB;
};

#endif /* PRIVDERIVED_H */
