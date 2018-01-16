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
