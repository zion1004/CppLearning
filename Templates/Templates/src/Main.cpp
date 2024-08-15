#include <iostream>
#include <string>


void Print(int i) {
	std::cout << i << std::endl;
}

void Print(std::string s) {
	std::cout << s << std::endl;
}

void Print(float f) {
	std::cout << f << std::endl;
}

template<typename T, int N>
class Array {
private:
	T m_Array[N];
public:
	int GetSize() {
		return N;
	}
};

template<typename T> 
void Print2(T t) {
	std::cout << t << std::endl;
}

int main() {
	Print(12);
	Print("asdf");
	Print(1.1f);

	std::cout << "\n==========================\n" << std::endl;

	Print2<int>(33);  // can explicitly type the template
	Print2(123);      // or the compiler can deduce it implicitly
	Print2("asdf");
	Print2(3.3f);

	std::cout << "\n==========================\n" << std::endl;

	Array<std::string, 10> arr;
	std::cout << arr.GetSize() << std::endl;

	std::cin.get();
}