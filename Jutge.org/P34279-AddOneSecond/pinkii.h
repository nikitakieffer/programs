#include <iostream>
#include <string>

using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	
	c += 1;
	
	if (c == 60) {
		c = 0;
		b += 1;
		if (b == 60) {
			b = 0;
			a+=1;
			if (a == 24) a = 0;
		}
	}
	
	cout << (a < 10 ? "0" : "") << a << ":" << (b < 10 ? "0" : "") << b << ":" << (c < 10 ? "0" : "") << c << endl;
	
	return 0;
}

