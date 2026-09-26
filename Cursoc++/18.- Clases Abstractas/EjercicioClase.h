#include <iostream>
using namespace std;

class EjercicioClase{
	public:
		int cantidad;
		float precio;
		float subtotal;
		float calculoIva;
		float iva=0.16f;
		float total;
		string descripcion;
		public:
			virtual ok()=0;
			virtual calculo()=0;
			virtual mensaje()=0;
};
