#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class SentenciaIf{
	public:
		validar();
};

SentenciaIf:: validar(){
	int numero1 = 5;
	int numero2 = 10;
	
	if (numero1 > numero2){
		cout << numero1 << "es mayor a " << numero2 << endl;
	}else if (numero1 < numero2){
		cout << numero1 << "es menor a " << numero2 << endl;
	}else{
		cout << numero1 << "es igual a " << numero2 << endl;
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	SentenciaIf p = SentenciaIf();
	p.validar();
	return 0;
}
