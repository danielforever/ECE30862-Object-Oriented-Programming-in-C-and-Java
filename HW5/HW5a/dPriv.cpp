#include "dPriv.h"

dPriv::dPriv( ) { }
dPriv::~dPriv( ){ }
void dPriv::print( ) { 
   dPriv* here = new dPriv();
   cout << "dPriv" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int dPriv::getBpri(){
	return PrivDerived::getBpri();
}
int dPriv::getBpro(){
	return PrivDerived::getBpro();
}
