#include <iostream>

using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2 and b1 == b2) cout << "=";
	else if (a1 >= a2 and b1 <= b2) cout << "1";
	else if (a2 >= a1 and b2 <= b1) cout << "2";
	else cout << "?";

	cout << " , ";

	int nmin = a1 < a2 ? a2 : a1;
	int nmax = b1 < b2 ? b1 : b2;
	if (b1 < a2 and b1 < b2 or b2 < a1 and b2 < b1) cout << "[]" << endl;
	else cout << "[" << nmin << "," << nmax << "]" << endl;

	return 0;
}