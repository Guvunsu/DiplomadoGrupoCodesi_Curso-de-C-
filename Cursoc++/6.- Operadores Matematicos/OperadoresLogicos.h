#include <iostream>
using namespace std;

class OperadoresLogicos{
	public:
		void operadores();
};

void OperadoresLogicos:: operadores(){
	int numero1 = 5;
	int numero2 = 6;
	
	float flotante1 = 7.7;
	float flotante2 = 8.8;
	char caracter = 'a';
	
	cout << (numero1 < numero2 && flotante1 > flotante2) << endl;
	cout << (numero1 > numero2 || caracter == 'a') << endl;
	cout << ((caracter != 'b' && numero2 > 5) || flotante2 > numero1) << endl;
};
