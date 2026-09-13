#include <iostream>
#include "Ejercicio.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout << "Producto: " << Ejercicio::producto<<endl;
	cout << "Su precio es de: " << Ejercicio::precio<<endl;
	cout << "Con un iva de: " << Ejercicio::iva<<endl;
	Ejercicio objecto;
	objecto.operacion();
	return 0;
}
