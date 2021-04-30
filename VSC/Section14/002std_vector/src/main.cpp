#include <iostream>
#include <array>
#include <vector>

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
 * \fn 
 * 
 * \brief
 */ 
void Vector(){
	std::vector<int> col1{1, 2, 3, 4};
	for(int i=0; i<5; ++i){
		col1.push_back(i * 10);
		std::cout << "col1 size: " << col1.size() << std::endl;
	}
	col1[0] = 100;
	// for(int i=0; i<col1.size(); ++i){
	// 	std::cout << col1[i] << " ";
	// }
	// std::cout << << std::endl;
	auto itr = col1.begin();
	while( itr != col1.end()){
		std::cout << *itr++ << " ";
	}
	std::cout << << std::endl;
	//
	col1.inster(col1.begin(), 666);		// shifts all other elements
	// col1.erase(col1.end());				// Error?
	col1.pop_back();
	col1.erase(col1.end(col1.end()-2));

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
	 * Video 154
	 */
	Vector();

	return 0;
}