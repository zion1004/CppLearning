#include "pch.h"


int main() {
	std::cout << "hello world" << std::endl;
	std::cout << "hello world" << std::endl;
	std::cout << "hello world" << std::endl;
	std::cout << "hello world" << std::endl;

	std::cin.get();
}

/*
	for g++

		g++ -std=c++11 pch.h <-(the precompiled header file to precompile)
	
	which will create a gch file

	and 

		g++ -std=c++11 Main.cpp<-(the file to compile)
*/