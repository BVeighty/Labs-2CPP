#ifndef COMPLEXE_H
#define COMPLEXE_H

#include "Reel.h"


class Complexe : public Reel
{
    public:
        Complexe(double a=0, double b=0);
        double module();
        void affiche();

    private:
    	double y;
};

#endif // COMPLEXE_H
