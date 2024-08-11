#include <iostream>

#define LOG(x) std::cout << x << std::endl


class Player {
private: // class member is private by default
	int x, y;
	int speed;

public: // and public has to be explicitly stated if you want it to be visible outside
	void Move(int xa, int ya){
		x += xa * speed;
		y += ya * speed;
	}
};

/*
	struct in C++ is just like a c++ class
	but its members are public by default
*/
struct Somethinng {
public: // struct member is public by default
	int a, b;

private: // and private has to be explicitly stated if you want it to be not accessible
	int c;
};

int main() {
	Player p;
	p.x = 5;


	std::cin.get();
	return 0;
}