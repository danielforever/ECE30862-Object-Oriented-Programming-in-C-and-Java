#ifndef DERIVED_H_
#define DERIVED_H_
#include "Base.h"

class Derived : public Base {
public:
   int whichf;	
   Derived( );
   virtual ~Derived( );

   // add necessary functions here
   virtual void f1();
   virtual void f2();

};
#endif /*DERIVED_H*/
