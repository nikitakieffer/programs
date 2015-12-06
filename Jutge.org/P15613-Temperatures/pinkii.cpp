#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a<10) cout << "it's cold" << endl;
    else if (a>30) cout << "it's hot" << endl;
    else cout << "it's ok" << endl;

    if (a <= 0) cout << "water would freeze" << endl;
    else if (a >= 100) cout << "water would boil" << endl;
    
    return 0;
}