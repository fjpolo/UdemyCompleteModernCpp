#include "functions.h"

int Add(int *a, int *b){
    return (*a + *b);
}
void AddVal(int *a, int *b, int *result){
    *result = (*a + *b);
}
void Swap(int *a, int *b){
    int aux{};
    aux = *a;
    *a = *b;
    *b = aux;
}
void Factorial(int *a, int *result){
    *result = 1;
    for(int i=1; i<=(*a); i++){
        //calculate factorial using for loop
        *result=(*result) * i;  
    }
}      