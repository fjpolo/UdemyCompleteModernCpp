#include <iostream>

/**
 * \fn Sort
 * 
 * \brief
 */ 
//using Comparator = bool(*)(int, int);
template<typename T, int size, typename Comparator>
void Sort(T(&arr)[size], Comparator comp) {
	for (int i = 0; i < size-1; ++i) {
		for (int j = 0; j < size - 1; ++j) {
			if (comp(arr[j], arr[j + 1])) {
				T temp = std::move(arr[j]);
				arr[j] = std::move(arr[j + 1]);
				arr[j + 1] = std::move(temp);
			}
		}
	}
}

/**
 * \fn Comp
 * 
 * \brief
 */ 
bool Comp(int x, int y) {
	return x > y;
}

/**
 * \fn
 * 
 * \brief
 */ 
bool Comp1(int x, int y) {
	return x < y;
}

/**
 * \fn operator()
 * 
 * \brief
 */ 
struct Comp2 {
	bool operator()(int x, int y) {
		return x > y;
	}
};

/**
 * \fn ForEach
 * 
 * \brief
 */ 
template<typename T, int size, typename Callback>
void ForEach(T(&arr)[size], Callback operation) {
	for (int i = 0; i < size - 1; ++i) {
		operation(arr[i]);
	}
}

/**
 * \typedef __Unnamed
 * 
 * \brief
 */ 
template<typename T>
struct __Unnamed {
	int offset;
	__Unnamed(int off) :offset(off) {

	}
	void operator()(T &x) {
		x += offset;
		++offset;
	}
};

/**
 * \class Product
 * 
 * \brief
 */ 
class Product {
	std::string name;
	float price;
public:
	Product(const std::string &n, float p) :name(n), price(p) {

	}
	void AssignFinalPrice() {
		float taxes[]{ 12, 5, 5 };
		float basePrice{ price };
		//Capture this
		ForEach(taxes, [basePrice, this](float tax) {
			float taxedPrice = basePrice * tax / 100;
			price += taxedPrice;
		});
	}
	float GetPrice()const {
		return price;
	}
};



/**
 * \fn main
 * 
 * \brief
 */ 
int main() {
	/**
	 * Video 148
	 */
	// // // // Comp(3, 5);
	// // // // Comp2 comp;
	// // // // comp(3, 5);
	// // // // Print unordered array
	// // // int arr[]{1, 6, 8, 4, 0};
	// // // for(auto x : arr){
	// // // 	std::cout << x << " ";
	// // // }
	// // // std::cout << std::endl;
	// // // // Order and print array
	// // // // Sort(arr, [](auto x, auto y){
	// // // // 	return x > y;
	// // // // });
	// // // auto comp = [](auto x, auto y){
	// // // 	return x > y;
	// // // };
	// // // Sort(arr, comp);
	// // // for(auto x : arr){
	// // // 	std:: cout << x << " ";
	// // // }
	// // // std::cout << std::endl;

	// // // New version usinf ForEach
	// // int arr[]{1, 6, 8, 4, 0};
	// // // // print array
	// // // ForEach(arr, [](auto x){std::cout << x << " ";});
	// // // std::cout << std::endl;
	// // // // add offset element-wise
	// // // int offset{5};
	// // // // ForEach(arr, [](auto &x){x += offset});	// Error
	// // // ForEach(arr, [offset](auto &x){
	// // // 	x += offset;
	// // // });
	// // // // print array
	// // // ForEach(arr, [](auto x){std::cout << x << " ";});
	// // // std::cout << std::endl;
	// // // Add offset
	// // int offset{0};
	// // // ForEach(arr, [offset](auto &x){
	// // // 	x += offset;
	// // // 	// offset++;			// Error
	// // // });
	// // ForEach(arr, [offset](auto &x)mutable{
	// // 	x += offset;
	// // 	offset++;
	// // });
	// // // print array
	// // ForEach(arr, [](auto x){std::cout << x << " ";});
	// // std::cout << std::endl;



	/**
	 * Video 149
	 */
	// int arr[]{1, 6, 8, 4, 0};
	// int sum{0};
	// // // // sum
	// // // ForEach(arr, [sum](auto &x)mutable{
	// // // 	sum += x;	// captured by value...
	// // // });
	// // // // print array
	// // // ForEach(arr, [](auto x){std::cout << x << " ";});
	// // // std::cout << std::endl;
	// // // std::cout << "Sum: " << sum << std::endl;
	// // // sum
	// // ForEach(arr, [&sum](auto &x)mutable{
	// // 	sum += x;	// captured by reference!
	// // });
	// // // print array
	// // ForEach(arr, [](auto x){std::cout << x << " ";});
	// // std::cout << std::endl;
	// // std::cout << "Sum: " << sum << std::endl;
	
	// // sum
	// // ForEach(arr, [var](auto &x)mutable{				// capture var by value
	// // ForEach(arr, [&var](auto &x)mutable{				// capture var by reference
	// // ForEach(arr, [this](auto &x)mutable{				// capture this, all member variables
	// // ForEach(arr, [&](auto &x)mutable{				// capture all by reference
	// // ForEach(arr, [=](auto &x)mutable{				// capture all by value
	// // ForEach(arr, [=, &sum](auto &x)mutable{			// capture all by value but sum
	// // ForEach(arr, [&, =offset](auto &x)mutable{		// capture all by reference but offset
	// ForEach(arr, [&sum, &offset](auto &x)mutable{
	// 	sum += x;	// captured by reference!
	// });
	// // print array
	// ForEach(arr, [](auto x){std::cout << x << " ";});
	// std::cout << std::endl;
	// std::cout << "Sum: " << sum << std::endl;


	/**
	 * Video 150
	 */
	Product p{"Watch", 555};
	p.AssignFinalPrice();
	std::cout << "Price" << p.GetPrice() << std::endl;
	//
	atexit([](){	// convert lambda to function pointer, mustnt have capture list
		std::cout << "Exiting program!" << std::endl;
	});

	

	return 0;
}