#ifndef OISEAU_H
#define OISEAU_H
#include "Animal.h"
#include <string>


class Oiseau : public Animal
{
    public:
        Oiseau(std::string  n = "Nom",
               std::string  c = "Gris",
               std::string  cr = "Beugle",
               double la = 30);

        void affiche();
    protected:
    	double longueurailes;

    private:
};

#endif // OISEAU_H
