#include <iostream>
#include <vector>


void ForEach(const std::vector<int>& vi, void(*func)(int)) {
	for (int v : vi) {
		func(v);
	}
}

int main() {
	std::vector<int> val = { 1, 5, 4, 3, 2, 7, 1 };
	ForEach(val, [](int i) { 
		std::cout << i << std::endl;
	});

	std::cout << "=======================" << std::endl;
	/*
		[] is capture group
		() parameters
		{} the body of the func
	*/
	auto lambda = [](int e) {
		// do something
		return e > 3;
	};
	auto it = std::find_if(val.begin(), val.end(), lambda);
	std::cout << (*it) << std::endl;

	std::cin.get();
}