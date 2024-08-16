#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	std::vector<int> values = { 12, 3, 4, 9, 1, 5, 2, 7 };

	std::sort(values.begin(), values.end());
	for (const int& i : values) {
		std::cout << i << "\n";
	}

	std::cout << "==============================" << std::endl;



	std::sort(values.begin(), values.end(), std::greater<int>());
	for (const int& i : values) {
		std::cout << i << "\n";
	}

	std::cout << "==============================" << std::endl;
	
	
	std::sort(values.begin(), values.end(), [](int a, int b) {
		if (a == 1)
			return false;
		if (b == 1)
			return true;
		return a < b;
	});
	for (const int& i : values) {
		std::cout << i << "\n";
	}

	std::cout << "==============================" << std::endl;


	std::cin.get();
}