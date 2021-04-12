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
    std::cout << typeid(T).name() << std::endl;
    return (a > b) ? a : b;
}


/**
 * \fn main
 * 
 * \brief
 */
template char Max(char a, char b);  // Instantiate for char
int main(){
    /**
     * Video 125
     */
    Max(3, 6);
    Max(3.1f, 6.2f);
    // Max(3, 6.2f);   // Error
    // Max(static_cast<float>(3), 5.1f);    // Solution 1
    Max<double>(3, 6.2f);
    int (*fn_p)(int, int) = Max;

    return 0;
}
 
