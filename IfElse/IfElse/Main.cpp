#include <iostream>

void Log(const char* message){
	std::cout << message << std::endl;
}

int main() {
	int x = 5;
	bool comparisonResult = x == 5;
	if (comparisonResult) {
		Log("Hello, comparison!");
	}

	if (1) {
		Log("Hello, 1!");
	}

	if (0) {
		Log("Hello, 0!");
	}

	if (x == 6) {
		Log("Hello, world!");
	}

	if (true)
		Log("Hello true!");

	if (x) {
		Log("Hello");
	} 

	const char* ptr = nullptr;
	if (ptr) {
		Log(ptr);
	}
	else if (ptr == "Hello") {
		Log("Will not reach here since if ptr is true then this code will never be reached...");
	}
	else {
		Log("Pointer is null");
	}

	std::cin.get();
	return 0;
}