#include "Duree.h"
#include <cmath>
#include <iostream>
using namespace std;
Duree::Duree(int h, int m, int s)
{
    s = abs(s);
    m = abs(m);
    h = abs(h);

    secondes = s%60;
    int retenueSec = s/60;

    minutes = (retenueSec+m)%60;
    int retenueMin = (retenueSec+m)/60;

    heures = h + retenueMin;
}
void Duree::affiche()
{
    cout << heures << "h";
    if (minutes < 10)
        cout << "0";
    cout << minutes << "m";
    if (secondes < 10)
        cout << "0";
    cout << secondes << "s" << endl;
}
void Duree::setHeures(int h)
{
    heures = abs(h);
}
void Duree::setMinutes(int m)
{
    m = abs(m);

    minutes = m%60;
    heures += m/60;
}
void Duree::setSecondes(int s)
{
    int tempMin = minutes;
    s = abs(s);

    secondes = s%60;
    int retenue = s/60;
    minutes = (tempMin+retenue)%60;
    heures += (tempMin+retenue)/60;

}
long Duree::enSecondes()
{
    long secondesTotal = secondes;
    secondesTotal += minutes*60;
    secondesTotal += heures*3600;
    return secondesTotal;
}
void Duree::ajouteSecondes(int s)
{
    setSecondes(secondes+s);
}

bool operator==(Duree& d1,  Duree& d2)
{
    return d1.enSecondes() == d2.enSecondes();
}

bool operator<( Duree& d1,  Duree& d2)
{
    return d1.enSecondes() < d2.enSecondes();
}

ostream& operator<<(ostream& flux, Duree& d)
{
    flux << d.heures << "h";
    if (d.minutes < 10)
        flux << "0";
    flux << d.minutes << "m";
    if (d.secondes < 10)
        flux << "0";
    flux << d.secondes << "s";

    return flux;
}
istream& operator>>(istream& flux, Duree& d)
{
    int h, m, s;
    flux >> h >> m >> s;
    d = Duree(h, m, s);
    return flux;
}


Duree Duree::operator+(Duree d1)
{
    long Total = enSecondes() + d1.enSecondes();
    return Duree(0, 0, Total);
}

Duree operator-(Duree &d1, Duree &d2)
{
    long Total = d1.enSecondes() - d2.enSecondes();
    return Duree(0,0,Total);
}

