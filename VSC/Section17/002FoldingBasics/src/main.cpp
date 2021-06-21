#include <iostream>
#include <mutex>

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
auto Sum(){
	return 0;
}
template<typename T, typename ...Args>
auto Sum(T a, Args...args){
	return a + Sum(args...);
}

/**
 * \fn 
 * 
 * \brief 
 */
template<typename ...Args>
auto Sum2(Args...args){
	return (args + ...);	// Unary right fold
	// return (... + args);		// Unary left fold
}

/**
 * \fn 
 * 
 * \brief 
 */
template<typename ...Args>
auto Sum3(Args...args){
	// return (args + ... + 0);	// Binary right fold
	return (0 + ... + args);		// Binary left fold
}

/**
 * \fn 
 * 
 * \brief 
 */
template<typename...Args>
bool AnyOf(Args...args){
	return (... || (args % 2 == 0));
}
template<typename...Args, typename Predicate>
 bool AnyOfv2(Predicate p, Args...args){
	 return (... || p(args));
 }

/**
 * \fn 
 * 
 * \brief 
 */
 template<typename...Args>
 bool AllOf(Args...args){
	 return (... && (args % 2 == 0));
 }




/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Section 17 - Folding
	 *
	 */

	/*Variadic templates*/
	auto result = Sum(1, 2, 3, 4, 5);
	std::cout << result << std::endl;
	/**
	 * Sum(1, 2, 3, 4, 5)
	 * return 1 + Sum(2, 3, 4, 5)
	 * return 2 + Sum(3, 4, 5)
	 * return 3 + Sum(4, 5)
	 * return 4 + Sum(5)
	 * return 5 + Sum()
	 * return 0
	 * 
	 *
	 * 1 + (2 + (3 + (4 + (5 + 0))))
	 * 1 + (2 + (3 + (4 + (5))))
	 * 1 + (2 + (3 + (4 + 5)))
	 * 1 + (2 + (3 + 9))
	 * 1 + (2 + 12)
	 * 1 + 14
	 * 15
	 * 
	 */


	/*Unary folds*/
	auto result2 = Sum2(1, 2, 3, 4, 5);
	std::cout << result2 << std::endl;
	// auto result2 = Sum2();	// Error
	/**
	 * Unary right fold
	 * 
	 * Sum2(1, 2, 3, 4, 5)
	 * (1 + (2 + (3 + (4 + 5))))
	 * 
	 * Unary left fold
	 *
	 * ((((1 + 2) + 3) + 4) + 5)
	 */

	/*Binary fold*/
	auto result3 = Sum3(1, 2, 3, 4, 5);
	std::cout << result3 << std::endl;
	result3 = Sum3();
	std::cout << result3 << std::endl;
	/**
	 * Binary right fold
	 * 
	 * Sum2(1, 2, 3, 4, 5)
	 * (1 + (2 + (3 + (4 + (5 + 0)))))
	 * 
	 * Binary left fold
	 *
	 * (((((1 + 2) + 3) + 4) + 5) + 0)
	 */

	/**
	* Operators:
	*
	* + - * / % ^ & | = < > << >> += -=
	* *= /= %= ^= &= |= <<= >>= == != <= 
	* >= && || , .* ->*
	*
	* && 		default 	true
	* || 		default 	false
	* ,  		default 	void()
	* Others 	default 	ill-formed
	* 
	*/
	std::cout << std::boolalpha;
	std::cout << "Any even? " << AnyOf(1, 3, 5) << std::endl;
	std::cout << std::boolalpha;
	std::cout << "Any even? " << AnyOf(1, 2, 3, 5) << std::endl;
	std::cout << std::boolalpha;
	std::cout << "All even? " << AllOf(2, 3 ,6) << std::endl;
	std::cout << std::boolalpha;
	std::cout << "All even? " << AllOf(2, 4 ,6) << std::endl;

	std::cout << std::boolalpha;
	std::cout << "Any even? " << AnyOfv2([](int x){return x % 2 == 0;}, 1, 3, 5) << std::endl;
	



	return 0;
}