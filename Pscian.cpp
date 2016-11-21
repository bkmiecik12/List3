#include <iostream>
#include "Pscian.h"
#include <stdlib.h>
//#include "Punkt.h"

using namespace std;

Pscian::Pscian(Prostokat a1, Punkt a3) 
	: Prostokat(a1)
{
	c = a3;
}

Pscian::Pscian(Punkt a1, Punkt a2, Punkt a3) 
	: Prostokat(a1, a2)
{
	c = a3;
}

Pscian::Pscian(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
	: Prostokat(a1,a2,a3,a4)
{
	c = Punkt(a5,a6);
}

Pscian::~Pscian(){}

double Pscian::pole()
{
	return 2*Prostokat::pole()+2*abs(b.x-a.x)*(c.z)+2*abs(b.y-a.y)*(c.z);
}

double Pscian::obj()
{
	return Prostokat::pole()*abs(c.z-a.z);
}
