#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SentenciaDoWhile{
public:
repetir(); 
};
SentenciaDoWhile:: repetir(){
	int i = 1;
	do{
		cout << i << endl;
		i++;
	}while (i <= 10);
}
int main() {
	SentenciaDoWhile sdw = SentenciaDoWhile();
	sdw.repetir();
	return 0;
}
