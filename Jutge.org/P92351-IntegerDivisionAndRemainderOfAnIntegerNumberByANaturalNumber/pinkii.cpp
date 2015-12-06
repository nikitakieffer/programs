#include <iostream>

using namespace std;

int main() {
    int a,b;

    cin >> a >> b;
    
    int division = a/b;
    int reminder = a%b;
    
    if (reminder < 0) {
        division -= 1;
        reminder = b + reminder;
    }
    
    cout << division << " " << reminder << endl;
    
    return 0;
}