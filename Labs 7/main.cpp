#include <iostream>
#include "Reel.h"
#include "Complexe.h"

using namespace std;

int main()
{
    Reel r(-25);
    Complexe c(13, 18);
    r.affiche();
    c.affiche();
    cout << r.module() << endl;
    cout << c.module() << endl;
    return 0;
}
