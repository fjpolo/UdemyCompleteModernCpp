#include <chrono>
#include <exception>
#include <iostream>


/**
 * \brief namepace 
 * 
 * \brief
 */
// namespace [[deprecated("Do not use this namespace!!!")]] namie{
// };

/**
 * \class Test
 * 
 * \brief
 */
class [[deprecated("This class is replaced by NewTest class")]]Test{


};

/**
 * \class Number
 * 
 * \brief
 */
 class [[nodiscard]] Number{
	 
 };
 Number GetNumber(int x){
	 return Number{};
 }


/**
 * \fn CreateIntArray
 * 
 * \brief 
 */
[[deprecated("Use a new version instead")]]
int* CreateIntArray(std::size_t size){
	return new int[size];
}

/**
 * \fn CreateArray
 * 
 * \brief 
 */
template<typename T>
[[nodiscard]]
T* CreateArray(std::size_t size){
	return new T[size];
}



/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 16 - Attributes
	 * 
	 *	GCC: __attributes	| NOT STANDARD
	 *	MSVC: __declspec	|
	 *
	 *	C++11: some stantard attributes	|
	 * 	C++14: more attributes 			| No custom attributes
	 *  C++17: more attributes			|
	 */
	 
	/*deprecated*/
	// CreateIntArray(3);
	// Test testie{};
	// using namespace namie;

	/*nodiscard*/
	auto p = CreateArray<int>(5);
	auto num = GetNumber(7);


	return 0;
}