#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
class EjercicioSwitchResta{
	public:
	int num5 = 0;
	int num6 = 0;

	void OperacionDResta();
};

void EjercicioSwitchResta:: OperacionDResta(){
		cout <<" ingresa el valor 1"<< endl;
	cin >> num5;
		cout <<" ingresa el valor 2"<< endl;
	cin>> num6;
	int resta = num5 - num6;
	cout << "R= " << resta << endl;
}
