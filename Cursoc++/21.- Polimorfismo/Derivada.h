#ifndef DERIVADA_H
#define DERIVADA_H
#include <iostream>
#include "Heredar.h"
using namespace std;

class Derivada : public Heredar {
	public:
		void MetodoOne(){
			cout<<"Clase Derivada MetodoOne"<<endl;
		}
		void MetodoTwo(){
			cout<<"Clase dereivada MetodoTwo"<<endl;
		}
};
#endif
