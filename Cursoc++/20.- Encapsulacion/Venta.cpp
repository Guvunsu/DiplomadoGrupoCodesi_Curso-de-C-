#include <iostream>
#include "Ventas.h"
using namespace std;

Venta:: SetCantidad(double cantidad){
	cant=cantidad;
	cout<<"la cantidad es: " << cant << endl;
}

Venta:: SetPrecio(double precio){
	pre = precio;
	cout << "el precio es " << pre << endl;
}

double Venta::getSubtotal(){
	subtotal=cant*pre;
	return subtotal;
}
