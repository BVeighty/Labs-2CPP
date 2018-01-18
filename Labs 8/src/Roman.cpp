#include "Roman.h"
#include <iostream>
#define PRIX_PAR_PAGE 0.01
using namespace std;


Roman::Roman(string t, string a, int p, bool g):
Livre(t, a, p),
Goncourt(g)
{}

void Roman::affiche()
{
	Livre::affiche();
	if(Goncourt)
		cout << " ayant ";
	else
		cout << " n'ayant pas ";

	cout << "gagne le prix Goncourt ";
}

double Roman::calculer_prix()
{
	return pages * PRIX_PAR_PAGE;
}
