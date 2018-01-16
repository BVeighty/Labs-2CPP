#include <cmath>
#include <iostream>
#include "Cercle.h"
using namespace std;

Cercle::Cercle(double r, double abs, double ord): abscisse(abs), ordonnee(ord)
{
    if (r < 0)
    {
        r = 0;
    }
    rayon = r;
    //abscisse = abs;
    //ordonnee = ord;
}

double Cercle::aire()
{
   double result = M_PI*rayon*rayon;
   return result;
}

double Cercle::perimetre()
{
    double result = 2*M_PI*rayon;
    return result;
}

void Cercle::afficherProprietes()
{
    cout << "Coordonnees du cercle : " << abscisse << ";" << ordonnee << endl;
    cout << "Rayon du cercle : " << rayon << endl;
}

void Cercle::setRayon(double r)
{
    if (r < 0)
    {
        r = 0;
    }
    rayon = r;
}
void Cercle::setAbscisse(double abs)
{
    abscisse = abs;
}
void Cercle::setOrdonnee(double ord)
{
    ordonnee = ord;
}
bool Cercle::estCompris(double a, double o)
{
    double distance = sqrt(pow(abscisse-a, 2) + pow(ordonnee-o, 2));
    bool result = distance <= rayon;

    return result;
}
void Cercle::translation(double x, double y)
{
    abscisse += x;
    ordonnee += y;
}
void Cercle::homothetie(double r)
{
    abscisse *= r;
    ordonnee *= r;
    rayon *= r;
}



