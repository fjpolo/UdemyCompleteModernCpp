#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <any>


/**
 * \struct 
 * 
 * \brief
 */
struct Number {
	int m_Num{} ;
	Number(int num): m_Num{num} {
		std::cout << "Number(int num): m_Num{num}"  << std::endl;
	}

	Number() {
		std::cout << "Number()" << std::endl;
	}
	~Number() {
		std::cout << "~Number()" << std::endl;
	}

	Number(const Number& other) {
		m_Num = other.m_Num ;
		
		std::cout << "Number(const Number& other)" << std::endl;
	}

	Number(Number&& other) noexcept {
		m_Num = other.m_Num ;
		other.m_Num = 0 ;
		std::cout << "Number(Number&& other) noexcept" << std::endl;
	}

	Number& operator=(const Number& other) {
		std::cout << "Number& operator=(const Number& other)"  << std::endl;
		if (this == &other){
			return *this;
		}
		m_Num = other.m_Num ;
		
		return *this;
	}

	Number& operator=(Number&& other) noexcept {
		std::cout << "Number& operator=(Number&& other) noexcept" << std::endl;
		if (this == &other)
			return *this;
		m_Num = other.m_Num ;
		other.m_Num = 0 ;
		
		return *this;
	}
		friend std::ostream& operator <<(std::ostream &out, const Number &n) {
		return out << n.m_Num ;
	}
};


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
void Basics() {
	std::any v1 = 5;
	//v1 = "Hello"s ;
	v1.reset() ;
	if(v1.has_value()) {
		if(v1.type() == typeid(int)) {
			std::cout << std::any_cast<int>(v1) << std::endl; 
		}
	}
	try {
		std::cout << std::any_cast<std::string>(v1) << std::endl; 
	}catch(std::exception &ex) {
		std::cout << "Exception:" << ex.what() << std::endl; 
	}
}



/**
 * \fn main
 * 
 * \brief 
 */
int main() {

	/**
	 * @brief Section 18 - std::any
	 *
	 */

	/**
	 * @brief Video 221
	 * 
	 */

	/*Part 1*/
	// try{
	// 	std::any v1 = 5;
	// 	v1 = '8';
	// 	if(v1.has_value()){	
	// 		if(v1.type() == typeid(int)){
	// 			std::cout << std::any_cast<int>(v1) << std::endl;
	// 		}
	// 	}
	// }catch(std::exception &ex){
	// 	std::cout << "Exception: " << ex.what() << std::endl;
	// }
	// // v1.reset();

	/*Part 2*/
	using namespace std::string_literals ;
	//std::any number{Number{5}} ;
	auto n1 = std::make_any<Number>(5) ;
	//n1.reset() ;
	n1 = 5 ;
	auto &n2 = std::any_cast<int&>(n1) ;
	n2 = 100 ;
	std::cout << std::any_cast<int>(n1) << std::endl ;
	auto p = std::any_cast<int>(&n1) ;
	*p = 200 ;
	std::cout << *std::any_cast<int*>(p) << std::endl;


	return 0;
}