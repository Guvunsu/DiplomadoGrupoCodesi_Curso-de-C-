#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class MetodoQueRegresanUnTipoDeDatoHeader{ // return
	public:
		int suma(int num1, int num2);
		float resta (int num3, int num4);
};

int MetodoQueRegresanUnTipoDeDatoHeader::suma(int num1, int num2){
	int resultado = num1+num2;
	cout << "el resultado de la suma es: " << resultado << endl;
	return resultado;
} 
float MetodoQueRegresanUnTipoDeDatoHeader::resta(int num3, int num4){
	int resultado = num3-num4;
	cout << "el resultado de la resta es: " << resultado << endl;
	return resultado;
} 
