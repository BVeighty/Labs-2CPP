#include <cmath>
#include <iostream>
#include "Cercle.h"
using namespace std;

Cercle::Cercle(double r, double abs, double ord)
{

    if (r < 0)
    {
        r = 0;
    }
    rayon = r;

    centre = new Point(abs, ord);
    //abscisse = abs;
    //ordonnee = ord;
}
Cercle::Cercle(const Cercle& c)
{
    rayon = c.rayon;
    centre = new Point(c.centre->getAbscisse(), c.centre->getOrdonnee());
}
Cercle& Cercle::operator= (const Cercle& c)
{
    rayon = c.rayon;
    centre = new Point(c.centre->getAbscisse(), c.centre->getOrdonnee());
}
Cercle::~Cercle()
{
    delete centre;
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
    cout << "Cercle de ";
    centre->affiche();
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
    centre->setAbscisse(abs);
}
void Cercle::setOrdonnee(double ord)
{
    centre->setOrdonnee(ord);
}
bool Cercle::estCompris(Point p)
{
    double distance = sqrt(pow(centre->getAbscisse()-p.getAbscisse(), 2) + pow(centre->getOrdonnee()-p.getOrdonnee(), 2));
    bool result = distance <= rayon;

    return result;
}
void Cercle::translation(double x, double y)
{
    centre->setAbscisse(centre->getAbscisse() + x);
    centre->setOrdonnee(centre->getOrdonnee() + y);
}
void Cercle::homothetie(double r)
{
    centre->setAbscisse(centre->getAbscisse() * r);
    centre->setOrdonnee(centre->getOrdonnee() * r);
    rayon *= r;
}



