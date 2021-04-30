#include <iostream>
#include <array>

/**
 * \typedef 
 * 
 * \brief
 */ 


/**
 * \fn 
 * 
 * \brief
 */ 
void Array(){
	std::array<int, 5> arr;
	for(int i=0; i<arr.size(); ++i){
		arr[i] = i;
	} 
	auto itr = arr.begin();
	for(auto x : arr){
		std::cout << x << " ";
	}
	std::cout << std::endl;
	arr.data();

}


/**
 * \class 
 * 
 * \brief
 */ 






/**
 * \fn main
 * 
 * \brief
 */ 
int main() {

	/**
	 * Video 153
	 */
	Array();

	return 0;
}