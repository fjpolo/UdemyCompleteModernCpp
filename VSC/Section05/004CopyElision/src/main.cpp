#include "../Integer/Integer.h"
#include <iostream>

/**
 * \fn Add
 */
// Integer Add(const Integer &a, const Integer &b){
Integer Add(int a, int b){
	// Integer temp ;
	// temp.SetValue(a.GetValue() + b.GetValue()) ;
	Integer temp (a + b);
	return temp ;			// Named return value optimization
}


/**
 * 
 * \fn main
 * 
 */
int main() {
	// Integer a = 3;	// Integer a = Integer(3) -> Copy elission
	Integer a = Add(3, 5);
	/*Return*/
	return 0;
}