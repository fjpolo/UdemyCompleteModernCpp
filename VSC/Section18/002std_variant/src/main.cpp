#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <variant>



/**
 * \struct 
 * 
 * \brief
 */
struct Number {
	int m_Num{} ;
	Number(int num): m_Num{num} {
		std::cout << __FUNCSIG__ << std::endl;
	}

	Number() {
		std::cout << __FUNCSIG__ << std::endl;
	}
	~Number() {
		std::cout << __FUNCSIG__ << std::endl;
	}

	Number(const Number& other) {
		m_Num = other.m_Num ;
		
		std::cout << __FUNCSIG__ << std::endl;
	}

	Number(Number&& other) noexcept {
		m_Num = other.m_Num ;
		other.m_Num = 0 ;
		std::cout << __FUNCSIG__ << std::endl;
	}

	Number& operator=(const Number& other) {
		std::cout << __FUNCSIG__ << std::endl;
		if (this == &other){
			return *this;
		}
		m_Num = other.m_Num ;
		
		return *this;
	}

	Number& operator=(Number&& other) noexcept {
		std::cout << __FUNCSIG__ << std::endl;
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




/**
 * \fn main
 * 
 * \brief Optional std::optional: https://github.com/TartanLlama/optional/blob/master/include/tl/optional.hpp
 */
int main() {

	/**
	 * @brief Section 18 - std::variant
	 *
	 */

	/**
	 * @brief Video 218
	 * 
	 */
	try{

		std::variant<std::string, int> v{5};
		// auto val = std::get<std::string>(v);
		// val = std::get<0>(v);
		/*get*/
		auto val = std::get<int>(v);
		val = std::get<1>(v);
		/*Index*/
		auto activeIndex = v.index();
		std::cout << activeIndex << std::endl;
		/*get_if*/
		// auto p = std::get_if<std::string>(&v);
		auto p = std::get_if<int>(&v);
		if(p == nullptr){
			std::cout << "Not active" << std::endl;
		}
		else{
			std::cout << *p << std::endl;
		}

	}catch(std::exception &ex){
		std::cout << "Exception: " << ex.what() << std::endl;
	}


	/**
	 * @brief Video 219
	 * 
	 */




	return 0;
}