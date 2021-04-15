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
 * \fn Add
 * 
 * \brief
 */ 
template<typename T>
T Add(T a, T b){
    return (a + b);
}

/**
 * \fn ArraySum
 * 
 * \brief
 */ 
template<typename T>
T ArraySum(T *pArray, int arrSize){
    T sum{0};
    for(int it=0; it<arrSize; ++it){
        sum += pArray[it];
    }
    return sum;
}

/**
 * \fn Max
 * 
 * \brief
 */ 
template<typename T>
T Max(T* pArray, int arrSize){
    T* max;
    max = std::max_element(pArray, pArray + arrSize - 1 );
    // max = std::max_element(std::begin(pArray), std::end(pArray) );
    return *max;
}

/**
 * \fn Min
 * 
 * \brief
 */ 
template<typename T>
T Min(T* pArray, int arrSize){
    T* min;
    min = std::min_element(pArray, pArray + arrSize - 1 );
    return *min;
}

/**
 * \fn Max
 * 
 * \brief
 */
template<typename T> 
std::pair<T,T> MinMax(T* pArray, int arrSize){
    std::pair<T,T> MinMax;
    T max;
    T min;

    /**/
    min = Min(pArray, arrSize);
    max = Max(pArray, arrSize);
    MinMax.first = min;
    MinMax.second = max;
    return MinMax;
}


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Convert the following functions into templates
     * 
     *  1- int Add(int x,int y) ; //Return the sum of two elements
     *  2- int ArraySum(int *pArr, int arrSize); //Returns the sum of array elements
     *  3- int Max(int *pArr, int arrSize) ; //Return the largest element in the array
     *  4- std::pair<int,int> MinMax(int *pArr, int arrSize) ; //Return the smallest and largest element in a pair
     * 
     * Take care to avoid copies of user-defined objects wherever applicable.
     */
    int arr1[] = { 4, 2, 1, 6, -8, 5 };
    float arr2[] = { 4.1, 2.2, 1.3, 6.4, -8.5, 5.6 };

    /*Add*/
    std::cout << "Add: " << std::endl;
    auto sum1 = Add(1, 8);
    std::cout << sum1 << std::endl;
    auto sum2 = Add(1.1f, 3.8f);
    std::cout << sum2 << std::endl;
    auto sum3 = Add('c', 'a');
    std::cout << sum3 << std::endl;
    auto sum4 = Add(0.00001, 0.00009);
    std::cout << sum4 << std::endl;

    /*ArraySum*/
    std::cout << "ArraySum: " << std::endl;
    auto ArrSum = ArraySum(arr1, 6);
    std::cout << ArrSum << std::endl;

    /*Max*/
    std::cout << "Max: " << std::endl;
    auto ArrMax = Max(arr1, 6);
    std::cout << ArrMax << std::endl;

    /*MinMax*/
    std::cout << "MinMax: " << std::endl;
    auto ArrMinMax = MinMax(arr1, 6);
    std::cout << ArrMinMax.first << " | " << ArrMinMax.second << std::endl;

    return 0;
}
 
