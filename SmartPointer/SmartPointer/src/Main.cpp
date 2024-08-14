#include <iostream>
#include <string>
#include <memory>

class Entity {
public:
	Entity() {
		std::cout << "Created Entity" << std::endl;
	}
	~Entity() {
		std::cout << "Destroyed Entity" << std::endl;
	}
	void Print() {
	
	}
};

int main() {
	std::shared_ptr<Entity> sharedEntity1;

	{
//		std::unique_ptr<Entity> entity(new Entity()); 
		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // just use make_unique coz its better
//		std::unique_ptr<Entity> e0 = entity; // does not work, thus unique pointer

		std::shared_ptr<Entity> sharedEntity2 = std::make_shared<Entity>();
		entity->Print();

		sharedEntity1 = sharedEntity2;
	}
	// entity gets automatically destroyed once it goes out of scope

	{
		std::weak_ptr<Entity> weak;
		{
			std::shared_ptr<Entity> tmp = std::make_shared<Entity>();
			weak = tmp;
		}
		// tmp will still be destroyed because its a weak pointer
		// however you can ask a weak pointer if it is expired or is the reference still valid
	}

	std::cin.get();
} // shared entity will get destroyed once all its references are gone