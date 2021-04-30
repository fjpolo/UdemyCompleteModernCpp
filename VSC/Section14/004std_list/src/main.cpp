#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

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
	std::cout << std::endl;
	//
	col1.insert(col1.begin(), 666);		// shifts all other elements
	// col1.erase(col1.end());				// Error?
	col1.pop_back();
	col1.erase(col1.end()-2);

}

/**
 * \fn 
 * 
 * \brief
 */ 
void Deque(){
	std::deque<int> col1{1, 2, 3, 4};
	for(int i=0; i<5; ++i){
		col1.push_back(i * 10);
	}
	for(int i=0; i<5; ++i){
		col1.push_front(i * 10);
	}
	col1[0] = 100;
	auto itr = col1.begin();
	while( itr != col1.end()){
		std::cout << *itr++ << " ";
	}
	std::cout << std::endl;
	col1.insert(col1.begin(), 666);		// shifts all other elements
	col1.pop_back();
	col1.pop_front();
	col1.erase(col1.end()-2);

}

/**
 * \fn List
 * 
 * \brief
 */ 
void List(){
	std::list<int> col1;
	for(int i=0; i<5; ++i){
		col1.push_back(i * 10);
	}
	auto itr = col1.begin();
	while( itr != col1.end()){
		std::cout << *itr++ << " ";
	}
	//
	col1.insert(itr, 800);
	col1.erase(itr);
}

/**
 * \fn ForwardList
 * 
 * \brief
 */ 
void ForwardList(){
	std::forward_list<int> col1;
	for(int i=0; i<5; ++i){
		col1.push_front(i * 20);
	}
	for(auto x : col1){
		std::cout << x << " ";
	}
	//
	col1.insert_after(col1.begin(), 11);	// Insert after first element
	col1.erase_after(col1.begin());			// Erase 2nd element

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
	 * Video 157
	 */
	List();
	ForwardList();

	return 0;
}