#include "ConnecteurBinaire.h"

ConnecteurBinaire::ConnecteurBinaire(const bool& e1, const bool& e2) :
    entree1(e1),
    entree2(e2)
{
    //ctor
}

ConnecteurBinaire::~ConnecteurBinaire()
{
    //dtor
}

void ConnecteurBinaire::set_entree1(const bool& e1)
{
    entree1 = e1;
}
void ConnecteurBinaire::set_entree2(const bool& e2)
{
    entree2 = e2;
}

bool ConnecteurBinaire::get_entree1() const
{
    return entree1;
}
bool ConnecteurBinaire::get_entree2() const
{
    return entree2;
}
