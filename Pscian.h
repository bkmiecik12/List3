#include <iostream>
#include "Prostokat.h"

using namespace std;

class Pscian : public Prostokat
{
	public:
	Punkt c;
	
	
	Pscian(Punkt,Punkt,Punkt);
	Pscian(int a1, int a2, int a3, int a4, int a5, int a6);
	~Pscian();
	double pole();
	double obj();

};
