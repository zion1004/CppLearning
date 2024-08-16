#include <iostream>

class Base {
public:
	Base() {

	}
	virtual ~Base() {

	}
};

class Derived : public Base {
public:
	Derived() {

	}
	~Derived() {

	}
};

class AnotherClass : public Base {
public:
	AnotherClass() {

	}
	~AnotherClass() {

	}
	void DoSomething() {
		//do something...
	}
};

int main() {
	/*
		The C way of type casting.
	*/
	int a = 5;
	double b = a; // implicitly converted

	double c = 5.25;
	int d = c;   //  also implicitly converted

	int e = 10;
	double f = (double)e; // how to explicitly convert

	// maybe one use of explicity type conversion
	double g = (int)f + c;
	std::cout << g << std::endl;
	std::cout << (int)g << std::endl;

	// c++ way of type casting
	double a1 = 5.25;
	double b1 = 10.1;

	double c1 = static_cast<int>(a1) + b1;
	std::cout << c1 << std::endl;
	/*
		other ways to c++ cast is

		reinterpret_cast
		dynamic_cast
		const_cast

		under the hood it is just like c style type casting
		
		they really don't do anything extra that c style type casting cannot do
		but are really just syntactic sugar on top of c style type casting

		such as static casting checking at compile time if the casing is possible or not

		ex:
			float f = 1.0f;
			int b = static_cast<int>(f); <- this is possible since
			
			int a = 10;
		    char c = 'a';
			int* p = static_cast<int*>(&c); <- not a legal type conversion

		and the compiler will let you know but the c type conversion will allow such
		type casting and won't be caught at compile time

		or dynamic casting may return null if the type casting failed

		ex:
			Derived* derived = new Derived();
			Base* base = derived;
			AnotherClass* ac = static_cast<AnotherClass*>(base); <- won't be caught at compile time
			ac->DoSomething(); <- will compile but won't behave as expected 
								  since we catually know ac is not actually AnotherClass

			//instead we can use dynamic_cast like so
			AnotherClass* ac = dynamic_cast<AnotherClass*>(base); 
			and we can check if the conversion was successful if ac is not null

		const_cast can add or remove const'ness' (mostly for removing const)

		reinterpret_cast like c style type cast and doesn't do conversion
		but reinterpret a variable to another that we are casting it into
		without the conversion

		they just perform some extra things and us programmers can take 
		advantage of such syntactic sugar to make 
		coding easier instead of manually doing the type casting 
		ourselves with c style type casting and also doing 
		the checks (or other things the other c++ cast offers)
		all manually
	*/

	Derived* derived = new Derived();
	Base* base = derived;
//	AnotherClass* ac = dynamic_cast<AnotherClass*>(base);
	AnotherClass* ac = static_cast<AnotherClass*>(base);
	std::cout << ac << std::endl;
	ac->DoSomething();


	std::cin.get();
}