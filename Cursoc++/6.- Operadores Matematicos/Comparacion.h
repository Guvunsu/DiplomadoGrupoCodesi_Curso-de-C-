#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Comparacion{
	int num1 = 100;
	int num2 = 99;
	
	bool comparacion1;
	bool comparacion2;
	bool comparacion3;
	bool comparacion4;
	bool comparacion5;
	bool comparacion6;
	
	public:
	Comparacion();
	
	public:
	Imprimir();
		
};

Comparacion:: Comparacion(){
	comparacion1 = num1 < num2;
	comparacion2 = num1 > num2;
	comparacion3 = num1 <= num1;
	comparacion4 = num2 >= num2;
	comparacion5 = num1 == num2;
	comparacion6 = num2 != num2;
};

Comparacion :: Imprimir(){
	cout << "es menor? " << comparacion1 << endl;
	cout << "es mayor? " << comparacion2 << endl;
	cout << "es menor o igual? " << comparacion3 << endl;
	cout << "es mayor o igual? " << comparacion4 << endl;
	cout << "es exacto o igual? " << comparacion5 << endl;
	cout << "es diferente? " << comparacion6 << endl;
};
