#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int a) {
	a++;
}

void IncrementWithPtr(int* a) {
	(*a)++;
}

void IncrementWithRef(int& a) {
	a++;
}

int main() {
	int a = 5;
	int& ref = a;

	ref = 2;
	LOG(a);
	Increment(a);
	LOG(a);

	IncrementWithPtr(&a);
	LOG(a);

	IncrementWithRef(a);
	LOG(a);

	std::cin.get();
	return 0;
}