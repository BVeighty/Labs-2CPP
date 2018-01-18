#include <iostream>
#include <string>

#include "Animal.h"
#include "Mammifere.h"
#include "Oiseau.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

	Animal* *Arche = new Animal*[n];

	for(int i=0; i<n; ++i)
	{
		string choix;
		bool valide = false;
		while(!valide)
		{
            cout << "Case " << i << ", mammifere ou oiseau ? [m/o] : ";
            cin >> choix;
            string nom, couleur, cri;
            cin >> nom >> couleur >> cri;
            if(choix == "m")
            {
            	double sevrage;
            	cin >> sevrage;
            	Arche[i] = new Mammifere(nom, couleur, cri, sevrage);
            	valide = true;
            }
            else if(choix == "o")
            {
            	double ailes;
            	cin >> ailes;
            	Arche[i] = new Oiseau(nom, couleur, cri, ailes);
            	valide = true;
            }
            if(!valide)
            {
            	cout << "Valeurs incorectes" << endl;
            }
		}
	}
	   cout << endl << "Voici les habitants : " << endl;
	   for(int i = 0; i<n; ++i)
	   {
	   	Arche[i]->affiche();
	   }

	   for(int i = 0; i<n; i++)
	   {
	   	delete Arche[i];
	   }
	   delete[] Arche;

    return 0;
}
