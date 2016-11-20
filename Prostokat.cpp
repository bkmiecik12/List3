#include <iostream>
#include "Prostokat.h"
//#include "Punkt.h"

using namespace std;

Prostokat::Prostokat(Punkt a1, Punkt a2)
{
	a = a1;
	b = a2;
}

Prostokat::Prostokat(int a1, int a2, int a3, int a4)
{
	a = Punkt(a1,a2);
	b = Punkt(a3,a4);
}

Prostokat::~Prostokat(){}

double Prostokat::pole()
{
	return (b.x-a.x)*(b.y-a.y);
}
