#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class SentenciaWhile{
	public:
		repetirAninado();
};
SentenciaWhile:: repetirAninado(){
	int i = 1;
	int j = 5;
	int res = 0;
	while (i<= 3){
		while(j<=10){
			res = i * j;
			cout << i << " X " << j << " = " << res << endl;
			j++;
		}
		j = 5;
		i++;
	}
}
int main() {
	SentenciaWhile sw = SentenciaWhile();
	sw.repetirAninado();
	return 0;
}
