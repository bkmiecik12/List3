#include <iostream>
#include "Pscian.h"
//#include "Punkt.h"

using namespace std;

Pscian::Pscian(Punkt a1, Punkt a2, Punkt a3) 
	: Prostokat(a1, a2)
{
	c = a1;
}

Pscian::Pscian(int a1, int a2, int a3, int a4, int a5, int a6)
	: Prostokat(a1,a2,a3,a4)
{
	c = Punkt(a5,a6);
}

Pscian::~Pscian(){}

double Pscian::pole()
{
	return 2*(b.x-a.x)*(b.y-a.y)+2*(c.x-a.x)*(c.y-a.y)+2*(c.x-b.x)*(c.y-b.y);
}
