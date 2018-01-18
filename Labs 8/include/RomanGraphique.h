#ifndef ROMANGRAPHIQUE_H
#define ROMANGRAPHIQUE_H
#include <string>
#include "Livre.h"
#include "BD.h"
#include "Roman.h"


class RomanGraphique : public Roman, public BD
{
    public:
        RomanGraphique(std::string t = "Titre",
        	std::string a = "Auteur",
        	int p = 250,
        	std::string d="Dessinateur",
        	bool g = false,
        	bool i = true);

        void affiche();
        double calculer_prix();

    private:
    	bool apprecie_par_Inrocks;
};

#endif // ROMANGRAPHIQUE_H
