#ifndef DUREE_H
#define DUREE_H


class Duree
{
    public:
        Duree(int h=0, int m=0, int s=0);
        void affiche();
        void setHeures(int h);
        void setMinutes(int m);
        void setSecondes(int s);
        long enSecondes();
        void ajouteSecondes(int s);


    private:
        int heures;
        int minutes;
        int secondes;
};

#endif // DUREE_H
