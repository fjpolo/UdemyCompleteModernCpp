/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>
#include "../Libraries/Integer.h"

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

// template<typename T>
// void Print(std::initializer_list<T> args){
//     for(const auto x : args){   
//         std::cout << x << " ";
//     }
// }
// /*Template parameter pack*/
// template<typename...Params>
// /*Function parameter pack*/
// void Print(Params... args){
//     /*Use recursion, each time parameter arg reduced by one*/
//     Print(args...); // Infinite recursion
// }

/*Basecase function*/
void Print(){
    std::cout << std::endl;
}
/*Template parameter pack*/
template<typename T, typename...Params>
/*Function parameter pack*/
void Print(T &&a, Params&&... args){
    // std::cout << sizeof...(args) << std::endl;
    // std::cout << sizeof...(Params) << std::endl;
    std::cout << a;
    if(sizeof...(args) != 0){
        std::cout << ',';
    }
    Print(std::forward<Params>(args)...);
}



/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 132
     */
    // Print({1,2,3,4,5,6,7,8});
    // Print(1,2,3,"4");
    Integer val{10};
    Print(0, val, Integer{8});
    

    return 0;
}
 
