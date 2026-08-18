#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Descuentos{
	public:
	int venta1 = 10;
	int venta2 = 20;	
	int venta3 = 21;
	int venta4 = 50;
	int venta5 = 51;
	
	float descuento1 = 0.10;
	float descuento2 = 0.20;
	float descuento3 = 0.30;
	
	int cantidad;
	float precio;
	

	
	public:
		void Oferta();
	
};

void Descuentos::Oferta(){
	cout << "ingrese la cantidad de libros que son en total" << endl;
	cin >> cantidad;
	
	cout << "Ingrese el precio general de los libros" << endl;
	cin >> precio;
	
	double subtotal = cantidad * precio;
	double iva = subtotal * 0.16;
	double total = subtotal + iva;
	
	if ( venta1 > venta2 && total){
		cout << "si su venta es mayor " << venta1 << " y menor a " << venta2 << "su descuento que ofrece es 10%" << "su total es " << total << endl;
	} else if (venta3 -= venta4&& total){
		cout << "Si la venta es mayor a " << venta3 << " y menor o igual a " << venta4 << "su descuento es de 20%" << "su total es " << total  << endl;
	}else if (venta5 += 51 && total){
		cout << "su descuento es de 30%" << "su total es " << total << endl;
	}else if ( venta1 <= 10 && total){
		cout << "no hay descuento dispoonible" << "su total es " << total <<endl;
	}
}

int main() {
	Descuentos d = Descuentos();
	d.Oferta();
	return 0;
}
