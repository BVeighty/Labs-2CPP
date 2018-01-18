#ifndef XOR_H
#define XOR_H

#include "ConnecteurBinaire.h"


class XOR : public ConnecteurBinaire
{
    public:
        XOR(const bool& e1= true, const bool& e2= true);
        virtual ~XOR();

        bool sortie();
    protected:
    private:
};

#endif // XOR_H
