#include <iostream>
#include <string> 
using namespace std;

class PC {
public:
    string computadora = "Lenovo";
    int discoDuro;
    string procesador;
    bool pantallaPlana;
    bool unidadDVD;
    bool impresora;
    bool scanner;
    string marca;
    string memoria;
    bool fuentedepoder;

public:
    // Constructores
    PC();
    PC(bool pantallaPlana, bool unidadDVD, bool impresora, bool scanner);
    PC(string marca, string memoria, bool fuentedepoder);

    // Métodos
    void imprimir1();
    void imprimir2();
    void imprimir3();
};

// Constructor por defecto
PC::PC() {
    computadora = "Lenovo";
    discoDuro = 1000;
    procesador = "AMD";
    pantallaPlana = false;
    unidadDVD = false;
    impresora = false;
    scanner = false;
    marca = "";
    memoria = "";
    fuentedepoder = false;
}

// Constructor con parámetros bool
PC::PC(bool pantallaPlana, bool unidadDVD, bool impresora, bool scanner) {
    this->pantallaPlana = pantallaPlana;
    this->unidadDVD = unidadDVD;
    this->impresora = impresora;
    this->scanner = scanner;
    // Los demás atributos quedan con valores por defecto o sin inicializar
}

// Constructor con parámetros string y bool
PC::PC(string marca, string memoria, bool fuentedepoder) {
    this->marca = marca;
    this->memoria = memoria;
    this->fuentedepoder = fuentedepoder;
    // Los demás atributos quedan con valores por defecto o sin inicializar
}

void PC::imprimir1() {
    cout << "computadora: " << computadora << endl;
    cout << "disco duro: " << discoDuro << endl;
    cout << "procesador: " << procesador << endl;
}

void PC::imprimir2() {
    cout << "cuenta con pantalla plana? " << pantallaPlana << endl;
    cout << "cuenta con unidad de DVD? " << unidadDVD << endl;
    cout << "cuenta con impresora? " << impresora << endl;
    cout << "cuenta con scanner? " << scanner << endl;
}

void PC::imprimir3() {
    cout << "marca: " << marca << endl;
    cout << "memoria: " << memoria << endl;
    cout << "fuente de poder: " << fuentedepoder << endl;
}

int main() {
    PC pc1;  // Constructor por defecto
    PC pc2(true, true, false, true);  
    PC pc3("HP", "16GB", true);  

    cout << "=== PC 1 (por defecto) ===" << endl;
    pc1.imprimir1();
    pc1.imprimir2();
    pc1.imprimir3();

    cout << "\n=== PC 2 (con periféricos) ===" << endl;
    pc2.imprimir1();
    pc2.imprimir2();

    cout << "\n=== PC 3 (con marca específica) ===" << endl;
    pc3.imprimir1();
    pc3.imprimir3();

    return 0;
}
