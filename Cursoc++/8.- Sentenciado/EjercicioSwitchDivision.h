#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
class EjercicioSwitchDivision{
	public:
	int num9 = 0;
	int num10 = 0;
	
	void OperacionDivision();
};

void EjercicioSwitchDivision::OperacionDivision(){
		cout <<" ingresa el valor 1"<< endl;
	cin >> num9;
		cout <<" ingresa el valor 2"<< endl;
	cin>> num10;
	int division = num9 / num10;
	cout << "R= " << division << endl;
}
