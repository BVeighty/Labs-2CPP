#include <iostream>
#include "Duree.h"
using namespace std;

int main()
{
    Duree maDuree(3, 10);
    cout << maDuree << endl;
    Duree maDuree2(5, 23, 165);
    cout << maDuree2 << endl;
    Duree maDuree3 = maDuree + maDuree2;
    cout << maDuree3 << endl;
    cout << (maDuree == maDuree2);

    return 0;
}
