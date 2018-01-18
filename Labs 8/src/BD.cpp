#include "BD.h"
#include <iostream>
#define PRIX_PAR_PAGE 0.3
using namespace std;

BD::BD(string t, string a, int p, string d) :
Livre(t, a, p),
dessinateur(d)
{}

void BD::affiche()
{
	Livre::affiche();
	cout << " dessine par " << dessinateur;
}

double BD::calculer_prix()
{
	return pages * PRIX_PAR_PAGE;
}
