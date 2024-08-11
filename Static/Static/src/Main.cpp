#include <iostream>
#define LOG(x) std::cout << x << std::endl;

static int s_Variable = 10;
extern int variable;
extern int i;

void Function1() {

}

static void Function2() {

}

int main() {
	LOG(s_Variable);
	LOG(variable);
	LOG(i);


	std::cin.get();
	return 0;
}