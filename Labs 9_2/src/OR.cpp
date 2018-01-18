#include "OR.h"

OR::OR(const bool& e1, const bool& e2) :
    ConnecteurBinaire(e1,e2)
{
    //ctor
}

OR::~OR()
{
    //dtor
}

bool OR::sortie()
{
    return get_entree1()||get_entree2();
}
