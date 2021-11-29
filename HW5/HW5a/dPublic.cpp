#include "dPublic.h"

dPublic::dPublic( ) { }
dPublic::~dPublic( ){ }
void dPublic::print( ) {
   dPublic* here = new dPublic();
   cout << "dPublic" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int dPublic::getBpri(){
	return PublicDerived::getBpri();
}
int dPublic::getBpro(){
	return PublicDerived::getBpro();
}
