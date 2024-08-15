#include <iostream>
#include <vector>

void HelloWorld() {
	std::cout << "hallo" << std::endl;
} 

void A(int i) {
	std::cout << i << std::endl;
}

int B(int i) {
	return i + 1;
}

void PrintValue(int i) {
	std::cout << "value : " << i << std::endl;
}

void ForEach( const std::vector<int>& vi, void(*func)(int) ) {
	for (int v : vi) {
		func(v);
	}
}

int main() {
	typedef int(*FuncName)(int);

	void(*function)() = HelloWorld;
	auto fn = HelloWorld;
	void(*ifunc)(int) = A;

	FuncName tmp = B;
	int i = B(12);

	fn();
	function();
	
	std::vector<int> val = { 1, 5, 4, 3, 2, 7, 1 };
	ForEach(val, PrintValue);
	std::cin.get();
}