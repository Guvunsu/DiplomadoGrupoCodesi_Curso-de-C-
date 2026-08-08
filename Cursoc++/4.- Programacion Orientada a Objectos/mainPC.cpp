#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
		compu();
		compu(bool pantallaPlana,bool unidadDVD,bool impresora,bool scanner);
		compu(string marca, string memoria , bool fuentedepoder);

		imprimir1();
		imprimir2();
		imprimir3();
};

PC:: compu(){
	computadora = "Lenovo";
	discoDuro =1000;
	procesador= "AMD";
}

PC:: compu(bool pantallaPlana, bool unidadDVD, bool impresora, bool scanner){
	pantallaPlana = pantallaPlana;
    unidadDVD = unidadDVD;
    impresora = impresora;
	scanner = scanner;
}

PC:: compu(string marca, string memoria , bool fuentedepoder){
	marca = marca;
	memoria = memoria;
	fuentedepoder = fuentedepoder;
}

PC:: imprimir1(){
	cout << "computadora" << computadora << endl;
	cout << "discoduro" << discoDuro << endl;
	cout << "procesador" << procesador << endl;
}
PC:: imprimir2(){
	cout << "cuenta con pantalla plana?" << pantallaPlana << endl;
	cout << "cuenta con unidad de DVD?" << impresora << endl;
	cout << "cuenta con scanner?" << scanner << endl;
}

PC::imprimir3(){
	cout<<"marca" << marca << endl;
	cout << "memoria" << memoria << endl;
	cout<< "fuente de poder" << fuentedepoder << endl;
}
int main() {
	PC pc=PC();
	pc.compu();
	pc.compu(bool pantallaPlana, bool unidadDVD, bool impresora, bool scanner);
	pc.compuC(string marca, string memoria , bool fuentedepoder);
	
	pc.imprimir1();
	pc.imprimir2();
	pc.imprimir3();
	return 0;
}
