#include <iostream>
#include <cmath>
int main() {
	int t; std::cin >> t;
	int a, b, c; int ac, bca;
	int* arr = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b >> c;
		ac = a - 1; bca = abs(c - b) + c - 1;
		if (ac < bca) arr[i] = 1;
		else if (bca < ac) arr[i] = 2;
		else if (ac == bca) arr[i] = 3;
	}
	for (int i = 0; i < t; i++) {
		std::cout << arr[i] << "\n";
	}
}
