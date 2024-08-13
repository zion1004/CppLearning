#include <iostream>
#include <string>

class Entity {
private:
	int m_X;
	int* m_Y;
	mutable int var;
public:
	// const keyword after a function means that you won't vary the member variable (only works in class)
	int GetX() const {
		// m_X = 2; won't work
		var = 2; // the mutable keyword will allow for modification even in a const function 
		return m_X;
	}
	// returning a pointer that cannot be modified
	// the contents of the pointer cannot be modified
	// and the function cannot also modify it
	const int* const GetY() const {
		return m_Y;
	}

};

int main() {
	int i = 5;
	i = 2;

	const int a = 5;
//	a = 2; // won't work
	
	const int* e = new int; // int const* e = new int; is equivalent code
	e = (int*) &a; // can change where it points
//	*e = 2; // but not change the content of the pointer

	int* const f = new int; // 
	*f = 2; // can change the content of the pointer
//	f = (int*) &a; // but not the pointer itself

	std::cout << *e << std::endl;
}