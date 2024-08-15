#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork() {
	using namespace std::literals::chrono_literals;

	std::cout << "started thread : " << std::this_thread::get_id() << "\n";
	while (!s_Finished) {
		std::cout << "working...\n";
		std::this_thread::sleep_for(1s);
	}
}


int main() {
	std::cout << "started thread : " << std::this_thread::get_id() << "\n";
	std::thread worker(DoWork);
	
	std::cin.get();
	s_Finished = true;

	worker.join();

	std::cout << "finished" << std::endl;
	std::cin.get();
}