#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

//Nombre del producto	cantidad	precio		calcular	subtotal	iva		total

class Registro{
	public:
		string nombreProducto;
		int cantidad;
		float precio;
		float calculo;
		float calculoIVA;
		float subtotal;
		float iva = 0.16f;
		float total;
		
		string sal = "sal";
		string azucar = "azucar";
		string arroz = "arroz";
		
		int sales = 1000;
		int azucares = 500;
		int arroces = 2000;

		void Calcular();		
};

void Registro::Calcular(){
	cout <<"Buenas y bienvenido, contamos con esto en almacen:  " << endl <<
	"Sal" << endl << "Azucar" << endl << "Arroz" << endl;
	
	cout << "Ingrese el nombre del producto que esta buscando: " << endl;
	cin >> nombreProducto;
	
	cout << "Ingrese la cantidad del producto que requieres: " << endl;
	cin >> cantidad;
	
	cout << "Ingrese el precio del producto: " << endl;
	cin >> precio;
	
	calculo = cantidad * precio;
	subtotal = calculo;
	calculoIVA = subtotal * iva;
	total = calculoIVA + subtotal;
	
	if ( nombreProducto == sal && cantidad <= sales){
		cout << "contamos con este producto, contamos con la cantidad de: " << cantidad << " de sal y su precio en total es: " << total <<endl;
		return;
	}else if (nombreProducto == azucar && cantidad <= azucares){
			cout << "contamos con este producto, contamos con la cantidad de: " << cantidad << " de azucar y su precio en total es: " << total <<endl;
		return;
	}else if (nombreProducto == arroz && cantidad <= arroces){
			cout << "contamos con este producto, contamos con la cantidad de: " << cantidad << " de arroz y su precio en total es: " << total <<endl;
		return;
	}else {
		cout << "Disculpa. Es una pena, no pudimos encontrar su producto registrado o no contamos en almacen" << endl;
		return ;
	}
};
