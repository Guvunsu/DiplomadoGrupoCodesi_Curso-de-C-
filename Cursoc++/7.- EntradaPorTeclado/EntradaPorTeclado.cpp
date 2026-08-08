#include <iostream>
using namespace std;

class EntradaTeclado{
	public:
		string nombre;
		public:
			entrada();
};

EntradaTeclado:: entrada(){
	cout << "Dame tu nombre: " << endl;
	string nombre;
	cin >> nombre;
	
	cout << "Bienvenidos al curso de C++: " << nombre << endl;
}

int main (){
	EntradaTeclado et = EntradaTeclado();
	et.entrada();
}
