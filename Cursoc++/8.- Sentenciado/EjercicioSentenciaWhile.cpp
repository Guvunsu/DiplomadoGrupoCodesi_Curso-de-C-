#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class Productos{
	public:
		int x = 1;
		int productos;
		int idProductos;
		int cantidad = 1000;
		float precio;
		float calcular;
		float subtotal;
		float iva = 0.16;
		int calculoIVA;
		float total; 
		
		void Almacen();
};

void Productos::Almacen(){
	cout << "Cuantos Productos vendiste?" << endl;
	int productos;
	cin >> productos;
	
	while (x <= productos){
	cout << "Ingrese el indice del producto: " << endl;
	cin >> idProductos;
	
	cout << "Ingrese la cantidad del producto: " << endl;
	cin >> cantidad;
	
	cout << "Ingrese el precio del producto: " << endl;
	cin >> precio;
	
	calcular = cantidad * precio;
	subtotal = calcular;
	calculoIVA = subtotal * iva;
	total = calculoIVA + subtotal;
	
	cout << "total es: " << total << endl;
	x++;
	}

}

int main() {
	Productos p = Productos();
	p.Almacen();
	return 0;
}
