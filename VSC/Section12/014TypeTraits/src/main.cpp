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
    if(std::is_floating_point<T>::value == false){                          // std::is_floating_point<T>::value @ compile time |  == false @ runtime
        std::cout << "Use floating point types only." << std::endl;
        return 0;
    }
    return a/b;
}

/**
 * \fn 
 * 
 * \brief
 */ 
template<typename T>
void Check(T&&){
    std::cout << std::boolalpha;
    std::cout << "Is Reference? " << std::is_reference<T>::value << std::endl;
    /**/
    std::cout << "After removing: " << 
    std::is_reference<typename std::remove_reference<T>::type>::value << std::endl;
}


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 141
     */

    /**
     * 
     * Type Traits: <type_traits>
     *
     *      - is_void
     *      - is_null_pointer
     *      - is_integral
     *      - is_floating_point
     *      - is_array
     *      - is_enum
     *      - is_union
     *      - is_class
     *      - is_function
     *      - is_pointer
     */
    std::cout 
    << std::boolalpha 
    << "Is integer? " << std::is_integral<int>::value 
    << std::endl;

    std::cout << Divide(5, 2) << std::endl;
    
    Check(5);
    int value{};
    Check(value);

    return 0;
}
 
