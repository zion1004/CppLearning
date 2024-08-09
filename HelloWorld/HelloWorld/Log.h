#include <iostream>

void Log(const char* message);


/*
	or use static or inline to resolve linkage like so  
 
	inline void Log(const char* message){
		std::cout << message << std:endl;
	}

	OR

	static void Log(const char* message){
		std::cout << message << std:endl;
}
*/