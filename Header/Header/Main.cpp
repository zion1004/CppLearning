#include <iostream>
#include "Common.h"
#include "Log.h"


int main() {
	InitLog();
	Log("Hello, World!");
	std::cin.get();
	
	return 0;
}