#ifndef OR_H
#define OR_H

#include "ConnecteurBinaire.h"


class OR : public ConnecteurBinaire
{
    public:
        OR(const bool& e1= true, const bool& e2= true);
        virtual ~OR();

        bool sortie();
    protected:
    private:
};

#endif // OR_H
