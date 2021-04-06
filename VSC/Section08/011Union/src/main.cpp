/**
* Includes
*/
#include <iostream>
#include <string>

/**
* \typedef union Test
*
* \brief
*/
union Test {
	int x ;
	char ch ;
	double d ;
	Test(): ch{'a'} {
		std::cout << "union Test()" << std::endl; 
	}
	~Test() {
		std::cout << "union ~Test()" << std::endl; 
	}
};

/**
* \typedef struct A
*
* \brief
*/
struct A {
	A() {
		std::cout << "struct A()" << std::endl;
	}
	~A() {
		std::cout << "struct ~A()" << std::endl;
	}

	A(const A& other) {
		std::cout << "struct A(const A& other)" << std::endl;
	}

	A(A&& other) noexcept{
		std::cout << "struct A(A&& other)" << std::endl;
	}

	A& operator=(const A& other) {
		std::cout << "struct A& operator=(const A& other)" << std::endl;
		if (this == &other)
			return *this;
		return *this;
	}

	A& operator=(A&& other) noexcept {
		std::cout << "struct A& operator=(A&& other)" << std::endl;
		if (this == &other)
			return *this;
		return *this;
	}
};
/**
* \type struct B
*
* \brief
*/
struct B {

	B() {
		std::cout << "struct B()" << std::endl;

	}
	~B() {
		std::cout << "struct ~B()" << std::endl;

	}

	B(const B& other) {
		std::cout << "struct B(const B& other)" << std::endl ;
	}

	B(B&& other) noexcept {
		std::cout << "struct B(B&& other)" << std::endl ;
	}

	B& operator=(const B& other) {
		std::cout << "struct B& operator=(const B& other)" << std::endl ;
		if (this == &other)
			return *this;
		return *this;
	}

	B& operator=(B&& other) noexcept {
		std::cout << "struct B& operator=(B&& other)" << std::endl ;
		if (this == &other)
			return *this;
		return *this;
	}
	virtual void Foo(){}
	
};

/**
* \typedef union UDT
*
* \brief
*/
union UDT {
	A a ;
	B b ;
	std::string s ;
	UDT() {
		
	}
	~UDT() {
		
	}
};

/**
* \fn main
*
* \brief
*/
int main() {
	// Test t;
	// std::cout << t.ch << std::endl;	
	// t.x = 1000;
	// std::cout << t.ch << std::endl;	// Undefined



	using namespace std::string_literals ;
	UDT udt ;
	//new(&udt.s) std::string{"Hello world"} ;

	new (&udt.a) A{} ;
	udt.a.~A() ;
	

	return 0;
}

/**
 * Unions in C++
 * 
 * 	- Gives the ability to represent all the members in the same memory spave
 * 	- Saves space
 * 	- Disadvantages
 * 		- no way to know which type it holds
 * 		- nested types with non-default constructors delete the default constructor of the union
 * 		- cannot assign objects of user.defined types directly to a union member
 * 		- user-defined types are not destroyed implicitly
 * 		- cannot have a base class
 * 		- cannot derive from a union 
 */