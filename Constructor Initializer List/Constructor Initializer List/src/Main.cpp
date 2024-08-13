#include <iostream>
#include <string>

class Entity {
private:
	std::string m_Name;
	int m_Score;
public:
	Entity() 
		: m_Name("Unknown"), m_Score(0)
	{
	}

	Entity(const std::string& name) 
		: m_Name(name), m_Score(0) 
	{
	}

	const std::string& GetName() const {
		return m_Name;
	}
};

int main() {
	Entity e1;
	std::cout << e1.GetName() << std::endl;

	Entity e2("Name");
	std::cout << e1.GetName() << std::endl;


	std::cin.get();
}