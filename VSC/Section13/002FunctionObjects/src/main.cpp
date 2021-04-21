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
 * \fn 
 * 
 * \brief
 */ 
// using Comparator = bool(*)(int, int);
template<typename T, int size, typename Comparator>
void Sort(T(&arr)[size], Comparator comp){
    for(int i=0; i<size-1; ++i){
        for(int j=0; j<size-1; ++j){
            if(comp(arr[j], arr[j+1])){
                /*In place swap - move*/
                arr[j] = std::move(arr[j] + arr[j+1] - (arr[j+1] = std::move(arr[j])));
            }
        }
    }
}
bool Comp(int x, int y){
    return x > y;
}
bool Comp1(int x, int y){
    return x < y;
}
struct Comp2{
    bool operator()(int x, int y){
        return x > y;
    }
};

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 145
     */
    Comp(3, 5);
    Comp2 comp;
    comp(3, 5); // comp.opearator()(3, 5)
    /*Using predicate*/
    int  arr[]{1, 6, 8, 3, 9, 0};
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    // Sort(arr, CompBiggerThan);
    Sort(arr, comp);
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;


    return 0;
}
 
