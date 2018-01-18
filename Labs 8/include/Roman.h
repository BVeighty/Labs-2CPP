#ifndef ROMAN_H
#define ROMAN_H
#include <string>
#include "Livre.h"


class Roman : virtual public Livre
{
    public:
        Roman(std::string t = "Titre", std::string a = "Auteur", int p = 250, bool g = false);

        void affiche();
        double calculer_prix();

    protected:
    	bool Goncourt;
};

#endif // ROMAN_H
