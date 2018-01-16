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
