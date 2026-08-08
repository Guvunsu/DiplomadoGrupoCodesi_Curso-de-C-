#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Operacion{
	int num1 = 33;
	int num2 = -13;
	
	int suma;
	int resta;
	int multi;
	float division;
	
	public: 
	Operacion(/*int suma, int resta, int multi, float division*/);
	
	public: 
	Resultado();
};

Operacion:: Operacion(/*int suma, int resta, int multi, float division*/){
suma =  num2 + num2 ;
resta =  num2 - num2;
division = num1 / num1 ;
multi = num1 * num1;
};

Operacion::Resultado(){
cout << "Suma es: " << 	suma << endl;
cout << "resta es: " << resta << endl;
cout << "multi es: " << multi << endl;
cout << "division es: " << division << endl;
};

