#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class EntradaDatos{
	public:
		string nombre;
		string apellidoMaterno;
		string apellidoPaterno;
		string escolaridad;
		public:
			entrada();
};

EntradaDatos:: entrada(){
cout << "Por favor dame tu nombre: " << nombre << endl;
string nombre;
cin >> nombre; 

cout << "Por favor dame tu apellido Materno: " << apellidoMaterno << endl;
string apellidoMaterno;
cin >> apellidoMaterno;

cout << "Por favor dame tu apellido Paterno: " << apellidoPaterno << endl;
string apellidoPaterno;
cin >> apellidoPaterno;

cout << "Tu nivel de escolaridad: " << escolaridad << endl;
string escolaridad;
cin >> escolaridad;	
};
int main() {
	EntradaDatos eD = EntradaDatos();
	eD.entrada();
}
