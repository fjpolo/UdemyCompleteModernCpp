#include <iostream>

/**
 *  Defines
 */
// #define 	RED		0
// #define 	GREEN	1
// const int RED = 0;
// const int GREEN = 1;

/**
 * \enum Color
 */
/*Global scope*/
// enum Color{
// 	RED = 0, 
// 	GREEN, 
// 	BLUE
// };
/*Scope enum*/
enum class Color : uint8_t{
	RED = 0,
	GREEN,
	BLUE
};

/**
 * \enum TrafficLight
 */ 
/*Scope enum*/
enum class TrafficLight : char{
	RED = 'a',
	YELLOW,
	GREEN
};

/**
 * \fn FillColor
 *
 * \brief
 */
void FillColor(Color color) {
	switch(color){
		case Color::RED:
		{
			std::cout << "RED" << std::endl;
			break; 
		}	
		case Color::GREEN:
		{
			std::cout << "GREEN" << std::endl;
			break; 
		}
		case Color::BLUE:
		{
			std::cout << "BLUE" << std::endl;
			break; 
		}
		default:
		{
			std::cout << "No colour!" << std::endl;
			break;
		}
	}
}

/**
 * \fn main
 *
 * \brief
 */
int main() {
	/**
	 * Video 76-77
	 */
	Color c = Color::RED;
	FillColor(c);
	FillColor(Color::GREEN);
	// FillColor(0xFF);	// Not allowed
	FillColor(static_cast<Color>(2));	
	FillColor(static_cast<Color>(0xFF));
	int x = static_cast<int>(Color::RED);
	return 0;
}