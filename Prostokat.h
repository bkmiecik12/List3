#include <iostream>
#include "Punkt.h"

using namespace std;

class Prostokat
{
	public:
	Punkt a;
	Punkt b;
	
	
	Prostokat(Punkt,Punkt);
	Prostokat(int,int,int,int);
	~Prostokat();
	int pole();

};
