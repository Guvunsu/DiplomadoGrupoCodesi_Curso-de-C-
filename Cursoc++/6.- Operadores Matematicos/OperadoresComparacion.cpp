#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1 = 10;
	int num2 = 20;
	
	/*
	< menor que
	> mayor que
	<= menor o igual
	>= mayor o igual
	== exactamente igual
	!= diferente
	*/
	
	bool comparacion1 = num1 > num2;
	bool comparacion2 = num1 < num2;
	
	cout << "Numero 1 es mayor que numero 2? " << comparacion1 << endl;
	cout << "Numero 2 es menor que numero2? " << comparacion2 << endl;
}
