#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Ejercicio{
	public:
		Escuela();
		Curso();
		Certificado();
		Mensaje1();
		Mensaje2();
		Mensaje3();
		Mensaje4();
};

Ejercicio:: Escuela(){
	cout << "Grupo Codesi"<< endl;
}
Ejercicio:: Curso(){
	cout << "Curso de C++"<< endl;
}
Ejercicio:: Certificado(){
	cout << "Cetificacion de C++ 100% real, no fake" << endl;
}
Ejercicio:: Mensaje1(){
	cout << "Somos tu mejor opcion"<< endl;
}
Ejercicio:: Mensaje2(){
	cout << "Garantia de aprendizaje"<< endl;
}
Ejercicio:: Mensaje3(){
	cout << "Contactanos" << endl;
}
Ejercicio:: Mensaje4(){
	cout << "Gracias por su visita"<< endl;
}
int main() {
	Ejercicio e =Ejercicio();
	e.Escuela();
	e.Curso();
	e.Certificado();
	e.Mensaje1();
	e.Mensaje2();
	e.Mensaje3();
	e.Mensaje4();
	return 0;
}
