#include <iostream>
#include <list>
// #include "mingw.thread.h"	// if no threads support
#include <thread>				// GCC 11.1.0 x86_64-24-ming32
std::list<int> g_data;
const int _SIZE = 500000000;

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
void Download(){
	std::cout << "[Downloader]Started Download" << std::endl;
	for(int i=0; i<_SIZE; i++){
		g_data.push_back(i);
	}
	std::cout << "[Downloader]Finished Download" << std::endl;
}

/**
 * \fn DownloadV2
 * 
 * \brief 
 */
void DownloadV2(const String &file){
	// std::cout << "[Downloader]Started Download: " << file << std::endl;
	for(int i=0; i<_SIZE; i++){
		g_data.push_back(i);
	}
	std::cout << "[Downloader]Finished Download" << std::endl;
}


/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Threadloss
	 * 
	 */
	//  std::cout << "[main]User started an operation" << std::endl;
	//  Download();
	//  std::cout << "[main]User started an operation" << std::endl;

	/**
	* @brief Using threads. Join.-
	* 
	*/
	// std::cout << "[main]User started an operation" << std::endl;
	// /*New thread*/
	// std::thread thDownloader(Download);
	// std::cout << "[main]User started an operation" << std::endl;
	// thDownloader.join();

	/**
	  * @brief Using threads. Detached.-
	  * 
	  */
	// std::cout << "[main]User started an operation" << std::endl;
	// /*New thread*/
	// std::thread thDownloader(Download);
	// thDownloader.detach();
	// std::cout << "[main]User started an operation" << std::endl;
	// if(thDownloader.joinable()) thDownloader.join();
	// system("Pause");

	/**
	  * @brief Using threads. Detached.-
	  * 
	  */
	// std::string file{"Sunshine.mp3"};
	String file;
	std::cout << "[main]User started an operation" << std::endl;
	/*New thread*/
	// std::thread thDownloader(DownloadV2,std::ref(file));
	std::thread thDownloader(DownloadV2,std::cref(file));
	thDownloader.detach();
	std::cout << "[main]User started an operation" << std::endl;
	if(thDownloader.joinable()) thDownloader.join();
	system("Pause");

	return 0;
}