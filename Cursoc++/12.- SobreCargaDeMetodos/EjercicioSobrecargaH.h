#include <iostream>
#include <string>
using namespace std;

class EjercicioSobrecargaH{
		public:
	float contador = 1; 
	void Incrementar(float valor);
	void Incrementar(float recibe, float multiplicador);
	void Incrementar(float menor, float mayor, float medio);
	float Incrementar(string nombre, string edad);
};

void EjercicioSobrecargaH::Incrementar(float valor){
 	contador += valor;
    cout << "Contador: " << contador << endl;
}

void EjercicioSobrecargaH::Incrementar(float recibe, float multiplicador){
	for (int i = 0; i < recibe;i++){
		contador += multiplicador;
		cout << "resultado: " << contador << endl;
		}
	}

void EjercicioSobrecargaH::Incrementar(float menor, float mayor, float medio){
	if (mayor < menor && mayor > medio ){
 	float r= contador + menor;
	cout << "Contador: " << r << endl;
	}else {
		cout << "no se cumplio la condicion anterior: " << endl;
	}
}
float EjercicioSobrecargaH::Incrementar(string nombre, string edad){
	cout << "Contador: " << contador << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;

    return contador;
	}
