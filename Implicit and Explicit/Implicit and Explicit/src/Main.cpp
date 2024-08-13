#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	int m_Age;
public:
	Entity()
		: m_Name("Unknown"), m_Age(0) {}

	explicit Entity(const std::string& name)
		: m_Name(name), m_Age(0) {}

	Entity(int age) 
		: m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& e) {
	// do something...
}

int main() {
	// Implicit conversion

	Entity e = 22;
//	Entity a = std::string("Not Cherno"); // will not work because the constructor with string param is declared explicit

	PrintEntity(22);
//	PrintEntity(std::string("Not Cherno")); // smae goes for this

}