#include <chrono>
#include <exception>
#include <iostream>


/**
 * @brief __has_include(<filesystem>)
 * 
 */
#ifdef __has_include
#	if __has_include(<filesystem>)
#		include<filesystem>
		// namespace fs = std::filesystem;
#	else
#		include <experimental/filesystem>
		namespace fs = std::experimental::filesystem;
#	endif // __has_include(<filesystem>)
#endif // __has_include

/**
 * \class 
 * 
 * \brief
 */


/**
 * \fn 
 * 
 * \brief 
 */


/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 16 - Feature Test Macros
	 *
	 */

	 /**/
	//  fs::path p{"..\\"};
	// std::cout << __cpp_inline_variables << std::endl;
	// std::cout << __cpp_capture_star_this << std::endl;

	 

	return 0;
}