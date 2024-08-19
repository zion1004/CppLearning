#include <iostream>
#include <any>

int main() {
	std::any data;
	data = 2;
	data = "not cherno";
	data = std::string("zion");

	std::string s = std::any_cast<std::string>(data);
	std::cin.get();
}
