#include "XOR.h"

XOR::XOR(const bool& e1, const bool& e2) :
    ConnecteurBinaire(e1,e2)
{
    //ctor
}

XOR::~XOR()
{
    //dtor
}

bool XOR::sortie()
{
    return get_entree1()^get_entree2();
}
