/**
 * Includes
 */ 
#include <iostream>

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
// int Max(int a, int b){
//     return (a > b) ? a : b;
// }
// float Max(float a, float b){
//     return (a > b) ? a : b;
// }
// double Max(double a, double b){
//     return (a > b) ? a : b;
// }
template<typename T>
T Max(T a, T b){
    return (a > b) ? a : b;
}


/**
 * \fn main
 * 
 * \brief
 */
int main(){

    /**
     * Video 123
     */ 
    auto num1 = Max(3, 8);
    std::cout << num1 << std::endl;
    auto num2 = Max(3.3f, 8.8f);
    std::cout << num2 << std::endl;
    auto num3 = Max(0.000003, 0.000008);
    std::cout << num3 << std::endl;

    /**
     *  Is Max isn't call, it's not instantiated. No ASM is generated.
     * Code is generated at compile time.-
     */

    return 0;
}
 
