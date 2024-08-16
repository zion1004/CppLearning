#include <iostream>


struct Entity {
	int x, y;
};

int main() {

	int64_t a = 50;
	double& val = *(double*)&a;
	std::cout << a << std::endl;
	std::cout << val << std::endl;

	val = 10.0;
	std::cout << a << std::endl;
	std::cout << val << std::endl;
	
	Entity e = { 1, 2 };
	int* ex = (int*)&e;
	std::cout << ex[0] << ", " << ex[1] << ", " << ex[2] /* undefined behavior */ << std::endl;
}