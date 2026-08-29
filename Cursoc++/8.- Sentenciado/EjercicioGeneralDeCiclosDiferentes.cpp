#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class EjercicioGeneralDeCiclosDiferentes{
	public:
	int opcion;	
	int idProducto;
	int cantidad;
	int cantidadProductos;
	string descripcion = " ";
	float precio;	
	float subtotal;
	float iva = 0.16f;
	float total;
	float calculando;	
	float descuento;
	float aplicarDescuento;
	float subtotalDescuento;
	bool otraOperacion;
	
	public:		
	void Registradora();
};	

void EjercicioGeneralDeCiclosDiferentes::Registradora(){
	do{
		cout << "Por favor seleccione una opcion: " << endl << 
		"1 = Compras" << endl << "2 = Ventas" << endl << "3 = Registro De Mercancia" << endl;
		cin >> opcion;
		
		switch (opcion){
			case 1 :{
				
				cout << "¿Qué compras?: " << endl;
				cin >> descripcion;
				cout << "Ingrese su ID del producto: " << endl;
				cin >> idProducto;
				cout << "¿Cúal es su precio?: " << endl;
				cin >> precio;
				cout << "Cuantos compras?: " << endl;
				cin >> cantidad;
				subtotal = precio * cantidad;
				
			  descuento = (cantidad >= 1 && cantidad <= 10) ? 0.10f :
						  (cantidad > 10 && cantidad <= 20) ? 0.20f :
						  (cantidad >= 21 && cantidad <= 50) ? 0.30f :
						   0.0f;
					 
				aplicarDescuento = subtotal * descuento;
				subtotalDescuento = subtotal - aplicarDescuento;
				total = subtotalDescuento * (1 + iva);
				
				cout << "su total es de: " << total <<endl;
				cout << "gracias, regrese pronto" << endl;
				break;
			}
			case 2 :{
				
				cout << "Ingrese el ID del producto vendido: " << endl;
				cin >> idProducto;
				cout << "¿Cúal es su precio?: " << endl;
				cin >> precio;
				cout << "Cuanto se vendio?: " << endl;
				cin >> cantidad;
				
				subtotal =  precio * cantidad;
				total = subtotal * (1 + iva);
				cout << "total de venta: " << total << endl;
				cout << "gracias, regrese pronto" << endl;
				break;
			}
			case 3 :{
				cout << "Cauntos productos quieres registrar?" << endl;
				cin >> cantidadProductos;
				
				for ( int i = 0; i < cantidadProductos; i++){
				cout << "Registra el producto: " << endl;
				cin >> descripcion;
				cout << "Ingrese el ID del producto vendido: " << endl;
				cin >> idProducto;
				cout << "¿Cúal es su precio?: " << endl;
				cin >> precio;
				cout << "Cuanto se vendio?: " << endl;
				cin >> cantidad;
				
				subtotal =  precio * cantidad;
				total = subtotal * (1 + iva);
				cout << "total de venta: " << total << endl;
				
				cout << "gracias, regrese pronto" << endl;
				}
				break;
			}
		}
	cout << "¿Desea realizar otra operación? (1 = sí, 0 = no): ";
    cin >> otraOperacion;
	}  
	while (otraOperacion == true);
}

int main() {
	EjercicioGeneralDeCiclosDiferentes eg = EjercicioGeneralDeCiclosDiferentes();
	eg.Registradora();
	return 0;
}
