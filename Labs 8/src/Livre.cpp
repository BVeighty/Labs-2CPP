#include "Livre.h"
#include <iostream>

using namespace std;

Livre::Livre(string t, string a, int p): titre(t), auteur(a)
{
    if(p<0)
    	p = -p;
    pages = p;
}

void Livre::affiche()
{
	cout << titre << " est une oeuvre de " << pages << " pages ecrtit par " << auteur;
}
