#include <iostream>

using namespace std;

int main() {
	int e,c;
	cin >> e >> c;
	
	int b[] = {500,200,100,50,20,10,5,2,1,50,20,10,5,2,1};
	
	for (int i = 0; i < 15; ++i) {
		int d;
		if (i < 9) d = e / b[i];
		else d = c/b[i];
		cout << (i < 7 ? "Banknotes":"Coins") << " of " << b[i] << (i<9?" euro":" cent") << (b[i]!=1?"s":"") <<": " << d << endl;
		if (i < 9) e = e%b[i];
		else c = c%b[i];
	}
	
	
	return 0;
}

