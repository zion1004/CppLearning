#include <iostream>
#include <string>

int main() {
	const char* name = "Name"; // C style way of doing strings
	char name2[5] = { 'n', 'a', 'm', 'e', 0}; // c-style string representation (null treminated to signify the end of the string)
	char name3[4] = { 'n', 'a', 'm', 'e' }; // undefined behavior DO NOT DO THIS

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;
//	std::cout << name3 << std::endl;

	std::string cppstr = "C++ String";

	std::cin.get();
}