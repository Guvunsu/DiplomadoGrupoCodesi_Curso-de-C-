#include <iostream>
#include "Autos.h"

int main(){
	Agencia carro("Fiat", "Pulse", "Azul Electrico", 4 , 'M');
	carro.imprimirDatos();
    carro.imprimirMensajeFinal();
    return 0;	
};
