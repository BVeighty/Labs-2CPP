#include "NOR.h"

NOR::NOR(const bool& e1, const bool& e2) :
    ConnecteurBinaire(e1,e2)
{
    //ctor
}

NOR::~NOR()
{
    //dtor
}

bool NOR::sortie()
{
    return !(get_entree1()||get_entree2());
}
