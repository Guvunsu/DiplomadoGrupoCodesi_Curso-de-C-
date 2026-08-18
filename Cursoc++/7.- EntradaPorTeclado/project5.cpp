#include <iostream>

using namespace std;

class OperacionesDeEntrada {

    float dato1;
    float dato2;

public:

    void Operaciones();

};

void OperacionesDeEntrada::Operaciones() {

    cout << "Ingrese un valor al 1er dato: " << endl;
    cin >> dato1;

    cout << "Ingrese un valor al 2do dato: " << endl;
    cin >> dato2;

    float suma = dato1 + dato2;
    float resta = dato1 - dato2;
    float multiplicacion = dato1 * dato2;

    cout << endl;
    cout << "El dato 1 es: " << dato1 << endl;
    cout << "El dato 2 es: " << dato2 << endl;

    cout << endl;
    cout << "Los resultados son:" << endl;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;

    if (dato2 != 0) {

        float division = dato1 / dato2;

        cout << "Division: " << division << endl;

    } else {

        cout << "Division: No se puede dividir entre cero." << endl;

    }

}

int main() {

    OperacionesDeEntrada oE;

    oE.Operaciones();

    return 0;
}
