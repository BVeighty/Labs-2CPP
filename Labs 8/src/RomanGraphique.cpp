#include "RomanGraphique.h"
#include <iostream>
#define PRIX_PAR_PAGE 0.2
using namespace std;

RomanGraphique::RomanGraphique(string t, string a, int p, string d, bool g, bool i):
	Livre(t, a, p),
	Roman(t, a, p, g),
	BD(t, a, p, d),
	apprecie_par_Inrocks(i)
{}

void RomanGraphique::affiche()
{
	Roman::affiche();
	cout << "dessine par " << dessinateur;
	cout << "et" << (apprecie_par_Inrocks? " est ": " n'est pas ") << "apprecie par les Inrocks" << endl;
}

double RomanGraphique::calculer_prix()
{
	return pages*PRIX_PAR_PAGE;
}
