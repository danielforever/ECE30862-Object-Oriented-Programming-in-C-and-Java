#include "Base.h"

Base::Base( ) : privB(1), protB(2), publicB(3) {  }

Base::~Base( ) { }

void Base::print( ) {
   cout << "Base" << endl;
   cout << "privB: " << privB<<endl;
   cout << ", protB: " << protB;
   cout << ", publicB: " << publicB; 
   cout << endl << endl;
}
int Base::getBpri(){
	return privB;
}
int Base::getBpro(){
	return protB;
}

