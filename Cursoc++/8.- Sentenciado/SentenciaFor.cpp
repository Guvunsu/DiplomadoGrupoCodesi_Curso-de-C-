#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SentenciaFor{
	public:
		repetir();
		repetirAnidado();
};

SentenciaFor:: repetir(){
	int f;
	for(f = 1; f <= 100; f++){
		cout << "El valor de f es " << f << endl;
	}
}
SentenciaFor::repetirAnidado(){
	int i,j,res;
	for(i =1 ;i <=3;i++){
		for (j=5; j <=10; j++){
			res = i*j;
			cout << i << "X" << j << " = " << res << endl;
		}
	}
}
int main() {
	SentenciaFor f = SentenciaFor();
	f.repetir();
	f.repetirAnidado();
	return 0;
}
