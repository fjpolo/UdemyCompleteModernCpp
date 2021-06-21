#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <functional>

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
 * \fn 
 * 
 * \brief
 */ 
void Set(){
	// std::set<int> s{9, 2, 0, 9, 5};	// Will be sorted
	std::set<int, std::greater<int>> s{9, 2, 0, 9, 5};	// Will be sorted
	s.insert(1);
	s.insert(3);
	s.insert(3);
	s.insert(3);
	s.insert(3);
	// Cannot modify elements, are const
	auto itr = s.begin();
	// Print in sorted order
	while( itr != s.end()){
		std::cout << *itr++ << " ";
	}
	std::cout << std::endl;
	//
	s.erase(0); // Erase based in value
	s.erase(s.begin()); // Erase first element
	itr = s.find(9);
	if(itr != s.end()){
		std::cout << "Element found!" << std::endl;
	}
	else{
		std::cout << "Element Not found!" << std::endl;
	}
	auto found = s.equal_range(3);
	while(found.first != found.second){
		std::cout << *found.first++ << " ";
	}
	std::cout << std::endl;


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
	 * Video 159
	 */
	Set();

	return 0;
}