#ifndef CONNECTEURBINAIRE_H
#define CONNECTEURBINAIRE_H


class ConnecteurBinaire
{
    public:
        ConnecteurBinaire(const bool& e1 = true, const bool& e2 = true);
        virtual ~ConnecteurBinaire();

        virtual bool sortie()=0;

        void set_entree1(const bool& e1);
        void set_entree2(const bool& e2);

        bool get_entree1() const;
        bool get_entree2() const;
    protected:
    private:
        bool entree1, entree2;
};

#endif // CONNECTEURBINAIRE_H
