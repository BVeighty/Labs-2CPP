#include <iostream>
#include "Reel.h"
#include "Complexe.h"
#include "Voiture.h"
#include "VoitureDeCollection.h"

using namespace std;

int main()
{
    /*
    Reel r(-25);
    Complexe c(13, 18);
    r.affiche();
    c.affiche();
    cout << r.module() << endl;
    cout << c.module() << endl;
    */
    Voiture v("BMW", 2008, 200000);
    cout << "Valeur: actuelle " << v.calculprixactuel();

    return 0;
}
