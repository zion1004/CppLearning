#include <iostream>
#include <variant>

// one way variant might be used in a codebase
enum class ErrorCode {
	None = 0, NotFound, NoAccess
};

std::variant<std::string, ErrorCode> ReadFileAsString() {
	return ErrorCode::NoAccess;
}



int main() {
	std::variant<std::string, int> data;

	data = "zion";
	int index = data.index(); // 0 if the first type
	std::cout << std::get<std::string>(data) << "\n";

	data = 2;
	index = data.index(); // 1 if the second type
	std::cout << std::get<int>(data) << "\n";

	// or do it this way which looks much better
	if (auto val = std::get_if<std::string>(&data)) {
		std::string& v = *val;
	}

	
	std::cin.get();
}
	