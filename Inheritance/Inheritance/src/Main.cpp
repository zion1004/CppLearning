#include <iostream>

class Entity {

public:
	int x, y;

	void Move(int xa, int ya) {
		x += xa;
		y += ya;
	}
};

class Player : public Entity {
public:
	const char* name;

	void PrintName() {
		std::cout << name << std::endl;
	}

	void Print() {
		std::cout << x << ", " << y << std::endl;

	}
};

int main() {
	Player p;
	p.Print();

	std::cin.get();
	return 0;
}