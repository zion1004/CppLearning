#include <iostream>

class Base {
public:
	Base() {
		std::cout << "Base Constructor\n";
	}
	virtual ~Base() {
		std::cout << "Base Destructor\n";
	}
};

class Derived : public Base {
public:
	Derived() {
		std::cout << "Derived Constructor\n";
	}
	~Derived() {
		std::cout << "Derived Destructor\n";
	}
};

int main() {
	Base* base = new Base();
	delete base;
	std::cout << "-----------------\n";
	Derived* derived = new Derived();
	delete derived;
	std::cout << "-----------------\n";
	Base* polymorphic = new Derived();
	delete polymorphic;
	// could cause memory leak if the base class destructor isnt virtual 
	// and the code has polymorphic thingamajigs (you know what i mean)

	std::cin.get();
}