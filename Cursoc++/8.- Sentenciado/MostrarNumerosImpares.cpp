#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Impares{
	public:
	int numerosImpares;
	void Mostrar();
};
void Impares:: Mostrar(){
	for ( int cantidad = 0; cantidad <= 19; cantidad++){
		if (cantidad % 2){
			numerosImpares++;
		}
	}
	cout << "los numeros impares son: " << numerosImpares << " en total"<< endl;
}
int main() {
	Impares i = Impares();
	i.Mostrar();
	return 0;
}
