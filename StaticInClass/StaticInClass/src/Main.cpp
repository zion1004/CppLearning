#include <iostream>

class Entity {
public:
	int x, y;
	static int foo;

	void Print() {
		std::cout << x << ", " << y << std::endl;
	}
	void Foo() {
		std::cout << foo << std::endl;
	}
};

int Entity::foo;

int main() {
	Entity e;
	e.x = 1;
	e.y = 2;
	e.foo = 10;

	Entity e1 = { 5, 8 };
	e1.foo = 300;

	e.Print();
	e1.Print();
	
	e.Foo();
	e1.Foo();

	Entity::foo = 50;
	e.Foo();
	e1.Foo();

	std::cin.get();
	return 0;
}