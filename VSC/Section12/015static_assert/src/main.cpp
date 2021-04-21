/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include "../Libraries/Integer.h"
#include <type_traits>



/**
 * typedefs
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
template<typename T>
T Divide(T a, T b){
    static_assert( std::is_floating_point<T>::value, "Use floating point types only");
    return (a / b);
}


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 142
     */
    // if(sizeof(void*) != 4){
    //     std::cout << "Not 32bit mode!" << std::endl;
    // }
    // else{
    //     std::cout << "Running in 32bit mode.-" << std::endl;
    // }
    static_assert(sizeof(void*) == 4, "Compile in 32bit mode only.-");
    // static_assert(sizeof(void*) == 8, "Compile in 64bit mode only.-");

    // std::cout << Divide(5, 2) << std::endl;
    std::cout << Divide(5.0f, 2.0f) << std::endl;

    return 0;
}

