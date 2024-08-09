#include <iostream>

int main() {
	// primitive data types

	// char, short, int, long, long long
	// can use unsigned keyword

	int variable = 8; // int is traditionally 4 bytes but it really depends on the compiler (also the case with other primitive types on how big they are)
	std::cout << variable << std::endl;

	variable = 20;
	std::cout << variable << std::endl;

	char a = 'A';
	std::cout << a << std::endl;
	
	a = 65;
	std::cout << a << std::endl;

	short s = 65;
	std::cout << s << std::endl;

	// float is 4 bytes and double is 8 bytes
	float f = 5.5f;
	double d = 5.2;
	std::cout << f << std::endl;
	std::cout << d << std::endl;

	// boolean 
	// needs 1 bit but is stored 1 byte due to how accessing memory works 
	// (can bitmask and stuff to technically store more bools in a byte since we can technically represent 8 bits in a byte and each of those bits can represent a true or false state
	// for something, yeah)
	// 0 is false
	// and any non zero is true
	bool b = true;
	std::cout << b << std::endl;
	b = false;
	std::cout << b << std::endl;

	std::cout << sizeof(bool) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(double) << std::endl;

	std::cin.get();
	return 0;
}