#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath) {
	std::ifstream stream(filepath);
	if (stream) {
		std::string result;
		// read file

		stream.close();
		return result;
	}
	return {};
}

int main() {
	std::optional<std::string> data = ReadFileAsString("data.txt");
	if (data /* or data.has_value() */) { 
		// do something...
		std::cout << "file read successfully" << std::endl;
	}
	else {
		std::cout << "file could not be opened" << std::endl;
	}

	/*
		you can do it this way as well
		if data is present value will be the data
		else if data is not
		then the argument in the value_or will be the value
		set to the variable
	*/
	std::string value = data.value_or("Not present");

	std::cin.get();
}