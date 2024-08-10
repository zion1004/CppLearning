#include <iostream>


void Log(const char* msg) {
	std::cout << msg << std::endl;
}

int main() {
	for (int i = 0; i < 5; i++) {
		Log("Hellow world");
	}

	int i = 0;
	bool condition = true;
	for (;condition;) {
		Log("Hello world");
		i++;

		if (!(i < 5)) {
			condition = false;
		}
	}

	int j = 0;
	while (j < 5) {
		Log("While loop");
		j++;
	}

	Log("====================");

	bool cond = false;
	while (cond) {
		// do something....

		Log("Never reaches here");
	}

	do {
		Log("Hey!");
		//will be executed at least once.
	} while (cond);

	std::cin.get();
	return 0;
}