#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Objectos {
	// aqui declaramos nuestros metodos y constructores
	public: 
	Objectos();
	mensaje();
	mensaje2();
};

Objectos:: Objectos(){
	cout << "Mensaje desde el constructor" << endl;
}

Objectos :: mensaje(){
	cout << "Hola desde un metodo" << endl;
}

Objectos::mensaje2(){
	cout << "Hola desde un metodo 2"<< endl;
} 

int main (){
	Objectos o = Objectos();
	o.mensaje();
	o.mensaje2();
	return 0;
}
