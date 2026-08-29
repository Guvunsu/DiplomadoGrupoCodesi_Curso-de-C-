#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
class EjercicioSwitchSuma{
	public:
	int num3 = 0;
	int num4 = 0;

	void OperacionSuma();
};
void EjercicioSwitchSuma:: OperacionSuma(){
	cout <<" ingresa el valor 1"<< endl;
	cin >> num3;
	cout <<" ingresa el valor 2"<< endl;
	cin>> num4;
	int suma = num3 + num4;	
	cout << "R= " << suma << endl;
}
