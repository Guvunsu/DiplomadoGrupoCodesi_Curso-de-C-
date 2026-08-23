#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

//Nombre del producto	cantidad	precio		calcular	subtotal	iva		total

class Registro{
	public:	
		float precio;	
		float calculoIVA;
		float subtotal;
		float iva = 0.16f;
		float total;
		float calculo;
		
		int productos;
		int cantidad;
		int idProductos;
		
		void Calcular();	
		ventasFor();	
};

Registro:: ventasFor(){
	cout << "Bienvenidos:" << endl;
}

void Registro::Calcular(){
	cout << "Cuantos Productos vendiste?" << endl;
	int productos;
	cin >> productos;
	
	for (int i = 1; i <= productos ; i++){
	cout << "Ingrese el indice del producto: " << endl;
	cin >> idProductos;
	
	cout << "Ingrese la cantidad del producto: " << endl;
	cin >> cantidad;
	
	cout << "Ingrese el precio del producto: " << endl;
	cin >> precio;
	
	calculo = cantidad * precio;
	subtotal = calculo;
	calculoIVA = subtotal * iva;
	total = calculoIVA + subtotal;
	
	cout << "total es: " << total << endl;

		}
	}

int main() {
	Registro r = Registro();
	r.ventasFor();
	r.Calcular();
	return 0;
}
