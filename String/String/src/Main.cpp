#include <iostream>
#include <string>

#include <stdlib.h>

int main() {
	using namespace std::string_literals;

	const char* name = "Name"; // C style way of doing strings
	char name2[5] = { 'n', 'a', 'm', 'e', 0}; // c-style string representation (null treminated to signify the end of the string)
	char name3[4] = { 'n', 'a', 'm', 'e' }; // undefined behavior DO NOT DO THIS

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;
//	std::cout << name3 << std::endl;

	std::string cppstr = "C++ String";

	// String Literals
	const char c[8] = "Che\0rno"; // C strings are null terminated and 
	std::cout << strlen(c) << std::endl; // thus strlen thinks we only have three characters
	
	char* c2 = (char*) "asdf";
//	c2[2] = 'C'; // undefined behavior since string literals are stored in a read only memory

	const wchar_t* c3 = L"Name"; // wchar is 2 bytes (up to the compiler though)

	const char16_t* c4 = u"asdf"; // 2 bytes
	const char32_t* c5 = U"asdf"; // 4 bytes
	const char* c6 = u8"Adsf"; // char is 1 byte

	std::string cs = std::string("String") + " Appended";
	// OR
	std::string cs2 = "String"s + " Append";
	std::wstring csw = L"wide string"s + L" append";
	std::u16string cs16 = u"u16 string"s + u" append";
	std::u32string cs32 = U"u32 string"s + U" append";

	const char* ig = R"(a \n a
new line)"; // Ignore escape characters
	std::cout << ig << std::endl;
	std::cin.get();
}