#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Errores{
	public: 
	error();
};

Errores:: error(){
	int repetir=0;
	do{
		try{
			repetir =0;
			cout<<"Dame un numero: " << endl;
			int n1;
			cin>> n1;
			
			cout<<"Dame un numero: " << endl;
			int n2;
			cin>>n2;
			
			if(n2==0){
				throw "division by zero condition!";
			}
			int res= n1/n2;
			cout<<"el resultado es:" << res << endl;
		}catch (const char* msg){
			cerr << msg << endl;
			repetir=1;
		}
	}while(repetir==1);
}

int main() {
	Errores e = Errores();
	e.error();
	return 0;
}
