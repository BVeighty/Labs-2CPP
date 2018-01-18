#ifndef LIVRE_H
#define LIVRE_H
#include <string>


class Livre
{
    public:
        Livre(std::string t = "Titre", std::string a = "Auteur", int p= 250);

        void affiche();

    protected:
    	std::string titre;
    	std::string auteur;
    	int pages;

    private:
};

#endif // LIVRE_H
