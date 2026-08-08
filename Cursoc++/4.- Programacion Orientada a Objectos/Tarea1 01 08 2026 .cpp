#include <iostream>

using namespace std;

class Agencia{
	public:
	//variables
	string marca= "Fiat";
    string modelo = "Pulse";
	string color = "Azul Electrico";
	int cilindros = 4 ;
	char transmision = 'M';
	float enganche = 40000.00;
	bool seguro = true;
	float costoTotal= 345950.00;
	string agradecimiento = "Gracias por su visita.";
		
		public:
			//constructores
			Agencia();
			Agencia(string marca, string modelo, string color, char M , int cilindros, bool seguro);
			Agencia(float enganche , float costoTotal);
			//metodos
			void PrintCostoFinal();
			void PrintAgradecimientoFinal();
};

Agencia:: Agencia(){
	marca= "Fiat";
	modelo = "Pulse";
	color = "Azul Electrico";
	cilindros = 4 ;
	transmision = 'M';
	enganche = 40000.00;
	seguro = true;
	costoTotal= 345950.00;
	//string agradecimiento = "Gracias por su preferencia";
};

Agencia:: Agencia(string marca, string modelo, string color, char transmision , int cilindros, bool seguro){
this->marca =marca;
this->modelo=modelo;
this->color=color;
this->transmision = transmision;
this->cilindros=cilindros;
this->seguro=seguro;
};

Agencia:: Agencia(float enganche , float costoTotal){
	this->enganche=enganche;
	this->costoTotal=costoTotal;
};

//Salida de texto
void Agencia::PrintAgradecimientoFinal(){
cout << "Gracias por elegir a: " << marca << endl
 << "modelo:" << modelo << "."<< endl 
 << "Color: "<< color << "." << endl 
 << "Cilindraje total: "<< cilindros << "." << endl
 << "Transmision: " << transmision << "." << endl
 << "¿Seguro vehicular incluido? " << seguro << "." << endl
 << "0=No, 1=Si."<< endl;
};

//Salida de texto
void Agencia::PrintCostoFinal(){
	cout << "Costo de enganche: " << "$" << enganche << " pesos mexicanos." << endl 
	<< "Costo total: " << "$" << costoTotal << " pesos mexicanos." <<endl
	<< agradecimiento << endl; 
};

int main() {	
	Agencia carro("Fiat", "Pulse", "Azul Electrico", 'M' , 4, true);
	carro.PrintAgradecimientoFinal();
	
    Agencia costo(40000.00 , 345950.00);
    costo.PrintCostoFinal();
	return 0;
};
