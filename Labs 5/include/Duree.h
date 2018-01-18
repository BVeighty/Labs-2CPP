#ifndef DUREE_H
#define DUREE_H
#include <iostream>

class Duree
{
    public:
        Duree(int h=0, int m=0, int s=0);
        void affiche();
        void setHeures(int h);
        void setMinutes(int m);
        void setSecondes(int s);
        long enSecondes();
        void ajouteSecondes(int s);

        Duree operator+(Duree d1);
        friend Duree operator-(const Duree& d1, const Duree& d2);
        friend bool operator==(Duree& d1, Duree& d2);
        friend bool operator<(Duree& d1, Duree& d2);
        friend std::ostream& operator<<(std::ostream& flux, Duree& d);
        friend std::istream& operator>>(std::istream& flux, Duree& d);






    private:
        int heures;
        int minutes;
        int secondes;
};

#endif // DUREE_H
