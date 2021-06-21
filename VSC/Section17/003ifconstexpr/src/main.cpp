#include <cmath>
#include <iostream>
#include <mutex>
#include <string>
#include <type_traits>

/**
 * \struct 
 * 
 * \brief
 */


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
template<typename T>
void  Print(const T& value){
	// std::cout << value << std::endl;
	if constexpr (std::is_pointer<T>::value){
		std::cout << *value << std::endl;
	}
	else if constexpr (std::is_array<T>::value){
		for(auto v : value){
			std::cout << v << ' ';
		}
	}
	else{
		std::cout << value << std::endl;
	}
}

/**
 * \fn 
 * 
 * \brief
 */
template<typename T>
std::string ToString(T value){
	if constexpr (std::is_arithmetic<T>::value){
		return std::to_string(value);
	}
	else{
		return std::string{value};
	}
}

/**
 * \fn 
 * 
 * \brief
 */
void CheckMode() {
	if constexpr (sizeof(void *) == 4) {
		std::cout << "32-bit\n" ;
	}else if constexpr (sizeof(void *) == 8) {
		std::cout << "64-bit\n" ;
	}else {
		std::cout << "Unknown mode\n" ;
	}
}






/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Section 17 - if constexpr
	 *
	 */
	 int value{5};
	//  Print(value);
	//  Print(&value);
	//  int intArr[] = {1, 2, 3, 4, 5};
	//  Print(intArr);

	/**/
	auto s = ToString(value);
	Print(s);

	/**/
	CheckMode() ;
	

	return 0;
}