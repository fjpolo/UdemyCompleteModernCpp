/**
* Includes
*/
#include <iostream>
#include <vector>

/**
* \fn main
*
* \brief
*/
int main() {
	/**
	 * Manual memory management
	 */
	/*Store list of numbers in an array*/
	int arr[10];
	/*Make it dynamic*/
	int *ptr = new int[10];
	for (int i = 0; i < 10; ++i) {
		ptr[i] = i * 10;
	}
	/*Growing the array is a pain in the arse*/
	delete ptr;



	/**
	 * Use vector!
	 */
	
	/*New int vector*/
	std::vector<int> data{ 1,2,3 };	// <int> specifies the type integer
	/*Grow vector*/
	for (int i = 0; i < 5; ++i) {
		data.push_back(i * 10);
	}
	
	/*Access element*/
	data[0] = 100;
	/*Old school access using for loop*/
	// for(int i=0; i<data.size();++i){
	// 	std::cout << data[i] << " ";
	// }
	/*Access all elements using range-based for loop*/
	for (auto x : data) {
		std::cout << x << " ";
	}
	
	/*Use iterators manually with pointers*/
	auto it = data.begin();
	//std::cout << *it;	// Read and write access
	/*Increase iterator*/
	++it;
	/*Decrease iterator*/
	--it;
	/*Manually change pointed position*/
	it = it + 5;

	/*Delete*/
	it = data.begin();
	/*Erase*/
	data.erase(it);
	std::cout << std::endl;
	/*Range-based for loop*/
	for (auto x : data) {
		std::cout << x << " ";
	}
	
	/*Insert*/
	// it = data.begin();
	it = data.begin() + 5;	// Begin location + 5 locations
	/*Insert*/
	data.insert(it, 500);	// use iterator as position
	std::cout << std::endl;
	/*Range-based for loop*/
	for (auto x : data) {
		std::cout << x << " ";
	}


	return 0;
}