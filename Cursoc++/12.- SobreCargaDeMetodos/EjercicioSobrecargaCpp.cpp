#include <iostream>
#include "EjercicioSobrecargaH.h"

using namespace std;

int main() {

    EjercicioSobrecargaH es;

    float valor;
    float recibe;
    float multiplicador;
    float menor;
    float mayor;
    float medio;
    float total;
    string nombre;
    string edad;

    // PRIMER METODO

    cout << "Ingrese un valor: ";
    cin >> valor;

    es.Incrementar(valor);


    // SEGUNDO METODO

    cout << "\nIngrese un valor menor a 10: ";
    cin >> recibe;

    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    es.Incrementar(recibe, multiplicador);


    // TERCER METODO

    cout << "\nIngrese el primer numero y sea menor: ";
    cin >> menor;
    
	 cout << "Ingrese el segundo numero mayor al anterior: ";
    cin >> medio;

    cout << "Ingrese el tercer numero y que sea mayor a los anteriores: ";
    cin >> mayor;

    es.Incrementar(menor, mayor, medio);


    // CUARTO METODO

    cout << "\nIngrese un nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    es.Incrementar(nombre, edad);
	

    return 0;
}
