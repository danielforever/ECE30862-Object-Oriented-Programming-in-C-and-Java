#include "dProt.h"

dProt::dProt( ) { }
dProt::~dProt( ){ }
void dProt::print( ) { 
   dProt* here = new dProt();
   cout << "dProt" << endl;
   cout << "privB: " << here->getBpri();
   cout << ", protB: " << here->getBpro();
   cout << ", publicB: " << here->publicB;
   cout << endl << endl;
}

int dProt::getBpri(){
	return ProtDerived::getBpri();
}
int dProt::getBpro(){
	return ProtDerived::getBpro();
}
