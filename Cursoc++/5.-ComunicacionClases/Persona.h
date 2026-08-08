#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Persona{
	public :
		string nombre;
		int edad;
		public:
			Persona();
			Persona(string n, int e);
			Persona (int e2, string n2);
			void imprimir();
};

Persona:: Persona(){
	nombre = "Alejandro";
	edad=48;
};

Persona:: Persona(string n, int e){
	nombre=n;
	edad=e;
};

Persona:: Persona(int e2, string n2){
	nombre=n2;
	edad=e2;
};

void Persona :: imprimir(){
	cout << "Nombre" << nombre << endl;
	cout << "Edad" << edad << endl;
};

