#ifndef RATIONNELLE_H
#define RATIONNELLE_H


class Rationnelle
{
    public:
        Rationnelle(int n, int d);
        void reduit();
        void affiche();
        void setNumerateur(int n);
        void setDenominateur(int d);
        Rationnelle inverse();
        int partieEntiere();
    private:
        int numerateur;
        int denominateur;
};

int pgcd(int a, int b);

#endif // RATIONNELLE_H
