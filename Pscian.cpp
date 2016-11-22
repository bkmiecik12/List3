#include <iostream>
#include "Pscian.h"
#include <stdlib.h>
//#include "Punkt.h"

using namespace std;

Pscian::Pscian(Prostokat a1, Punkt a3) 
{
	p = a1;
	c = a3;
}

Pscian::Pscian(Punkt a1, Punkt a2, Punkt a3)
{
	p = Prostokat(a1,a2);
	c = a3;
}

Pscian::Pscian(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
	p = Prostokat(Punkt(a1,a2,a3),Punkt(a4,a5,a6));
	c = Punkt(a7,a8,a9);
}

Pscian::~Pscian(){}

double Pscian::pole()
{
	return 2*(p.pole()+abs(p.b.x-p.a.x)*(c.z)+abs(p.b.y-p.a.y)*(c.z));
}

double Pscian::obj()
{
	return p.pole()*abs(c.z-p.a.z);
}
