#ifndef NAND_H
#define NAND_H

#include "ConnecteurBinaire.h"


class NAND : public ConnecteurBinaire
{
    public:
        NAND(const bool& e1= true, const bool& e2= true);
        virtual ~NAND();

        bool sortie();
    protected:
    private:
};

#endif // NAND_H
