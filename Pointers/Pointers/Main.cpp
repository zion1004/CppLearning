#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main() {
	int i = 8;
	int* ptr = nullptr;
	
	ptr = &i;
	LOG(ptr);

	LOG(i);
	*ptr = 10;
	LOG(i);

	char* c = new char[8];
	memset(c, 0, 8);

	LOG(c);
	std::cin.get();

	delete[] c;
	return 0;
}