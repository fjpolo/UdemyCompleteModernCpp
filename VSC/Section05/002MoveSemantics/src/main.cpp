#include "../Integer/Integer.h"
#include <iostream>

/**
 * \fn Add
 */
Integer Add(const Integer &a, const Integer &b){
	Integer temp ;
	temp.SetValue(a.GetValue() + b.GetValue()) ;
	return temp ;
}


/**
 * 
 * \fn main
 * 
 */
int main() {
	Integer a(1), b(3) ;
	a.SetValue(Add(a,b).GetValue()) ;
	/*Return*/
	return 0;
}