#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Conversiones{
	public:
		Conversion();
};

Conversiones:: Conversion(){
	cout << "Realizando una suma" << endl;
	cout << "Ingresa numero 1 con decimal" << endl;
	string numero1;
	cin >> numero1;
	
	cout << "ingresa numero 2 con decimal" << endl;
	string numero2;
	cin >> numero2;
	
	// convert string to float 
	float num1 = atof(numero1.c_str());
	double num2 = atof(numero2.c_str());
	
	double resultado = num1 + num2;
	
	cout << "numero 1 vale:  : " << num1 << endl;
	cout << "numero1 vale:  : " << num2 << endl;
	cout << "el resultado es: " << resultado << endl;
};

int main() {
	Conversiones c = Conversiones();
	c.Conversion();
}
