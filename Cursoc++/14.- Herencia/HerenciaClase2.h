#include <iostream>
#include "HerenciaClase1.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class HerenciaClase2: public HerenciaClase1{
	public:
		metodo4();
		metodo5();
};
HerenciaClase2::metodo4(){
	cout << "clase 2 metodo 4 " << endl;
}
HerenciaClase2::metodo5(){
	cout << "clase 2 metodo 5 " << endl;
}
