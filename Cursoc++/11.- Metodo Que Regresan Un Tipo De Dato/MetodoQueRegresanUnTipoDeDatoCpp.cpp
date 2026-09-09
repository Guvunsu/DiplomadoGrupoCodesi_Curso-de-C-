#include <iostream>
#include "MetodoQueRegresanUnTipoDeDatoHeader.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	MetodoQueRegresanUnTipoDeDatoHeader mp = MetodoQueRegresanUnTipoDeDatoHeader();
	int resultadoSuma = mp.suma(10,5);
	cout << "****************" << endl;
	cout << "Ingrese el valor 1: " << endl;
	int num3;
	cin >> num3;
	cout << "Ingrese el valor 2: " << endl;
	int num4;
	cin >> num4;
	
	float resultadoResta = mp.resta(num3,num4);
	return 0;
}
