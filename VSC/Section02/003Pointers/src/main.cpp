/**
 * Includes
 */
#include <iostream>

/**
 * 
 * main()
 * 
 */
int main(){
	/*Namespaces*/
	using namespace std;
	/*Variables*/
	int x{};	// Init to default
	/*Assign 10 to x*/
	x = 10;
	/*Print out*/
	cout << &x << endl;
	/*Modify pointed value*/
	int *ptr = nullptr;
	//cout << *ptr << endl;
	/*Modify again*/
	//*ptr = 10 ;
	//cout << *ptr << endl;
	return 0; 
}