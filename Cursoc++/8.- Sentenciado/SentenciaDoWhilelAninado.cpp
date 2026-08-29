#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SentenciaDoWhilelAninado{
	public:
		repetirAninado();
};
SentenciaDoWhilelAninado:: repetirAninado(){
	int i = 1;
	int j = 5;
	 int res = 0;
	 
	 do{
	 	do{
	 		res = i * j;
	 		cout << i << " X " << j << " = " << res << endl;
	 		j++;
		 }while (j <= 10);
		 j=5;
		 i++;
	 }while ( i <= 10);
}
int main() {
	SentenciaDoWhilelAninado sdwa = SentenciaDoWhilelAninado();
	sdwa.repetirAninado();
	return 0;
}
