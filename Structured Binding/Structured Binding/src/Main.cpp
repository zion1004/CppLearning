#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson() {
	return { "Not Cherno", 50 };
}

int main() {
	auto [name, age] = CreatePerson();

	std::cout << name << ", " << age << std::endl;
	std::cin.get();
}