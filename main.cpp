#include <iostream>
#include "Prostokat.h"

using namespace std;

int main()
{
	Punkt a = Punkt(1,1);
	Punkt b = Punkt(3,4);
	Prostokat p1 = Prostokat(a,b);
	cout<<"Pole: "<<p1.pole()<<endl;
}
