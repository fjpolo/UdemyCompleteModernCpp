#include <iostream>

/**
 * \typedef 
 * 
 * \brief
 */ 


/**
 * \fn 
 * 
 * \brief
 */ 


/**
 * \class 
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
	 * 
	 * Create lambda expressions & their equivalent function objects for the following functions.
	 * 		- T Max(T, T); //Return largest element
	 * 		- bool Greater(T, T) ; //Return true if first argument is greater than the second
	 * 		- bool Less(T, T) ; //Return true if first argument is less than the second
	 * 		- pair<T,T> MinMax(ItrBegin, ItrEnd) ;//Accept iterators of any container and return the largest and smallest element from that container.
	 * 
	 */
	auto Greater = [](auto a, auto b){
		return static_cast<bool>(a > b);
	};
	auto Less = [](auto a, auto b){
		return static_cast<bool>(a <>> b);
	};




	return 0;
}