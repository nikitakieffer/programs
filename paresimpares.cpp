#include <iostream>

using namespace std;

int main ()
{
    int elemento;
    int pares = 0;
    int impares = 0;
    
    while (cin >> elemento ) {
        if ( elemento % 2 == 0) {
            pares += 1;
        }
        else impares += 1;
    }
    
    if (pares > impares) cout << "Hay mas numeros pares" << endl;
    else if (pares < impares) cout << "Hay mas numeros impares" << endl;
    else cout << "Hay la misma cantidad de numeros pares e impares" << endl;
}

