#include "../Libraries/Integer.h"
#include <iostream>
#include <string>

/**
 * \class Employee
 * 
 * \brief
 */
class Employee{
	private:
		std::string m_Name;
		Integer m_Id;
	public:
		// Employee(std::string &name, const Integer &id)
		// :m_Name{name},
		// m_Id{id}
		// {
		// 	std::cout << "Employee(std::string &name, const Integer &id)" << std::endl;
		// }
		// Employee(std::string &&name, const Integer &&id)
		// :m_Name{name},
		// m_Id{std::move(id)}
		// {
		// 	std::cout << "Employee(std::string &&name, const Integer &&id)" << std::endl;
		// }
		// template <typename T1, typename T2>
		// Employee(T1 &&name, T2 id)
		// :m_Name{name},
		// m_Id{id}
		// {
		// 	std::cout << "Employee(T1 &&name, T2 id)" << std::endl;
		// }
		// ~Employee(){}
		template <typename T1, typename T2>
		Employee(T1 &&name, T2 id)
		:m_Name{std::forward<T1>(name)},
		m_Id{std::forward<T2>(id)}
		{
			std::cout << "Employee(T1 &&name, T2 id)" << std::endl;
		}
		~Employee(){}

};

/**/
template<typename T1, typename T2>
Employee *Create(T1 &&a, T2 &&b){
	return new Employee(std::forward<T1>(a), std::forward<T2>(b));
}
/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * Video 130
	 */
	// // // Employee emp{"Jorgito", 100};	// Move constructor
	// // std::string name = "Umarito";		// Copy constructor
	// // Employee emp{name, 100};
	// std::string name = "Umarito";	
	// int val{500};	
	// Employee emp{name, val};

	/**
	 * Video 131 - std::forward
	 */
	// // std::string name = "Umarito";	
	// int val{500};	
	// // Employee emp{name, val};
	// Employee emp{std::string{"Luigi"}, val};
	auto emp = Create("Umar", Integer{100});

	return 0;
}