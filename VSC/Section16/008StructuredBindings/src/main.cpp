#include <chrono>
#include <exception>
#include <iostream>
#include <map>

/**
 * \struct 
 * 
 * \brief
 */
 struct Person{
	 std::string m_Name;
	 int m_Age;
	 Person() = default;
	 Person(const std::string &name, int age):m_Name(name), m_Age(age){}
 };

 /**
 * \struct 
 * 
 * \brief
 */
 struct S1{
	 int intArr[8];
	 char charArr[256];
 };


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
	 * @brief Sectioin 16 - Structured Binding
	 *
	 */
	 Person p("Sabina", 1000);
	//  auto name = p.m_Name;
	//  auto age = p.m_Age;

	/*Copy*/
	// auto [name, age] = p;
	// std::cout << "Name: " << name << std::endl;
	// std::cout << "Age: " << age << std::endl;
	
	/*Reference*/
	auto &[name, age] = p;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	name = "Jorge";
	age = 90;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;

	/*std::pair*/
	std::pair<int, int> pair1{3,5 };
	auto [key, value] = p;
	
	/*std::map*/
	std::map<int, std::string> errorInfo{{1, "Not available"}, {2, "Not in use"}};
	for(auto err : errorInfo){
		std::cout << err.first << ":" << err.second << std::endl;
	}
	for(auto [key, value] : errorInfo){
		std::cout << key << ":" << value << std::endl;
	}

	/*array*/
	int arr[] = {1, 2, 3, 4, 5};
	auto [a, b, c, d, e] = arr;
	auto arr2 = arr;	// Decays to pointer


	/*Struct*/
	S1 s;
	auto [s1, s2] = s;

	return 0;
}