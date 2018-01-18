#include <iostream>
#include "Duree.h"
#include "Rationnelle.h"
using namespace std;

int main()
{
    /*Duree maDuree(3, 10);
    maDuree.affiche();
    maDuree.setSecondes(135);
    maDuree.affiche();
    cout << maDuree.enSecondes() << endl;
    maDuree.ajouteSecondes(12883);
    maDuree.affiche();*/


    Rationnelle frac = Rationnelle(-52, 48);
    frac.affiche();
    frac.setDenominateur(toto);
    //frac.affiche();
    //cout << frac.partieEntiere();

    return 0;
}
