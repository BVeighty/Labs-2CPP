#include "Rationnelle.h"
#include <iostream>
#include <cmath>

using namespace std;

Rationnelle::Rationnelle(int n, int d): numerateur(n), denominateur(d)
{
    reduit();
}
void Rationnelle::reduit()
{
    if(denominateur == 0)
        denominateur = 1;
    else if(denominateur < 0)
    {
        denominateur *= -1;
        numerateur *= -1;
    }
    int p = pgcd(abs(numerateur), denominateur);
    numerateur /= p;
    denominateur /= p;
}
void Rationnelle::affiche()
{
    cout << numerateur << "/" << denominateur << endl;
}
void Rationnelle::setNumerateur(int n)
{
    numerateur = n;
    reduit();
}
void Rationnelle::setDenominateur(int d)
{
    cout << &d << endl;
    denominateur = d;
    reduit();
}
Rationnelle Rationnelle::inverse()
{
    return Rationnelle(denominateur, numerateur);
}
int Rationnelle::partieEntiere()
{
    return numerateur/denominateur;
}

Rationnelle Rationnelle::operator+(const Rationnelle& r)
{
    int n = numerateur*r.denominateur + r.numerateur*denominateur;
    int d = denominateur * r.denominateur;
    return Rationnelle(n,d);
}
Rationnelle Rationnelle::operator-(const Rationnelle& r)
{
    int n = numerateur*r.denominateur - r.numerateur*denominateur;
    int d = denominateur * r.denominateur;
    return Rationnelle(n,d);
}
Rationnelle Rationnelle::operator*(const Rationnelle& r)
{
    int n = numerateur * r.numerateur;
    int d = denominateur * r.denominateur;
    return Rationnelle(n,d);
}
Rationnelle Rationnelle::operator/(const Rationnelle& r)
{
    int n = numerateur * r.denominateur;
    int d = denominateur * r.numerateur;
    return Rationnelle(n,d);
}

Rationnelle& Rationnelle::operator++()
{
    numerateur+=denominateur;
    return *this;
}
Rationnelle Rationnelle::operator++(int k)
{
    Rationnelle r(numerateur, denominateur);
    numerateur+=denominateur;
    return r;
}Rationnelle& Rationnelle::operator--()
{
    numerateur-=denominateur;
    return *this;
}
Rationnelle Rationnelle::operator--(int k)
{
    Rationnelle r(numerateur, denominateur);
    numerateur-=denominateur;
    return r;
}

bool Rationnelle::operator==(const Rationnelle& r)
{
    return (denominateur==r.denominateur && numerateur == r.numerateur);
}
bool Rationnelle::operator<(const Rationnelle& r)
{
    return (numerateur/r.denominateur < r.numerateur/denominateur);
}

ostream& operator<<(ostream& flux, const Rationnelle& r)
{
    flux << r.numerateur << "/" << r.denominateur;
    return flux;
}
istream& operator>>(istream& flux, Rationnelle& r)
{
    flux >> r.numerateur >> r.denominateur;
    r.reduit();
    return flux;
}


int pgcd(int a, int b)
{
    if(a==0)
        return b;
    if(a<b)
        std::swap(a, b);

    if(a%b == 0)
        return b;

    return pgcd(b, a%b);
}
