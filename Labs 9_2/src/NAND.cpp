#include "NAND.h"

NAND::NAND(const bool& e1, const bool& e2) :
    ConnecteurBinaire(e1,e2)
{
    //ctor
}

NAND::~NAND()
{
    //dtor
}

bool NAND::sortie()
{
    return !(get_entree1()&&get_entree2());
}
