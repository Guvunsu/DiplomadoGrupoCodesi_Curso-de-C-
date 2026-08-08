#include <iostream>
//nombrar la clase como el archivo no auto.h o .cpp se deberia de llamar Agencia.h y .cpp

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Agencia{
	//variables 
	string marca = "Fiat";
	string modelo = "Pulse";
	string color = "Azul Electrico";
	int cilindros = 4;
	char transmision = 'M';
	float enganche = 40000.00;
	float costoTotal = 345950.00;
	string agradecimiento = "Gracias por elegirnos";
	
	public:
		Agencia();
		Agencia(string marca, string modelo,string color,int cilindros, char transmision );
		Agencia(float enganche, float costoTotal, string agradecimiento);
		
		public:
		void imprimirDatos();
		void imprimirMensajeFinal();
		
};

Agencia::Agencia(){
	 marca = "Fiat";
	 modelo = "Pulse";
	 color = "Azul Electrico";
	 cilindros = 4;
	 transmision = 'M';
	 enganche = 40000.00;
	 costoTotal = 345950.00;
	 agradecimiento = "Gracias por elegirnos";
};

Agencia:: Agencia(string marca, string modelo,string color,int cilindros, char transmision){
	this->marca=marca;
	this->modelo=modelo;
	this->color=color;
	this->cilindros=cilindros;
	this->transmision=transmision;
};

Agencia::Agencia(float enganche, float costoTotal, string agradecimiento) {
	this->enganche=enganche;
	this->costoTotal=costoTotal;
	this->agradecimiento=agradecimiento;
};

void Agencia:: imprimirDatos(){
	cout << "Marca del auto: " << marca << endl
	<< "Modelo del auto: " << modelo << endl
	<< "Color del auto: " << color << endl 
	<< "Tipo de transmision: " << transmision << endl
	<< "Numero de cilindraje del auto: " << cilindros << endl;
};

void Agencia:: imprimirMensajeFinal(){
	cout << "Costo del enganche: " << enganche << endl
	<< "Costo total del automovil: " << costoTotal << endl;
};
