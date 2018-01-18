#ifndef RATIONNELLE_H
#define RATIONNELLE_H
#include <iostream>


class Rationnelle
{
    public:
        Rationnelle(int n=0, int d=0);
        void reduit();
        void affiche();
        void setNumerateur(int n);
        void setDenominateur(int d);
        Rationnelle inverse();
        int partieEntiere();

        Rationnelle operator+(const Rationnelle& r);
        Rationnelle operator-(const Rationnelle& r);
        Rationnelle operator*(const Rationnelle& r);
        Rationnelle operator/(const Rationnelle& r);
        Rationnelle& operator++();
        Rationnelle operator++(int k);
        Rationnelle& operator--();
        Rationnelle operator--(int);
        bool operator==(const Rationnelle& r);
        bool operator<(const Rationnelle& r);

        friend std::ostream& operator<<(std::ostream& flux, const Rationnelle& r);
        friend std::istream& operator>>(std::istream& flux, Rationnelle& r);

    private:
        int numerateur;
        int denominateur;
};

int pgcd(int a, int b);

#endif // RATIONNELLE_H
