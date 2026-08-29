#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class VenderPaletasConOperadorTernario{
	public:
	void VenderPaletas();	
	float precio;
	int vender;
};

void VenderPaletasConOperadorTernario::VenderPaletas() {
cout << "cuantas paletas vendiste en el dia? " << endl;
cin >> vender;
cout << "cuanto cuestan el dia de hoy cada paleta?" << endl;
cin >> precio;

float ganancia = vender * precio;

float r = (vender > 162 && precio == 9.59) ? ganancia:
			(vender > 213 && precio == 9.25) ? ganancia : ganancia;

cout << "La ganancia de hoy es: " << r << endl;
}
int main() {
	VenderPaletasConOperadorTernario ot = VenderPaletasConOperadorTernario();
	ot.VenderPaletas();
	return 0;
}
