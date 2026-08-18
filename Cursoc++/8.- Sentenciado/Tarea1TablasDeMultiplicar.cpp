#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class Tablas {
	public :
	void Multiplicar();
};

void Tablas::Multiplicar(){
	for (int i = 0; i <= 10;i++){
		for (int o = 0; o <=10 ;o++){
			int res = i*o;
			cout << "La multiplicación de:  " << i << " x " << o << " = " << res << endl;
		}
	}
}

int main() {
	Tablas t = Tablas();
	t.Multiplicar();
	return 0;
}
