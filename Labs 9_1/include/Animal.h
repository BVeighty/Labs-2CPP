#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
    public:
        Animal(std::string  n = "Nom",
               std::string  c = "Gris",
               std::string  cr = "Beugle");

        virtual void affiche();

    protected:
        std::string nom;
        std::string couleur;
        std::string cri;

    private:
};

#endif // ANIMAL_H
