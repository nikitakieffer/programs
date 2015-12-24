#include <iostream>
#include <iomanip>

int main() {
	int n;
	std::cin >> n;
	if (n == 0) {
		std::cout << std::fixed << std::setprecision(4) << 0.0f << std::endl;
		return 0;
	}
	double f = 0;
	for (double i = 1; i <= n; ++i) f += 1.0f/i;
	std::cout << std::fixed << std::setprecision(4) << f << std::endl;
	return 0;
}