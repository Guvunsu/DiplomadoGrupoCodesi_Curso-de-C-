#include <iostream>
using namespace std;

class TareaArreglos{
	public:
		void Imprimir();
		void Sume();
		void ListaC();
};

void TareaArreglos::Imprimir(){
	int numeros[2];
	int mostrar = sizeof(numeros);
	for (int i=0; i<3; i++){
		cout << "Ingrese 3 numeros: " << endl;
		cin >> numeros[i];
	}
	for (int o=0;o<3;o++){
	cout << "Son: " << endl << numeros[o] << " " << endl;
	}
}

void TareaArreglos::Sume(){
	int numeros[3];
	int sumaArreglo;
	for (int i=0; i<3;i++){
		cout << "ingrese numeros dentro de un arreglo y se sumaran: " << endl;
		i+0;
		cin >> numeros[i]; 
		sumaArreglo+=numeros[i];
	}
	cout << "la suma del anterior vector es: " << sumaArreglo << endl;
}

void TareaArreglos::ListaC(){
	int listaA[2];
	int listaB[2];
	int listaC[9];
	int posicion=0;
	
	for (int i=0; i<2;i++){
		cout << "introduce un numero de la lista A: " << endl;
		cin >> listaA[i];
		for (int o=0; o<1;o++){
			cout << "introduce un numero de la lista B: " << endl;
			cin >> listaB[o];
			listaC[posicion]= listaA[i]+listaB[o];
			cout << "lista A: " << listaA[i] << endl << "listaB: " << listaB[o] << endl 
			<< "La suma de ambas lista A y B es: " << endl << listaC[posicion] << endl;
			posicion++;
		}
	}
}
