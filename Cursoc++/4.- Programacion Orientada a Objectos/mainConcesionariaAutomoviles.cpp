#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

string eslogan = "Nuestro eslogan es:";
int autoPartes = 1;
char millones = 'M';

class ConcesionariaAutomoviles{
	public: 
	Bienvenidos();
	AutomovilesChevrolet();
	AutoPartes();
};

ConcesionariaAutomoviles:: Bienvenidos(){
	cout << "Bienvenidos" << endl;
}

ConcesionariaAutomoviles:: AutomovilesChevrolet(){
	cout << eslogan << "Encuentra nuevos caminos" << endl;
}

ConcesionariaAutomoviles:: AutoPartes(){
	cout << "Tenemos autopartes de todo tipo con un inventario de:" << " "  << autoPartes << millones << " " << "de auto partes" << endl;
}

int main() {
	ConcesionariaAutomoviles aP = ConcesionariaAutomoviles();
	aP.Bienvenidos();
	aP.AutomovilesChevrolet();
	aP.AutoPartes();
	return 0;
}
