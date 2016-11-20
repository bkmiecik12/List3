#include <iostream>
#include "Punkt.h"

using namespace std;

class Prostokat
{
	public:
	Punkt a;
	Punkt b;
	
	Prostokat();
	Prostokat(Punkt,Punkt);
	Prostokat(int a1,int a2,int a3,int a4);
	~Prostokat();
	double pole();

};
