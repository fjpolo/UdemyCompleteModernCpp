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
int Operation(int count) {
	// using namespace std::chrono_literals;
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
	// // std::future<int> result = std::async(Operation, 10);
	// // std::future<int> result = std::async(std::launch::async, Operation, 10);
	// std::future<int> result = std::async(std::launch::deferred, Operation, 10);
	// std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	// std::cout << "[main]Thread continues execution..." << std::endl;
	// if(result.valid()){
	// 	//Operation(10);
	// 	auto sum = result.get();
	// 	std::cout << "sum: " << sum << std::endl;
	// }


	/**
	 * @brief 
	 * 
	 */
	// std::future<int> result = std::async(std::launch::deferred, Operation, 10);
	// std::future<int> result = std::async(std::launch::async, Operation, 10);
	// std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	// std::cout << "[main]Thread continues execution..." << std::endl;
	// if(result.valid()){
	// 	// result.wait();	// Blocking 
	// 	auto status = result.wait_for(std::chrono::milliseconds(1000));
	// 	switch(status){
	// 		case std::future_status::deferred:
	// 		{
	// 			std::cout << "Task is synchronous" << std::endl;
	// 			break;
	// 		}
	// 		case std::future_status::ready:
	// 		{
	// 			std::cout << "Task is ready" << std::endl;
	// 			break;
	// 		}
	// 		case std::future_status::timeout:
	// 		{
	// 			std::cout << "Task is still running" << std::endl;
	// 			break;
	// 		}
	// 		default:
	// 		{
	// 			std::cout << "Some error ocurred" << std::endl;
	// 			break;
	// 		}
	// 	}
	// 	auto sum = result.get();
	// 	std::cout << "sum: " << sum << std::endl;
	// }

	/**
	 * @brief 
	 * 
	 */
	std::future<int> result = std::async(std::launch::async, Operation, 10);
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::cout << "[main]Thread continues execution..." << std::endl;
	if(result.valid()){
		// result.wait();	// Blocking 
		auto timepoint = std::chrono::system_clock::now();
		timepoint += std::chrono::milliseconds(1000);
		auto status = result.wait_until(timepoint);
		switch(status){
			case std::future_status::deferred:
			{
				std::cout << "Task is synchronous" << std::endl;
				break;
			}
			case std::future_status::ready:
			{
				std::cout << "Task is ready" << std::endl;
				break;
			}
			case std::future_status::timeout:
			{
				std::cout << "Task is still running" << std::endl;
				break;
			}
			default:
			{
				std::cout << "Some error ocurred" << std::endl;
				break;
			}
		}
		auto sum = result.get();
		std::cout << "sum: " << sum << std::endl;
	}

	return 0;
}