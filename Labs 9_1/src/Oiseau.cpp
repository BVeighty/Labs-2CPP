#include "Oiseau.h"
#include <iostream>
using namespace std;

Oiseau::Oiseau(string  n, string  c, string  cr,double la):	Animal(n, c, cr), longueurailes(la)
{}

void Oiseau::affiche()
{
	Animal::affiche();
	cout <<
	"Longueure des ailes : " << longueurailes << "cm" << endl;
}
