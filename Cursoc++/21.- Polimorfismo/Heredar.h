#ifndef HEREDAR_H
#define HEREDAR_H
#include <iostream>
using namespace std;

class Heredar{
	public:
		virtual void MetodoOne(){
			cout <<"Clase Base MetodoOne"<< endl;
		}
		void MetodoTwo(){
			cout <<"Clase Base MetodoTwo"<<endl;
		}
};
#endif
