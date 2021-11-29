#include "PublicDerived.h"

PublicDerived::PublicDerived( ) { }
PublicDerived::~PublicDerived( ){ }
void PublicDerived::print( ) { 
   PublicDerived* here = new PublicDerived();
   cout << "publicDerived" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int PublicDerived::getBpri(){
	return Base::getBpri();
}
int PublicDerived::getBpro(){
	return Base::getBpro();
}
