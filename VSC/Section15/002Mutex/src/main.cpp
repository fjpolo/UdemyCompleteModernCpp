#include <iostream>
#include <list>
#include <string>
// #include "mingw.thread.h"	// if no threads support
#include <thread>				// GCC 11.1.0 x86_64-24-ming32
#include <mutex>

std::list<int> g_Data;
const int _SIZE = 500000;
std::mutex g_Mutex;


/**
 * \class String
 * 
 * \brief
 */
class String {
	public:
		String() {
			std::cout << "String()" << std::endl;
		}
		String(const String &) {
			std::cout << "String(const String&)" << std::endl;
		}
		String & operator=(const String&) {
			std::cout << "operator=(const String&)" << std::endl;

			return *this;
		}
		~String() {
			std::cout << "~String()" << std::endl;
		}
};

/**
 * \fn Download
 * 
 * \brief 
 */
void Download() {
	for (int i = 0; i < _SIZE; ++i) {
		//Use std::lock_guard to lock a mutex (RAII)
		std::lock_guard<std::mutex> mtx(g_Mutex);
		g_Data.push_back(i);
		if (i == 500)
			return;
	}
}

/**
 * \fn Download2
 * 
 * \brief 
 */
void Download2() {
	for (int i = 0; i < _SIZE; ++i) {
		std::lock_guard<std::mutex> mtx(g_Mutex);
		g_Data.push_back(i);
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
	std::thread thDownloader(Download);
	std::thread thDownloader2(Download2);
	thDownloader.join();
	thDownloader2.join();
	std::cout << g_Data.size() << std::endl; 


	return 0;
}