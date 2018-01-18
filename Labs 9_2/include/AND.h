#ifndef AND_H
#define AND_H

#include <ConnecteurBinaire.h>

class AND : public ConnecteurBinaire
{
    public:
        AND(const bool& e1 = true, const bool& e2 = true);
        virtual ~AND();

        bool sortie();
    protected:
    private:
};

#endif // AND_H
