#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point(double abs=0, double ord=0);
        void affiche();
        void setAbscisse(double abs);
        void setOrdonnee(double ord);

    private:
        double abscisse;
        double ordonnee;
};

#endif // POINT_H
