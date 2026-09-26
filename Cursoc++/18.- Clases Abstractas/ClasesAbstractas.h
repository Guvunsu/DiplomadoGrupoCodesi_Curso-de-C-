#include <iostream>
using namespace std;

class ClaseAbstractas{
	public:
		string nombre;
	public:
		virtual int suma()=0;
		virtual int mensaje()=0;
};
