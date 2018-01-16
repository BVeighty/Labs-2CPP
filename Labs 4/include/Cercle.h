#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"


class Cercle
{
    public:
        Cercle(double r=1, double abs=0, double ord=0);
        Cercle(const Cercle& c);
        ~Cercle();
        Cercle& operator= (const Cercle& c);
        double aire();
        double perimetre();
        void afficherProprietes();
        void setRayon(double r);
        void setAbscisse(double abs);
        void setOrdonnee(double ord);
        bool estCompris(Point p);
        void translation(double x, double y);
        void homothetie(double r);

    private:
        double rayon;
        Point* centre;
        //double abscisse;
        //double ordonnee;

};

#endif // CERCLE_H
