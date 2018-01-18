#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

Animal::Animal(string  n, string  c, string  cr):
	nom(n), couleur(c), cri(cr)
{}

void Animal::affiche()
{
	cout <<
	"Nom : " << nom << endl <<
	"Couleur : " << couleur << endl <<
	"Cri : " << cri << endl;
}