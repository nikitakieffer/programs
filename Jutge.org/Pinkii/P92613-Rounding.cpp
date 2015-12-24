#include <iostream>

using namespace std;

int main() {
	double f;
	cin >> f;
	cout << int(f) << " " << (int(f) == f ? int(f) : int(f)+1) << " " << ((f-int(f))*10 >= 5 ? int(f)+1 : int(f) ) << endl;
	return 0;
}