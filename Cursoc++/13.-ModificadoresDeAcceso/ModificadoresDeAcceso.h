#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class ModificadoresDeAcceso{
	public:
		double operacion;
		suma(double numero);
		private:
			double resta();
};

ModificadoresDeAcceso::suma(double numero){
	cout << "el metodo uno es public: " << endl;
	cout << "la variable numero vale: " << numero << endl;
	cout << "mandamos a llamar el metodo privado: " << endl;
	resta();
}

double ModificadoresDeAcceso::resta(){
	cout << "este metodo es privado " << endl;
	return 0;
}

