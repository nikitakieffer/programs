#include <iostream>

using namespace std;

int main ()
{
    int maxima;
    int actual;
    int anterior;
    int distancia;
    
    cin >> anterior;
    cin >> actual;
    distancia = actual - anterior;
    if (distancia < 0) distancia = -distancia;
    anterior = actual;
    maxima = distancia;
    while (cin >> actual) {
        distancia = actual - anterior;
        if (distancia < 0) distancia = - distancia;
        if (maxima < distancia) maxima = distancia;
        anterior = actual;
    }
    cout << maxima << endl;
}

