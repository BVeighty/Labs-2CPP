#include <iostream>
#include "Rationnelle.h"
using namespace std;

int main()
{
    Rationnelle frac = Rationnelle(2, 5);
    frac.affiche();
    Rationnelle frac2 = Rationnelle(14, 20);
    frac2.affiche();

    Rationnelle frac3 = frac+frac2;
    frac3.affiche();
    Rationnelle frac4 = frac3++;
    frac4.affiche();
    frac3.affiche();

    //frac.affiche();
    //cout << frac.partieEntiere();

    return 0;
}
