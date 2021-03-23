#include "../Integer/Integer.h"
#include <iostream>

/**
 * \fn Print 
 */
void Print(Integer val){}

/**
 * 
 * \fn main
 * 
 */
int main() {
	Integer a{1};
	a.SetValue(3);
	std::cout << a.GetValue() << std::endl;
	// auto b{static_cast<Integer&&>(a)};			// force move constructor
	// auto b{std::move(a)};							// force move constructor
	Print(std::move(a));
	a.SetValue(5);								// Crash if no m_pint	
	std::cout << a.GetValue() << std::endl;		// Crash if no m_pint

	/*Non-copiable object (Need to comment out copy constructor)*/
	// Print(std::move(a));
	// a.SetValue(5);
	// std::cout << a.GetValue() << std::endl;

	/*Return*/
	return 0;
}