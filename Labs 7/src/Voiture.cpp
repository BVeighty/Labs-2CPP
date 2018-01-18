#include "Voiture.h"
#include <iostream>

using namespace std;

double Voiture::decote = 5;

Voiture::Voiture(const std::string& s, const int& a, const double& p) :
        marque(s),
        annee(a),
        prixachat(p)
{
    if(annee<0)
        annee *= -1;
    if(annee>ANNEE_ACTUELLE)
        annee=ANNEE_ACTUELLE;

    if(prixachat<0)
        prixachat *= -1;
}


double Voiture::calculprixactuel() const
{
    int newPrix = prixachat;
    for (int i = 0; i++; i<ANNEE_ACTUELLE-annee)
    {
        newPrix *= (100-getdecote())/100;
        cout << newPrix << endl;
    }
    return newPrix;
}

double Voiture::getdecote() const
{
    return Voiture::decote;
}

std::ostream& operator<<(std::ostream& flux, const Voiture& v)
{
    flux << "Marque : " << v.marque << "\n"
        << "Annee : " << v.annee << "\n"
        << "Prix d'achat : " << v.prixachat;

    return flux;
}
