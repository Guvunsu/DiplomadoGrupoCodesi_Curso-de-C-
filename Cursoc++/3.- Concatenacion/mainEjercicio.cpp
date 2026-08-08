#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string nombre = "Gavryk Fray Rojas";
	bool vive = "true";
	string apepat = "http://www.grupocodesi.com";
	string apemat = "Curso de Programacion de C++";
	float sueldoMensual = 123.123;
	float sueldoAnual = 123123.123;
	float sueldoDiario = 321.321;
	int edad = 28;
	string escolaridad = "Universidad";
	
	cout << "Nombre Completo del alumno:" << nombre << endl;
	cout<< "¿La persona vive?:" << vive << endl;
	cout << "¿En donde cursa el diplomado?" << apepat << endl;
	cout << "¿Que curso es?:" << apemat << endl;
	cout << "Sueldo mensual:" << sueldoMensual << endl;
	cout << "Sueldo diario:" << sueldoDiario << endl;
	cout << "Sueldo anual:" << sueldoAnual << endl;
	cout << "Edad de la persona en cuestion:" << edad << endl;
	cout << "Escolaridad del individuo:" << escolaridad << endl;
	return 0;
}
