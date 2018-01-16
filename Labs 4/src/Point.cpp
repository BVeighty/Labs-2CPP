#include "Point.h"
#include <iostream>
using std::cout;
using std::endl;

Point::Point(double abs, double ord):
abscisse(abs) ,ordonnee(ord)
{
    //  abscisse = abs;
    //  ordonnee = ord;
}
void Point::affiche()
{
    cout << "Coordonnees : " << abscisse << " ; " << ordonnee << endl;
}
void Point::setAbscisse(double abs)
{
    abscisse = abs;
}
void Point::setOrdonnee(double ord)
{
    ordonnee = ord;
}
