#include "Base.h"
#include "PrivDerived.h"
#include "ProtDerived.h"
#include "PublicDerived.h"
#include "dPriv.h"
#include "dProt.h"
#include "dPublic.h"
#include <iostream>
#include <string>
using namespace std;

int main(void) {

   Base* b = new Base( );
   PrivDerived* privd = new PrivDerived( );
   ProtDerived* protd = new ProtDerived( );
   PublicDerived* publicd = new PublicDerived( );
   dPriv* dpriv = new dPriv( );
   dProt* dprot = new dProt( );
   dPublic* dpublic = new dPublic( );
   cout << "b" << endl;
   cout << b->getBpri() << endl;
   cout << b->getBpro() << endl;
   cout << b->publicB << endl;

   cout << "privd" << endl;
   cout << privd->getBpri() << endl;
   cout << privd->getBpro() << endl;
   cout << privd->publicB << endl;

   cout << "protd" << endl;
   cout << protd->getBpri() << endl;
   cout << protd->getBpro() << endl;
   cout << protd->publicB << endl;

   cout << "publicd" << endl;
   cout << publicd->getBpri() << endl;
   cout << publicd->getBpro() << endl;
   cout << publicd->publicB << endl;

   cout << "dpriv" << endl;
   cout << dpriv->getBpri() << endl;
   cout << dpriv->getBpro() << endl;
   cout << dpriv->publicB << endl;

   cout << "dprot" << endl;
   cout << dprot->getBpri() << endl;
   cout << dprot->getBpro() << endl;
   cout << dprot->publicB << endl;

   cout << "dpublic" << endl;
   cout << dpublic->getBpri() << endl;
   cout << dpublic->getBpro() << endl;
   cout << dpublic->publicB << endl;
}
