#include <iostream>
int main() {
	using namespace std;
	int arr[] = { 1,2,3,4,5 };
	/*Basic C*/
	for(int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	std::cout << endl;
	/*Loop through elements in array - Don't modify*/
	for(const auto &x : arr) {
		cout << x << " ";
	}
	std::cout << endl;
	/*Loop through elements in array - Modify*/
	// for(auto &x : arr) {
	// 	x = 3;
	// 	cout << x << " ";
	// }
	std::cout << endl;
	/*Loop through items in list*/
	for(auto x : { 1,2,3,4 }) {
		cout << x << " ";
	}
	std::cout << endl;

	/**
	 * What's inside the black box
	 */
	// int* beg_p = &arr[0];
	// int* end_p = &arr[5];	
	int* beg_p = std::begin(arr);
	int* end_p = std::end(arr);
	while(beg_p != end_p){
		std::cout << *beg_p << ' ';
		++beg_p;
	}
	auto range = arr;
	auto begin =  std::begin(arr);
	auto end = std::end(arr);
	for(;begin!=end;++begin){
		auto value = *begin;
	}


	return 0;
}