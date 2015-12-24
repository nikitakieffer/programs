#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int nmin = n1 < n2 ? n1 : n2;
	int nmax = n1 > n2 ? n1 : n2;
	for (int i = nmax; i >= nmin; --i) cout << i << endl;
	return 0;
}