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
 * \typedef Unnamed
 * 
 * \brief
 */ 
// typedef struct{
//     int operator()(int x, int y){
//         return x+y;
//     }
// }Unnamed;
template<typename T>
struct Unnamed{
    int operator()(T x, T y)const{
        return x+y;
    }
};



/**
 * \fn 
 * 
 * \brief
 */ 




/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 146 - Lambda expressions
     */

    /**
     * Lambda Expressions:
     *  - Define anonymous function object
     *  - Syntactic shortcut for a function object
     *  - Can be passed as an argument 
     *  - Can accept parameters and return values
     *  - Encapsulate a few lines of code
     *  - Behave like a normal function when invoked
     *  - Replace function objects
     *  - Internally implemented ad a nameless function object
     *  - Use auto to provide a explicit name
     * 
     *          [](<args>)<mutable specification><exception specification> -> <return type>
     *          {
     *              // Implementation
     *          }
     */
    // [](){
    //     std::cout << "Welcome to Lambda 1.0" << std::endl;
    // }();
    // auto fn = [](){
    //     std::cout << "Welcome to Lambda 1.0" << std::endl;
    // };
    // fn();
    // std::cout << "fn type: " << typeid(fn) << std::endl;


    /**
     * Video 147 - Lambda expressions Internals
     */
    // auto sum = [](int x, int y)->int{
    //     return x+y;
    // }; 
    // std::cout << "Sum is: " << sum(2, 5) << std::endl;
    //
    // Unnamed n;
    // std::cout << "Sum is: " << n(2, 5) << std::endl;
    //
    Unnamed<int> n;
    std::cout << "Sum is: " << n(2, 5) << std::endl;
    auto sum = [](auto x, auto y)noexcept(true){  // C++14
        return x+y;
    }; 
    std::cout << "Sum is: " << sum(2, 5) << std::endl;

    

    return 0;
}
 
