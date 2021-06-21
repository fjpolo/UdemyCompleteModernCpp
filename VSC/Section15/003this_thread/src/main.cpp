#include <chrono>
#include <iostream>
#include <list>
#include <string>
#include <thread>				// GCC 11.1.0 x86_64-24-ming32
#include <mutex>
#include <Windows.h>

/**
 * \class 
 * 
 * \brief
 */


/**
 * \fn Download
 * 
 * \brief 
 */
void Process(){
	std::cout << "Thread ID: " << std::this_thread::get_id() << std::endl;
	for(int i=0; i< 10; ++i){
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		std::cout << i << " | ";
	}
	std::cout << std::endl;
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
	std::thread t1(Process);
	auto id = t1.get_id();
	auto handle = t1.native_handle();
	// SetThreadDescription(handle, L"MyThread")
	std::cout << id << " | " << handle << std::endl;

	/*Number of cores*/
	int cores = std::thread::hardware_concurrency();
	std::cout << "Cores: " << cores<< std::endl;

	/*Join*/
	t1.join();
	return 0;
}