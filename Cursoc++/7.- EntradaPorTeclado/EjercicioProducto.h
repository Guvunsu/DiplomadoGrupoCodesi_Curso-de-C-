#include <iostream>

#include <stdlib.h>

#include <stdio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
class Productos{

 public:

  string idProducto;
  string descripcion;
  string cantidad;
  string precio;

  double subtotal;
  double iva;
  double total;
  
  public:

   void Producto();
   void Resultado();

};

void Productos:: Producto(){

 cout << "Bienvenido por favor ingrese los siguientes datos del producto" << endl
 << "Despues le saldra la informacion de su costo" << endl;

 cout << "ingrese el ID del producto en cuestion" << idProducto << endl;
 idProducto;
 cin >> idProducto;
 
 cout << "A continuacion ingrese una descripcion breve del producto " << descripcion << endl;
 descripcion;
 cin >> descripcion;
 
 cout << "¿Cuantos hay almacenados? " << cantidad << endl;
 cantidad;
 cin >> cantidad;
 
 cout << "coloque su precio " << precio << endl;
 precio;
 cin >> precio;
 
 float idNum = atof(idProducto.c_str());
 float cantidadNum = atof(cantidad.c_str());
 float precioNum = atof(precio.c_str());
 
 subtotal = cantidadNum * precioNum;
 iva = subtotal * 0.16;
 total = subtotal + iva;
 
 cout << "el subtotal es: " << subtotal << endl; 
 cout << "cuanto de impuesto? " << iva << endl;
 cout << "cuanto de total? " << total << endl;
}
