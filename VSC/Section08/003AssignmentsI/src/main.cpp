/**
 * Includes
 */
#include <iostream>
#include <cstring>
#include <string>

/**
 * Defines 
 */
#define _CRT_SECURE_NO_WARNINGS //Suppress compiler errors for usage of non-secure C functions




/**
 * \fn  ToUpper
 *
 * \brief takes a string an returns one in upper case.-
 */
std::string ToUpper(const std::string &str){
	std::string auxStr(str); 
	for(auto &ch : auxStr){
		// std::cout << ch << std::endl;
		ch = std::toupper(ch);
		// std::cout << ch << std::endl;
	}
	return auxStr;
}

/**
 * \fn  ToLower
 *
 * \brief takes a string an returns one in lower case.-
 */
std::string ToLower(const std::string &str){
	std::string auxStr(str); 
	for(auto &ch : auxStr){
		// std::cout << ch << std::endl;
		ch = std::tolower(ch);
		// std::cout << ch << std::endl;
	}
	return auxStr;
}


/**
 * \fn main
 *
 * \brief
 */
int main() {
	/**
	 * The std::string function does not provide any function to convert the underlying string to upper case or lower case. Write two functions that provide this behavior. Both functions return a copy of the converted string. In case of error, return an empty string.
	 *
	 *		std::string ToUpper(const std::string &str) ;
	 *		std::string ToLower(const std::string &str) ;
	 *
	 * Hint : Use toupper & tolower from C string library.
	 *
	 */

	std::string stringy{"This is a string.-"};
	std::cout << "Original: " << stringy << std::endl;
	stringy = ToUpper(stringy);
	std::cout << "Upper case: " << stringy << std::endl;
	stringy = ToLower(stringy);
	std::cout << "Lower case: " << stringy << std::endl;
	return 0 ;
}
