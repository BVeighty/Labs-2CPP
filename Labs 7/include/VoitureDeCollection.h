#ifndef VOITUREDECOLLECTION_H
#define VOITUREDECOLLECTION_H

#include "Voiture.h"


class VoitureDeCollection : public Voiture
{
    public :
        VoitureDeCollection(const std::string& m="NoMarque", const int& a=1950, const double& p=19999.99, const std::string& b="Eucaliptus");

        friend std::ostream& operator<<(std::ostream& flux, const VoitureDeCollection& v);
    protected :
        std::string boistableaudebord;
        virtual double getdecote() const;
    private :
        static double decote;
};

#endif // VOITUREDECOLLECTION_H
