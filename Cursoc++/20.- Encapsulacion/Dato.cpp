#include <iostream>
#include "Ventas.h"
#include "Datos.h"
#include <string>
using namespace std;

Datos::entrada(){
	cout << "ingresa cantidad" << endl;
	string cantidad_str;
	cin >> cantidad_str;
	
	cout << "ingresa precio" << endl;
	string precio_str;
	cin >> precio_str;
	
	//convert string to float
	float cant = stod(cantidad.c_str());
	double pre = stod(precio.c_str());
	
	Venta p = Venta();
	p.SetCantidad(cant);
	p.SetPrecio(pre);
	double sub = p.getSubtotal();
	
	cout << "el subtotal es: " << sub << endl;
}
