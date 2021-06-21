#include <chrono>
#include <exception>
#include <iostream>

/**
 * \brief region constexpr lambda
 * 
 */
#pragma region constexpr lambda
#include <sstream>
//////////// constexpr lambda
template<typename T, int size, typename Callback>
void ForEach(T(&arr)[size], Callback operation) {
	for (int i = 0; i < size - 1; ++i) {
		operation(arr[i]);
	}
}

/**
 * \class 
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
	auto GetDescription() {
		return [*this](const std::string& header) {
			std::ostringstream ost;
			ost << header << std::endl;
			ost << "Name : " << name << std::endl;
			ost << "Price : " << price << std::endl;
			return ost.str();
		};
		
	}
};
void UsingLambda() {
	//Product *p = new Product { "Watch", 500 };
	////p.AssignFinalPrice();
	////std::cout << p.GetPrice() << std::endl;
	//auto desc = p->GetDescription() ;
	//delete p ;
	//std::cout << desc("##############") << std::endl;

	auto f = [](int x,int y) {
		return x + y ;
	};
	 auto sum = f(3,5) ;
	printf("%d", sum) ;
}
#pragma endregion

/**/
auto f = [](int x, int y){
	return x+y;
}
constexpr auto sum = f(3,5 );

/**
 * \class 
 * 
 * \brief
 */


/**
 * \fn 
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
	 * @brief Sectioin 16 - constexprlambda
	 *
	 */
	 Product p{"Watch", 500};
	 p.AssignFinalPrice();
	 std::cout << p.GetPrice() << std::endl;
	 auto desc = p.GetDescription();
	 std::cout << desc("######################") << std::endl;


	return 0;
}