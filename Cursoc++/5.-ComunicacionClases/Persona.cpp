#include<iostream>
#include "Persona.h"

int main(){
	Persona p1 = Persona();
	p1.imprimir();
	Persona p2 = Persona("Jose",17);
	p2.imprimir();
	Persona p3 = Persona(30,"Rodolfo");
	p3.imprimir();
	return 0;
}
