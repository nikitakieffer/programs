#include <iostream>

using namespace std;

int main ()
{
    int actual;
    int anterior;
    int conjuntomejor;
    int conjuntonuevo;
    
    conjuntomejor = 1;
    conjuntonuevo = 1;
    
    cin >> anterior;
    
    while (cin >> actual) {
        if (actual == anterior)
            conjuntonuevo = conjuntonuevo + 1;
        else conjuntonuevo = 1;
        if (conjuntomejor < conjuntonuevo)
            conjuntomejor = conjuntonuevo;
        anterior = actual;
            
    }
    cout << "La subsecuencia constante mas larga tiene longitud de " << conjuntomejor << endl;
}