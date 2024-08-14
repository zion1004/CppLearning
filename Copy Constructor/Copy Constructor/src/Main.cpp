#include <iostream>
#include <string>

struct Vector2 {
	float x, y;
};

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string) {
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}
	~String() {
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}

	String(const String& other) 
		: m_Size(other.m_Size) {
		std::cout << "copied string" << std::endl;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

//void PrintString(String string) { 
//	// this will copy string
//	// you might want to copy the parameter
//	// if that was your intention
//	// but for this function, it is an unnecessary extra computing
//	// we are doing
//	// so if we are only checking the contentes of a parameter
//	// and not doing any modification
//	// it is recommended to pass a const reference instead
//	// because for the most part copying is extra computation
//
//	std::cout << string << std::endl;
//}
// hence this function
void PrintString(const String& string) {
	std::cout << string << std::endl;
}

int main() {
	int a = 2;
	int b = a;
	b = 3; // a will still remain 2
	Vector2 va = { 2, 3 };
	Vector2 vb = va;
	vb.x = 5; // va will still be 2, 3
	
	Vector2* aPtr = new Vector2();
	Vector2* bPtr = aPtr;
	bPtr->x = 2; // aPtr x will also be changed to 2
	// however aPtr copies the address (since its a pointer) to bPtr
	// and if you make bPtr point somewhere else aPtr wont be affected
	// essentially the = operator for the most part is just copying it
	{
		String s = "Not Cherno";
		String second = s; // if we did not write a copy constructor
		// the default cpp copy constructor is provided
		// however it only shallow copies
		// thus the char pointer in our string function will be pointing to the same address

		second[2] = 'a'; // if the default copy constructor is used this will also change the s variable's string literal

		PrintString(s);
		PrintString(second);
	}
	// if the default copy constructor is used
	// the same m_Buffer will try to get freed twice due to reason stated above
	// thus our program will have undefined behavior (most likely crash)

	std::cin.get();
}