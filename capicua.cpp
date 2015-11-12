#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int elemento;
    vector<int> entrada;

    while (cin >> elemento ) {
        entrada.push_back(elemento);
    }
    int size = entrada.size();
    int left = 0;
    int right = size -1;
    bool capicua = true;
    
    while (left <= right and capicua) {
        if (entrada[left]!= entrada[right]){
            capicua = false;
        }
        left +=1;
        right -=1;
    }
    
    if (capicua) cout << "Es capicua" << endl;
    else cout << "No es capicua" << endl;

    
}