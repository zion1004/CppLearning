#include <iostream>

#define LOG(x) std::cout << x << std::endl



class Player {
private: // class member is private by default
	int x, y;
	int speed;

public: // and public has to be explicitly stated if you want it to be visible outside
	void Move(int xa, int ya){
		x += xa * speed;
		y += ya * speed;
	}
};

/*
	struct in C++ is just like a c++ class
	but its members are public by default
*/
struct Something {
public: // struct member is public by default
	int a, b;

private: // and private has to be explicitly stated if you want it to be not accessible
	int c;
};

class Log {
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo; // m_ is just a convention to say that a variable is a member variable

public:
	void SetLevel(int level){
		m_LogLevel = level;
	}

	void Error(const char* msg) {
		if(m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << msg << std::endl;
	}
	void Warn(const char* msg) {
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << msg << std::endl;
	}
	void Info(const char* msg) {
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << msg << std::endl;
	}
};

int main() {
	Player p;
	
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Warn("Hello");
	log.Info("Hello");
	log.Error("Hello");

	std::cin.get();
	return 0;
}