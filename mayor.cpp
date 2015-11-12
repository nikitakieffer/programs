#include <iostream>

using namespace std;

int main ()
{
    int actual;
    int mayor;
    
    cin >> actual;
    mayor = actual;
    while (cin >> actual){
        if (actual > mayor)
            mayor = actual;
    }
    cout << "El numero mayor es " << mayor << endl;
   
}