#include <iostream>
#include "Prostokat.h"

using namespace std;

class Pscian
{
	public:
	Prostokat p;
	Punkt c;
	
	Pscian(Prostokat,Punkt);
	Pscian(Punkt,Punkt,Punkt);
	Pscian(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
	~Pscian();
	double pole();
	double obj();

};
