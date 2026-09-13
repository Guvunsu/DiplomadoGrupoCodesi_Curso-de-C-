#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Ejercicio{
	public:
		static string producto;
		string descripcion;
		
		static float precio;
		int cantidad;
		
		static float iva;
		float subtotal;
		float total;
		
	public:
		 void operacion();
};

string Ejercicio::producto = "X";
float Ejercicio::precio = 13.99;
float Ejercicio::iva = 0.16;

void Ejercicio::operacion(){
	cout << "Ingresemos la descripcion del producto: " << producto << endl;
	cin >> descripcion;
	cout << "Ingresemos la cantidad por favor: " << endl;
	cin >> cantidad;
	
	subtotal = cantidad * precio;
	total= subtotal + (subtotal*iva);
	
	
	cout << "el total de mi: " << producto << "que describimos como: " << descripcion << endl <<
	"que pedimos una cantidad de: " << cantidad << " tiene un costo total de: " << total << endl;
}
