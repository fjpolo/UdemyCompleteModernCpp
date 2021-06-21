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
 * \fn Operation
 * 
 * \brief 
 */
int Operation(std::promise<int> & data) {
	// using namespace std::chrono_literals;
	auto f = data.get_future();
	std::cout << "[Task]Waiting for count" << std::endl;
	auto count = f.get();
	std::cout << "[Task]Count aqcuired" << std::endl;
	int sum{};
	for (int i = 0; i < 10; ++i) {
		sum +=i;
		std::cout << '.';
		// std::this_thread::sleep_for(500ms)
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
	std::cout << std::endl;
	return sum;
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
	std::promise<int> data;
	std::future<int> result = std::async(std::launch::async, Operation, std::ref(data));
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "[main]Thread continues execution..." << std::endl;
	data.set_value(15);
	if(result.valid()){
		auto sum = result.get();
		std::cout << "sum: " << sum << std::endl;
	}

	return 0;
}