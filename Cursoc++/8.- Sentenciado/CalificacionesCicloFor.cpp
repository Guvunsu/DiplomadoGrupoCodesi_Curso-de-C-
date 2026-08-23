#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class Calificaciones{
	public:
		int alumnos;
		float calificaciones;
		float promedio = 0;
	
		int resultado;
		public:
		PromedioCalificaciones();
};

Calificaciones::PromedioCalificaciones(){
	float suma = 0;
	cout << "calificaciones de cada alumno: " << endl;
	cin >> calificaciones;

for ( int i = 1; i <= calificaciones; alumnos++){
	cout << "La nota es: " << endl;
	float nota;
	cin >> nota;
	
	suma = suma + nota;
	promedio = suma / calificaciones;
	} 
	
	cout << "promedio general es: " << promedio << endl;

}

int main() {
	Calificaciones e = Calificaciones();
	e.PromedioCalificaciones();
	return 0;
}
