#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class ConvertirString{
	public:
	void conversion();
};

void ConvertirString::conversion(){
	cout << "Ingrese numero 1 con decimal" << endl;
	string numero1;
	cin >> numero1;
	
	cout << "Ingrese numero 2 con decimal" << endl;
	string numero2;
	cin >> numero2;
	
	//convertir string a float 
	float num1 = atof(numero1.c_str());
	double num2 = atof(numero2.c_str());
	
	double resultado = num1 + num2;
	
	//convertir numerico a string
	string n1 = to_string(num1);
	string n2 = std::to_string(num2);
	string res = std::to_string(resultado);
	
	cout << "Numero 1 vale:  :" << n1 << endl;
	cout << "Numero 1 vale: :" << n2 << endl;
	cout << "El resultado es:" << res << endl;
}

