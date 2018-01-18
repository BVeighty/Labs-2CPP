#ifndef REEL_H
#define REEL_H


class Reel
{
    public:
        Reel(double a = 0);
        double module();
        void affiche();

    protected:
    	double x;
};

#endif // REEL_H
