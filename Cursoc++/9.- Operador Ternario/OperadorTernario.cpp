#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class OperadorTernario{
	public:
		operador();
};
OperadorTernario:: operador(){
	int comprar = 5;
	int numero = comprar >= 1 && comprar <= 10 ? 5:
				comprar >= 11 && comprar <= 20 ? 10:
				comprar >= 21 && comprar <= 30 ? 15 : 1;
				
	cout << "La variables numero vale " << numero << endl;
}
int main() {
	OperadorTernario ot = OperadorTernario();
	ot.operador();
	return 0;
}
