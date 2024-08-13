#include <iostream>
#include <string>

using String = std::string;


class Entity {
private:
	String m_Name;

public:
	Entity() 
		: m_Name("Unknown") {}

	Entity(const String& name)
		: m_Name(name) {}

	const String& GetName() const {
		return m_Name;
	}
};


int main() {
	Entity* e;
	{
		Entity entity("Not Cherno");
		e = &entity;
		std::cout << entity.GetName() << std::endl;
		// stack will be popped thus entity will be destroyed
	}
	// e is now pointing to god knows what
	std::cout << e->GetName() << std::endl; // undefired behavior DONT DO :/

	{
		Entity* entity = new Entity("Still Not Cherno"); // will be heap allocated
		e = entity;
		std::cout << entity->GetName() << std::endl;
		// stack will be popped but we instanciated entity in the heap
	}
	// this it will outlive the scope and still be relevant
	std::cout << e->GetName() << std::endl;

	std::cin.get();
	delete e; // free memory

	int* i = new int[10];
	delete[] i; // free memory
}