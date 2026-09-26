#include <iostream>
#include "ClasesAbstractas.h"
using namespace std;

class HeredarAbstractas: public ClaseAbstractas{
	public:
		int suma();
		int mensaje();
};

HeredarAbstractas::suma(){
	cout <<"Clase que suma numeros" << endl;
}

HeredarAbstractas::mensaje(){
	cout << "Metodo que envia mensajes" << endl;
}
