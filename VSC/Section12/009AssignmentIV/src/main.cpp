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
	*  Create a factory that creates an instance of some type T, 
	* initializes it with arguments and returns it.
	* 
	* Here are some usage examples of the factory.
	*/
	int *p1 = CreateObject<int>(5) ;
 
	std::string *s = CreateObject<std::string>() ;//Default construction
	
	Employee * emp = CreateObject<Employee>(
	"Bob",    //Name
	101,      //Id
	1000) ;   //Salary
	
	Contact *p = CreateObject<Contact>(
	"Joey",                //Name
	987654321,             //Phone number
	"Boulevard Road, Sgr", //Address
	"joey@poash.com") ;    //Email

	return 0;
}