#include <chrono>
#include <iostream>
#include <list>
#include <string>
#include <thread>				// GCC 11.1.0 x86_64-24-ming32
#include <mutex>
#include <future>

/**
 * \class String
 * 
 * \brief
 */


/**
 * \fn Download
 * 
 * \brief 
 */
void Download() {
	// using namespace std::chrono_literals;
	for (int i = 0; i < 10; ++i) {
		std::cout << '.';
		// std::this_thread::sleep_for(500ms)
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}


/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief 
	 * 
	 */
	std::future<void> result = std::async(Download);
	std::cout << "[main]Hello world!" << std::endl;
	result.get();

	return 0;
}