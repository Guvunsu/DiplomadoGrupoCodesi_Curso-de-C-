#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "EjercicioSwitchSuma.h"
#include "EjercicioSwitchResta.h"
#include "EjercicioSwitchMultiplicacion.h"
#include "EjercicioSwitchDivision.h"
using namespace std;

class EjercicioSwitchMenu{
	public:
		
	int opcion;
	void Operacion();
};

void EjercicioSwitchMenu:: Operacion(){
	do{
	cout << " Por favor escoga una operacion" << endl <<
	"como 1=suma, 2=resta, 3=multiplicacion, 4=division" << endl;
	cin >> opcion;
	
switch (opcion) {

case 1: {
    cout << "haz seleccionado suma" << endl;
    EjercicioSwitchSuma suma;
    suma.OperacionSuma();
    break;
}

case 2: {
    cout << "Haz seleccionado la opcion Resta" << endl;
    EjercicioSwitchResta resta;
    resta.OperacionDResta();
    break;
}

case 3: {
    cout << "Haz seleccionado la opcion Multiplicacion" << endl;
    EjercicioSwitchMultiplicacion multi;
    multi.OperacionMulti();
    break;
}

case 4: {
    cout << "Haz seleccionado la opcion division" << endl;
    EjercicioSwitchDivision division;
    division.OperacionDivision();
    break;
}

default:
    cout << "esta mal, no seleccionaste las que te mencione anteriormente" << endl;
    break;
		}
	} while (opcion != 0);
}
int main() {
	EjercicioSwitchMenu m = EjercicioSwitchMenu();
	m.Operacion();
	return 0;
}

