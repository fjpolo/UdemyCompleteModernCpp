#include <cmath>
#include <iostream>
#include <string>
#include <cstring>
#include <optional>



/**
 * \struct 
 * 
 * \brief
 */


/**
 * \class 
 * 
 * \brief
 */
 class ContactName{
	private:
	 	std::string first;
	 	std::optional<std::string> middle;
	 	std::string last;
	public:
		ContactName(const std::string &_first, const std::optional<std::string> &_middle, const std::string &_last)
		:first{_first},
		middle{_middle},
		last{_last}
		{}
		void Print(){
			std::cout << first << " ";
			std::cout << middle.value_or("");
			std::cout << " " << last << std::endl; 
		}
 };


/**
 * \fn 
 * 
 * \brief 
 */
// const char* GetErrorString(int errorNo){
// 	switch(errorNo){
// 		case 0:
// 			return "Invalid input";
// 		case 1:
// 			return "Connection not established";
// 		default:
// 			return "";
// 	}
// }

std::optional<const char*> GetErrorString(int errorNo){
	switch(errorNo){
		case 0:
			return "Invalid input";
		case 1:
			return "Connection not established";
		default:
			return std::nullopt;
	}
}




/**
 * \fn main
 * 
 * \brief Optional std::optional: https://github.com/TartanLlama/optional/blob/master/include/tl/optional.hpp
 */
int main() {

	// /**
	//  * @brief Section 18 - Video 215 - std::optional
	//  *
	//  */
	// //  auto message = GetErrorString(1);
	// //  if(strlen(message) != 0){
	// // 	 std::cout << message << std::endl;
	// //  }
	// //  else std::cout << "Unknown error number" << std::endl;

	// /* std::optional */
	// // std::optional<int> value;
	// // std::optional value{5};
	// auto value = std::make_optional(5);
	// if(value.has_value()){
	// 	std::cout << value.value() << std::endl;
	// }
	// if(value){
	// 	std::cout << *value << std::endl;
	// }
	// value = 99;
	// value.reset();

	// /**
	//  * @brief Section 18 - Video 216
	//  * 
	//  */
	//  try{
	// 	/*OK*/
	// 	auto errorMessage = GetErrorString(0);
	// 	if(errorMessage.has_value()){
	// 		std::cout << errorMessage.value() << std::endl;
	// 	}
	// 	else std::cout << "Unknown error number" << std::endl;
		
	// 	/*Unknown error number*/
	// 	errorMessage = GetErrorString(7);
	// 	if(errorMessage.has_value()){
	// 		std::cout << errorMessage.value() << std::endl;
	// 	}
	// 	else std::cout << "Unknown error number" << std::endl;
		
	// 	/*Throws exception std::bad_optional_access if no value*/
	// 	errorMessage = GetErrorString(88);
	// 	std::cout << errorMessage.value() << std::endl;
	// 	// std::cout << errorMessage.value_or("Unknown error number Diggi") << std::endl;

	// 	/*Undefined behaviour*/
	// 	errorMessage = GetErrorString(7);
	// 	if(errorMessage){
	// 		std::cout << *errorMessage << std::endl;
	// 	}
	// 	else std::cout << "Unknown error number" << std::endl;
	//  }catch(std::exception &ex){
	// 	 std::cout << "Exception: " << ex.what() << std::endl;
	//  }

	/**
	 * @brief Section 18 - Video 217
	 * 
	 */
	ContactName n1{"Jorge", std::nullopt, "Lanata"};
	n1.Print();
	ContactName n2{"1", "2", "3"};
	n2.Print();



	return 0;
}