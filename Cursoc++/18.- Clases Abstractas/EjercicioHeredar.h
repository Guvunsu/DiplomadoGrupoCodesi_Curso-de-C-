#include <iostream>
#include "EjercicioClase.h"

class EjercicioHeredar: public EjercicioClase{
	public:
		int ok();
		int calculo();
		int mensaje();
};

EjercicioHeredar::ok(){
	cout << "por favor ingrese una descipcion del producto a registrar" << endl;
	cin >> descripcion;
}

EjercicioHeredar::calculo(){
	cout << "cuantos seran en cantidad?" << endl;
	cin >> cantidad;
	cout << "su precio individual por favor: " << endl;
	cin >> precio;
	
	 subtotal = cantidad*(precio+iva);
	 total = subtotal;
	 
	 cout << " su costo es: " << total << endl;
}

EjercicioHeredar::mensaje(){
	cout << "gracias por comprar en C++, que tenga un buen dia"<<endl;
}
