#include "PrivDerived.h"

PrivDerived::PrivDerived( ) { }
PrivDerived::~PrivDerived( ){ }
void print( ) {
   PrivDerived* here = new PrivDerived();
   cout << "PrivDerived" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int PrivDerived::getBpri(){
	return Base::getBpri();
}
int PrivDerived::getBpro(){
	return Base::getBpro();
}
