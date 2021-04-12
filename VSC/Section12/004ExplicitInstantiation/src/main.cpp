/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>

/**
 * \class
 * 
 * \brief
 */ 




/**
 * \fn Max
 * 
 * \brief
 */ 
template<typename T>
T Max(T a, T b){
    // std::cout << typeid(T).name() << std::endl;
    return (a > b) ? a : b;
}
template char Max(char a, char b);  // Instantiate for char


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 127
     */
    const char* b{"B"};
    const char* a{"A"};
    auto CharMax = Max(a, b);           // Compares addresses not values
    std::cout << CharMax << std::endl;

    return 0;
}
 
