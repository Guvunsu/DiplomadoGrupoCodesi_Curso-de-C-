#include <iostream>
#include "SobreCargaDeMetodosh.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	SobreCargaDeMetodosh sm = SobreCargaDeMetodosh();
	sm.metodo("Alex", "1234");
	
	SobreCargaDeMetodosh sm2 = SobreCargaDeMetodosh();
	sm2.metodo("Rodolfo", "4567");
	
	return 0;
}
