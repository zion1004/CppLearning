#include <iostream>

enum Example {
	A, B, C
};

enum Example2 {
	A2 = 5, B2, C2
};

enum E : unsigned char {
	A3, B3, C3
};

class Log {
public:
	enum Level {
		LevelError, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo; // m_ is just a convention to say that a variable is a member variable

public:
	void SetLevel(Level level) {
		m_LogLevel = level;
	}

	void Error(const char* msg) {
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << msg << std::endl;
	}
	void Warn(const char* msg) {
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << msg << std::endl;
	}
	void Info(const char* msg) {
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << msg << std::endl;
	}
};

int main() {
	Example val = Example::B;

	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello");
	log.Info("Hello");
	log.Error("Hello");

	std::cin.get();
	return 0;
}