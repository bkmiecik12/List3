#include <iostream>
#include "Prostokat.h"

using namespace std;

int main()
{
	Punkt a=new Punkt(1,1);
	Punkt b=new Punkt(3,4);
	Prostokat p1= new Prostokat(a,b);
	cout<<"Pole: "<<p1.pole()<<endl;
}
