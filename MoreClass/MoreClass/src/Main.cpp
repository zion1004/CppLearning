#include <iostream>


class Log {
public:
	Log() = delete;

	static void Write() {
		// do something...
	}
};

class Player {
private:
	int x, y;
	int speed;

public:
	Player() {
		x = 0;
		y = 0;
		speed = 1;
	}
	Player(int x, int y) {
		this->x = x;
		this->y = y;
		speed = 1;
	}

	~Player() {
		std::cout << "Player destroyed" << std::endl;
	}

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}

	void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

void Func() {
	Player p;
	return;
}

int main() {
	Player p;
	p.Print();

	Player p2(5, 10);
	p2.Print();

	Log::Write();
	// Log l; this does not work

	Func();
	std::cin.get();
	return 0;
}