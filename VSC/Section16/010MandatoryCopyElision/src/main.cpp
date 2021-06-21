#include <iostream>

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
class Number{
	public:
	Number(int value){
		std::cout << "Parametrized constructor" << std::endl;
	}
	Number(const Number &){
		std::cout << "Copy constructor" << std::endl;
	}
	Number(Number &&){
		std::cout << "Move constructor" << std::endl;
	}
	~Number(){
		std::cout << "Destructor" << std::endl;
	}
};

/**
 * \fn 
 * 
 * \brief 
 */
 void Foo(Number n){}
 Number Create(){
	//  Number n{0};
	//  return n;
	 return Number{0};
 }




/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 16 - Mandatory Copy Elisison
	 *
	 */
	 Number n1 = Number{3};		//|
	 Foo(Number{3});			//| /*Temporaries elided*/
	 auto n2 = Create();		//|
	 

	return 0;
}