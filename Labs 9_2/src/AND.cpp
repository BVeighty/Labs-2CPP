#include "AND.h"

AND::AND(const bool& e1, const bool& e2) :
    ConnecteurBinaire(e1,e2)
{
    //ctor
}

AND::~AND()
{
    //dtor
}

bool AND::sortie()
{
    return get_entree1()&&get_entree2();
}
