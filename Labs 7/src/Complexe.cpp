#include "Complexe.h"
#include <iostream>
#include <cmath>
using namespace std;

Complexe::Complexe(double a, double b): Reel(a), y(b)
{
}

double Complexe::module()
{
	return sqrt(x*x + y*y);
}

void Complexe::affiche()
{
	cout << x << " ; " << y << endl;
}
