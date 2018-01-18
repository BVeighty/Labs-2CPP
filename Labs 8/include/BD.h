#ifndef BD_H
#define BD_H
#include <string>
#include "Livre.h"


class BD : virtual public Livre
{
    public:
        BD(std::string t = "Titre", std::string a = "Auteur", int p= 30, std::string d="Dessinateur");

        void affiche();
        double calculer_prix();

    protected:
    	std::string dessinateur;
};

#endif // BD_H
