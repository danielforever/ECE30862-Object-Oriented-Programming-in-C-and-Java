#include "ProtDerived.h"

ProtDerived::ProtDerived( ) { }
ProtDerived::~ProtDerived( ){ }
void ProtDerived::print( ) { 
   ProtDerived* here = new ProtDerived();
   cout << "ProtDerived" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int ProtDerived::getBpri(){
	return Base::getBpri();
}
int ProtDerived::getBpro(){
	return Base::getBpro();
}
