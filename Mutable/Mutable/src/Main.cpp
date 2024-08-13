#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	mutable int m_DebugCount = 0; // allows it to be mutable even in const method or a const variable
	// usually used for debugging purposes

public:
	const std::string& GetName() const {
		m_DebugCount++;
		return m_Name;
	}
};


int main() {
	const Entity e;
	e.GetName(); // will not work if GetName is not const since the function might mutate something, thus mutating our Entity e
	// which defeats the whole purpose of declaring our Entity as const

	int x = 8;
	auto f = [= /* pass by value */]() {
		int y = x;
		y++;
		std::cout << "Hello" << std::endl;
	};
	auto f2 = [& /* pass by reference */]() {
		x++;
		std::cout << "Hello" << std::endl;
	};
	auto f3 = [= /* pass by value */]() mutable { // is like f and not f2
		x++;
		std::cout << "Hello" << std::endl;
	};

	std::cout << x << std::endl;
	f();
	std::cout << x << std::endl;
	f2();
	std::cout << x << std::endl; // x was updated since f2 was pass by reference
	f3();
	std::cout << x << std::endl; // x remained at 9 because the mutable keyword for lamba is just like our first lambda f

}