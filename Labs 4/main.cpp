#include <iostream>
#include "Cercle.h"
#include "Point.h"

using namespace std;

int main()
{
/*
    Cercle monCercle = Cercle(5, 2, 3);
    double monAire = monCercle.aire();
    cout << monAire << endl;
    double monPerim = monCercle.perimetre();
    cout << monPerim << endl;
    monCercle.afficherProprietes();
    cout << monCercle.estCompris(6.9, 7.9)<<endl;
    monCercle.translation(4, -1);
    monCercle.afficherProprietes();
    monCercle.homothetie(2);
    monCercle.afficherProprietes();
    */
    Point monPoint(5, 8);
    monPoint.affiche();
    monPoint.setAbscisse(-8);
    monPoint.affiche();


    return 0;
}
