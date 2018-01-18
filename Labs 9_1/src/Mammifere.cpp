#include "Mammifere.h"
#include <iostream>
using namespace std;

Mammifere::Mammifere(string  n, string  c, string  cr, double ds): Animal(n, c, cr), dureesevrage(ds)
{}


void Mammifere::affiche()
{
	Animal::affiche();
	cout <<
	"Duree de sevrage : " << dureesevrage << "mois" << endl;
}
