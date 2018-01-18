#ifndef MAMMIFERE_H
#define MAMMIFERE_H
#include "Animal.h"
#include <string>


class Mammifere : public Animal
{
    public:
        Mammifere(std::string  n = "Nom",
                  std::string  c = "Gris",
                  std::string  cr = "Beugle",
                  double ds = 2);

        void affiche();
    protected:
    	double dureesevrage;

    private:
};

#endif // MAMMIFERE_H
