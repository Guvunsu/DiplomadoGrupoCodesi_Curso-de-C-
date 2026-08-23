#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class Suma{
	public:
	int suma = 0;
	int total = 0;
	int numero;
	void Total();
};
void Suma:: Total(){
	
	for(int i = 1; i <= 10; i++){
		cout << "dame 10 numeros enteros" << endl;
	cin >>  i;
	suma = total + i;
	
	}
		cout << "total " << suma << endl;
	return ;
}
int main() {
	Suma s = Suma();
	s.Total();
	return 0;
}
