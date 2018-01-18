#ifndef NOR_H
#define NOR_H

#include "ConnecteurBinaire.h"


class NOR : public ConnecteurBinaire
{
    public:
        NOR(const bool& = true, const bool& = true);
        virtual ~NOR();

        bool sortie();
    protected:
    private:
};

#endif // NOR_H
