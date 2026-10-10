#include <iostream>
#include "Heredar.h"
#include "Derivada.h"
int main() {
	Heredar *ptr=new Derivada; //puntero de clase base a un objeto de clase derivada
	ptr->MetodoOne();
	ptr->MetodoTwo();
	delete ptr;
	return 0;
}
