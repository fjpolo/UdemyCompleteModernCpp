/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>

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
/*Explicit specialization*/
template<> const char* Max<const char*>(const char* a, const char* b){
    // std::cout << "Max<const char*>()" << std::endl;
    return strcmp(a, b) > 0 ? a : b;
}

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 127 - Explicit specialization
     */
    const char* b{"B"};
    const char* a{"A"};
    auto CharMax = Max(a, b);           // Compares addresses not values
    std::cout << CharMax << std::endl;

    return 0;
}
 
