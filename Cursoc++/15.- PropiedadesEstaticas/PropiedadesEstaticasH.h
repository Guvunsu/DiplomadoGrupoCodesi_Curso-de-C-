#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class PropiedadesEstaticasH{
	public:
		static string nombre1;
		static string nombre2;
		public:
			static metodo1();
};
string PropiedadesEstaticasH::nombre1 = "GrupoCodesi";
string PropiedadesEstaticasH::nombre2 = "Https://www.grupocodesi.com";

PropiedadesEstaticasH::metodo1(){
	cout << " Un metodo estatico puede ser llamado por otro metodo estatico" << endl;
	cout << "Un metodo no estatico puede llamar a un metodo estatico" << endl;
	cout << "Un metodo estatico no puede llamar a un metodo no estatico" << endl;
}
