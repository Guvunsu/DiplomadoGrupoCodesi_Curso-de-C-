#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Ejercicio{
	public:
		void Imprimir();
		void Sume();
		void ListaC();
};
void Ejercicio::Imprimir(){
	int numeros[] = {0,1,2,3,4,5,6,7,8,9};
	int mostrar = sizeof(numeros);
	cout << "¿Cuantos son? " << mostrar << endl;
	for (int i=0; i<mostrar; i++){
		cout << numeros[i] << endl;
	}
}

void Ejercicio::Sume(){
	int numeros[12];
	numeros[0]=10;
	numeros[1]=9;
	numeros[2]=8;
	numeros[3]=7;
	numeros[4]=6;
	numeros[5]=5;
	numeros[6]=4;
	numeros[7]=3;
	numeros[8]=2;
	numeros[9]=1;
	numeros[10]=0;
	numeros[11] = numeros[0]+numeros[1]+numeros[2]+numeros[3]+numeros[4]+numeros[5]+
					numeros[6]+numeros[7]+numeros[8]+numeros[9]+numeros[10];
	cout << "la suma del anterior vector es: " << numeros[11] << endl;
	}

void Ejercicio::ListaC(){
	int listaA[] = {1,2,3};
	int listaB[] = {4,5,6};
	int listaC[9];
	int posicion=0;
	
	for (int i=0; i<3;i++){
		for (int o=0; o<3;o++){
			listaC[posicion]= listaA[i]+listaB[o];
			cout << "lista A: " << listaA[i] << endl << "listaB: " << listaB[o] << endl 
			<< "La suma de ambas lista A y B es: " << endl << listaC[posicion];
			posicion++;
		}
	}
}
