#include <iostream>
#include "Livre.h"
#include "BD.h"
#include "Roman.h"
#include "RomanGraphique.h"

using namespace std;

int main()
{

    //Livre l();
    BD bd("Naheulbeuk", "PoC", 45, "osef");
    Roman r("20MLSLM", "J. Verne", 250, true);
    RomanGraphique rg("Les Miserables", "V. Hugo", 200, "H. Victor", false, true);

    //l.affiche();
    //cout << endl;

    bd.affiche();
    cout << endl;

    r.affiche();
    cout << endl;

    rg.affiche();

    return 0;
}
