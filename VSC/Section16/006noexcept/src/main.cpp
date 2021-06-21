#include <chrono>
#include <exception>
#include <iostream>


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
void Foo()noexcept{
}

/**
 * \fn 
 * 
 * \brief 
 */
void Bar(){
}







/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 16 - noexcept
	 *
	 */
	// void (*p)()noexcept;
	// p = Foo ;
	// p() ;	
	void (*p)()noexcept;
	p = Foo ;
	p() ;	

	return 0;
}