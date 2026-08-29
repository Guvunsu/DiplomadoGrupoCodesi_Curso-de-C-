#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
class EjercicioSwitchMultiplicacion{
	public:
	int num7 = 0;
	int num8 = 0;
	
	void OperacionMulti();
};

void EjercicioSwitchMultiplicacion:: OperacionMulti(){
		cout <<" ingresa el valor 1"<< endl;
	cin >> num7;
		cout <<" ingresa el valor 2"<< endl;
	cin>> num8;
	int multiplicacion = num7 * num8;	
	cout << "R= " << multiplicacion << endl;
}
