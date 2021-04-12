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
template<int size>
void Print(){
    // size++; // ERROR
    char buffer[size];      // size is constant
    std::cout << size << std::endl;
}


/**
 * \fn ArraySum
 * 
 * \brief
 */
// template<typename T>
// T ArraySum(T* pArray, int arraySize){
//     T sum{0};
//     for(int i=0; i<arraySize; ++i){
//         sum += pArray[i];
//     }
//     return sum;
// }
template<typename T, int arraySize>
T ArraySum(T (&pArray)[arraySize]){
    T sum{0};
    for(int i=0; i<arraySize; ++i){
        sum += pArray[i];
    }
    return sum;
}

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 128 - Non-type template arguments
     */
    Print<3>();
    // int i{3};
    // // Print<i>();      // Error
    // Print<sizeof(i)>(); // Works
    int arr[] = {3, 5, 7, 12, 9};
    int (&ref)[5] = arr;
    // auto sum = ArraySum(arr, 5);
    auto sum = ArraySum(ref);
    auto it = std::begin(arr);
    std::cout << it << std::endl;
    it = std::end(arr);
    std::cout << it << std::endl;
    std::cout << sum << std::endl;


    return 0;
}
 
