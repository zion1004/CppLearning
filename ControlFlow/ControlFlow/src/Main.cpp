#include <iostream>

void InitMain() {
	for (int i = 0; i < 10; i++) {
		std::cout << i << std::endl;
		if (i > 5) {
			continue;
		}
		for (int j = 0; j < 10; j++) {
			std::cout << j << std::endl;

			if (j == 5) {
				return;
			}
			else {
				break;
			}
		}
	}
}


int main() {
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0){
			continue;
		}
		if (i == 5) {
			break;
		}

		std::cout << "Hello world" << std::endl;
		std::cout << i << std::endl;
	}

	InitMain();
	return 0;
}