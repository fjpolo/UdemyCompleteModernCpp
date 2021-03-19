/**
 * Includes
 */
#include <iostream>
#include "../libraries/functions.h"
/**
 * 
 * main()
 * 
 */
int main(){
	/*Namespaces*/
	using namespace std;
	/*Variables*/
	int a{};
	int b{};
	
	/*Functons*/
	
	/*Add*/
	a = 2;
	b = 5;
	int result{};
	cout << a << " + " << b << " = " << Add(&a, &b) << endl;
	a = 15;
	b = 199;
	/*AddVal*/
	AddVal(&a, &b, &result);
	cout << a << " + " << b << " = " << result << endl;
	/*Swap*/
	Swap(&a, &b);
	cout << "a is now " << a << endl;
	cout << "b is now " << b << endl;
	/*Factorial*/
	b = 4;
	Factorial(&b, &result);
	cout << "4! = " << result << endl;
	return 0; 
}