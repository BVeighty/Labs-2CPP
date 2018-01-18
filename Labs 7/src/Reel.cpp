#include "Reel.h"
#include <iostream>
using std::cout;
using std::endl;

Reel::Reel(double a) : x(a)
{
    
}

double Reel::module()
{
	if (x < 0)
		return -x;
	else
		return x;
}

void Reel::affiche()
{
	cout << x << endl;
}