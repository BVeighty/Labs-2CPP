#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include <ostream>

#define ANNEE_ACTUELLE 2018

class Voiture
{
    public:
        Voiture(const std::string& s="NoName", const int& a=2020, const double& p=13900.99);

        double calculprixactuel() const;

        friend std::ostream& operator<<(std::ostream& flux, const Voiture& v);


    protected:
        std::string marque;
        int annee;
        double prixachat;
        virtual double getdecote() const;

    private:
        static double decote;
};

#endif // VOITURE_H
