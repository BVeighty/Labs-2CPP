#include "VoitureDeCollection.h"

double VoitureDeCollection::decote = 1;

VoitureDeCollection::VoitureDeCollection(const std::string& m, const int& a, const double& p, const std::string& b) :
    Voiture(m,a,p),
    boistableaudebord(b)
{
}

double VoitureDeCollection::getdecote() const
{
    return VoitureDeCollection::decote;
}

std::ostream& operator<<(std::ostream& flux, const VoitureDeCollection& v)
{
    flux << (Voiture) v << "\n";
    flux << "Bois du tableau de bord : " << v.boistableaudebord;

    return flux;
}
