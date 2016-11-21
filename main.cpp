#include <iostream>
#include "Pscian.h"

using namespace std;

int main()
{
	Punkt a = Punkt(1,1);
	Punkt b = Punkt(3,4);
	Prostokat p1 = Prostokat(a,b);
	Punkt c = Punkt(1,1,1);
	Pscian pp1 = Pscian(a,b,c);
	cout<<"Pole:  "<<p1.pole()<<endl;
	cout<<"Pole2: "<<pp1.pole()<<endl;
	cout<<"Obj:   "<<pp1.obj()<<endl;
}
