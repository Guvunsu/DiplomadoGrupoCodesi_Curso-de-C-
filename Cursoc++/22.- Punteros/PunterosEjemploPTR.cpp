#include <iostream>
using namespace std;

class Ejemplo2{
	public:
		void modificar(int*numero){
			*numero=100;
			cout<<"valor dentro del metodo: "<<*numero<<endl;
		}
};

int main() {
	Ejemplo2 objeto;
	int numero=50;
	objeto.modificar(&numero);
	cout<<"Valor original: "<<numero<<endl;
	return 0;
}
