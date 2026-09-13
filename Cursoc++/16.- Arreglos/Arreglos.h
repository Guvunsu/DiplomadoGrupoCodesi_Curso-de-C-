#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Arreglos{
	public:
		asignar();
		metodo();
		ejercicio();
};

Arreglos::asignar(){
	int edad[4];
	edad[0]=3;
	edad[1]=5;
	edad[2]=edad[0]+edad[1];
	
	cout << "edad [0]: " << edad[0] << endl;
	cout << "edad[1]: " << edad[1] << endl;
	cout << "edad[2]: " << edad[2] << endl;
 }
 
 Arreglos::metodo(){
 	int edades[] = {1,2,3,4,5,6,7,8,9,10,16,32,9,50,36,20,1,87};
 	int limite = sizeof(edades);
 	cout << "limite " << limite << endl;
 	for (int i=0; i<limite; i++){
 		cout << edades[i] << endl;
	 }
 }
 
 Arreglos::ejercicio(){
 	string titulos[5];
 	string autores[5];
 	cout << "por favor ingrese la siguiente informacion de los libros: \n";
 	for (int i=0;i<5;i++){
 		cout<<"\n***** Libro " << i+1 << "***********: \n";
 		cout << "Titulo: " ;
 		cout << "\n Autor: ";
 		cin >> autores[i];
	 }
	 for (int i=0; i<5; i++){
	 	cout << "\n******* Libro " << i+1 << "**********:\n";
	 	cout << "Titulo: " << titulos[i];
	 	cout << "Autor: " << autores[i];
	 }
 }
