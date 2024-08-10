#include <iostream>

#define LOG(x) std::cout << x << std::endl


class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya){
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player p;
	p.x = 5;


	std::cin.get();
	return 0;
}