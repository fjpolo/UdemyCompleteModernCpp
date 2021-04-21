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
// template<typename T, int size>
// void Sort(T(&arr)[size]){
//     for(int i=0; i<size-1; ++i){
//         for(int j=0; j<size-1; ++j){
//             if(arr[j] > arr[j+1]){
//                 // // // T temp = arr[j];
//                 // // // arr[j] = arr[j+1];
//                 // // // arr[j+1] = temp;

//                 // /*Move*/
//                 // T temp = std::move(arr[j]);
//                 // arr[j] = std::move(arr[j+1]);
//                 // arr[j+1] = std::move(temp);

//                 // // /*In place swap*/
//                 // // arr[j] = arr[j] + arr[j+1] - (arr[j+1] = arr[j]);

//                 /*In place swap - move*/
//                 arr[j] = std::move(arr[j] + arr[j+1] - (arr[j+1] = std::move(arr[j])));
//             }
//         }
//     }
// }

using Comparator = bool(*)(int, int);
template<typename T, int size>
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
bool CompBiggerThan(int x, int y){
    return x > y;
}
bool CompSmallerThan(int x, int y){
    return x < y;
}

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 144
     */
    // int  arr[]{1, 6, 8, 3, 9, 0};
    // for(auto x : arr){
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl;
    // Sort(arr);
    // for(auto x : arr){
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl;

    /*Using predicate*/
    int  arr[]{1, 6, 8, 3, 9, 0};
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    // Sort(arr, CompBiggerThan);
    Sort(arr, CompSmallerThan);
    for(auto x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;


    return 0;
}
 
