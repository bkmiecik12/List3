#include <iostream>
#include "Punkt.h"

using namespace std;


Punkt::Punkt()
{
	x=0;
	y=0;
	z=0;
}

Punkt::Punkt(int a, int b)
{
	x=a;
	y=b;
	z=0;
}

Punkt::Punkt(int a, int b, int c)
{
	x=a;
	y=b;
	z=c;
}

Punkt::~Punkt(){}
