#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class MostrarNumeros{
	public:
		int positivos = 0;
		int negativos = 0;
		int numeros;
		public:
			void Ciclo();
};

void MostrarNumeros::Ciclo(){
	for ( int i = 1; i <= 10;i++){
	cout << "ingrese una cantidad de numeros" << i <<  endl;
	cin >> numeros;
	
	if ( numeros < 0){
	negativos++;
	} else if ( numeros > 0 ){
	positivos++;
		}
	}
		cout << "cantidad de numeros mayor a cero: " << positivos <<endl;
		cout << "cantidad de numeros menor a cero: " << negativos << endl;
		return ;
}

int main() {
	MostrarNumeros mn = MostrarNumeros();
	mn.Ciclo();
	return 0;
}
