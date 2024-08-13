#include <iostream>
#include <array>

class Entity {
public:
	int arr[5];

	Entity() {
		for (int i = 0; i < 5; i++) {
			arr[i] = 2;
		}
	}
};

class Entity2 {
public:
	int* arr = new int[5];

	Entity2() {
		for (int i = 0; i < 5; i++) {
			arr[i] = 2;
		}
	}

	~Entity2() {
		delete[] arr;
	}
};

int main() {
	// C style array
	int arr[5]; // stack allocated
	int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		arr[i] = 2;
	}

	arr[2] = 5;
	*(ptr + 2) = 6;

	int* another = new int[5]; // heap allocated
	for (int i = 0; i < 5; i++) {
		another[i] = 2;
	}

	Entity e;
	Entity2 e2;

	// c++11 standard array
	std::array<int, 5> cpparray;
	for (int i = 0; i < cpparray.size(); i++) {
		cpparray[i] = 1;
	}
	for (int i = 0; i < cpparray.size(); i++) {
		std::cout << cpparray[i] << std::endl;
	}


	std::cin.get();
	delete[] another;
}