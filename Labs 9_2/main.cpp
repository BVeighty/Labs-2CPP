#include <iostream>
#include "XOR.h"
#include "AND.h"
#include "OR.h"
#include "NOR.h"
#include "NAND.h"

using namespace std;

#define TAILLE_TABLEAU 5

void tableaudeverite();
int main()
{
    ConnecteurBinaire* tab[TAILLE_TABLEAU];
    tab[0] = new XOR(true, false);
    tab[1] = new AND(true, false);
    tab[2] = new OR(true, false);
    tab[3] = new NAND(true, false);
    tab[4] = new NOR(true, false);

    cout << "Resultats du tableau : " << endl;
    for(unsigned int i=0; i<TAILLE_TABLEAU; ++i)
        cout << tab[i]->sortie() << endl;


    for(unsigned int i=0; i<TAILLE_TABLEAU; ++i)
        delete tab[i];

    tableaudeverite();

    return 0;
}

#define COMBINAISONS 4
#define OPERATEURS 5

void tableaudeverite()
{
    ConnecteurBinaire* tab[OPERATEURS][COMBINAISONS];
    for(unsigned int i=0; i<OPERATEURS; ++i)
        for(unsigned int j=0; j<COMBINAISONS; ++j)
        {
            bool a,b;
            switch(j)
            {
            case 0:
                a = b = false;
                break;
            case 1:
                a = false;
                b = true;
                break;
            case 2:
                a = true;
                b = true;
                break;
            case 3:
                a = true;
                b = false;
                break;
            default :
                break;
            }

            switch(i)
            {
            case 0 :
                tab[i][j] = new XOR(a,b);
                break;
            case 1 :
                tab[i][j] = new AND(a,b);
                break;
            case 2 :
                tab[i][j] = new OR(a,b);
                break;
            case 3 :
                tab[i][j] = new NAND(a,b);
                break;
            case 4 :
                tab[i][j] = new NOR(a,b);
                break;
            default :
                break;
            }
        }

    for(unsigned int i=0; i<OPERATEURS; ++i)
    {
        for(unsigned int j=0; j<COMBINAISONS; ++j)
        {
            cout << (tab[i][j]->sortie()) << "   ";
        }
        cout << endl;
    }

    for(unsigned int i=0; i<OPERATEURS; ++i)
        for(unsigned int j=0; j<COMBINAISONS; ++j)
            delete tab[i][j];
}
