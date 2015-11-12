#include <iostream>

using namespace std;

int main ()
{
    int elemento;
    int ceros = 0;
    
    while (cin >> elemento ) {
        if ( elemento == 0) {
            ceros += 1;
        }
    }
    
    cout << "Hay " << ceros << " ceros" << endl;
}