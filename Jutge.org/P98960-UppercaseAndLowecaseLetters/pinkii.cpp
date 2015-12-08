#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
	
	cout << char(a >= 'a' and a <= 'z' ? a-'a'+'A' : a + 'a' - 'A') << endl;
    
    return 0;
}