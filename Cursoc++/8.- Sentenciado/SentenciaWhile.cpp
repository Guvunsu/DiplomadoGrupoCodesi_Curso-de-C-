#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class SentenciaWhile{
	public:
		repetir();
};
SentenciaWhile:: repetir(){
	int i =1;
	while (i <= 10){
		cout << i << endl;
		i++;
	}
}
int main() {
	SentenciaWhile w = SentenciaWhile();
	w.repetir();
	return 0;
}
