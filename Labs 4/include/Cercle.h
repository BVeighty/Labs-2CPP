#ifndef CERCLE_H
#define CERCLE_H


class Cercle
{
    public:
        Cercle(double r=1, double abs=0, double ord=0);
        double aire();
        double perimetre();
        void afficherProprietes();
        void setRayon(double r);
        void setAbscisse(double abs);
        void setOrdonnee(double ord);
        bool estCompris(double a, double o);
        void translation(double x, double y);
        void homothetie(double r);

    private:
        double rayon;
        double abscisse;
        double ordonnee;

};

#endif // CERCLE_H
