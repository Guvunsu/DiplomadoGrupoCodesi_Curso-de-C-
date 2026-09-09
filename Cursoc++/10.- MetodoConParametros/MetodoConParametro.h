#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class MetodoConParametro{
	public:
		void suma(int num1, int num2);
		void resta(int num3,int num4);
};
void MetodoConParametro::resta(int num3, int num4){
	int resultado = num3 - num4;
	cout << "resta es R= " << resultado << endl;
}
void MetodoConParametro::suma(int num1, int num2){
	int resultado = num1 + num2;
	cout << "suma es R= " << resultado << endl;
}

