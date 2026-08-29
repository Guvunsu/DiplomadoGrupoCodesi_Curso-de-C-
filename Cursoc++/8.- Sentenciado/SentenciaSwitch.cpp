#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class SentenciaSwitch{
	public:
		menu();
};
SentenciaSwitch:: menu(){
	cout << "ingrese la opcion a ejecutar";
	int opcion = 0;
	cin >> opcion;
	switch(opcion){
		case 1:
			cout << "usted ha seleccionado la opcion 1";
			break;
			case 2:
				cout << "usted ha selecionado la opcion 2";
				break;
				case 3:
				cout << "usted ha selecionado la opcion 3";
				break;
				default:
					cout << "Usted ha selecionado una opcion incorrecta";
	}
}
int main() {
	SentenciaSwitch ss = SentenciaSwitch();
	ss.menu();
	return 0;
}
