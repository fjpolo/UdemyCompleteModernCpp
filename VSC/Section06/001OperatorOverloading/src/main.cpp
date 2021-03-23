#include "../Integer/Integer.h"
#include <iostream>
#include <memory>

/**
 * \fn operator+
 */
// Integer operator+(const Integer &a, const Integer &b){
// 	Integer temp;
// 	temp.SetValue(a.GetValue() + b.GetValue());
// 	return temp;
// }
// Integer operator+(int a, const Integer &b){
// 	Integer temp;
// 	temp.SetValue(x + b.GetValue());
// 	return temp;
// }

/**
 * \fn operator <<
 */
// std::ostream & operator <<(std::ostream & out, const Integer &a){
// 	out << a.GetValue();
//	*a.m_pInt = x;	//  use 'friend'
// 	return out;
// }

/**
 * \fn operator >>
 */
// std::istream & operator >> (std::istream &input, Integer &a) {
// 	int x;
// 	input >> x;
// 	a.SetValue(x);
// 	return input;
// }

/**
 * class IntPtr
 */
class IntPtr {
	Integer *m_p;
public:
	IntPtr(Integer *p) :m_p(p) {
	}
	~IntPtr() {
		delete m_p;
	}
	Integer *operator ->() {
		return m_p;
	}
	Integer & operator *() {
		return *m_p;
	}
};

/**
 * \fn CreateInteger
 */
// v1 using Integer object
// void CreateInteger(){
// 	Integer *p = new Integer;
// 	p->SetValue(5);
// 	std::cout << p->GetValue() << std::endl;
// 	delete p;
// }
// v2 automatically release memory
// void CreateInteger(){
// 	InitPtr p = new Integer;
// 	// p->SetValue(5);
// 	// std::cout << p->GetValue() << std::endl;
// }
// v3 -> operator
// void CreateInteger(){
// 	InitPtr p = new Integer;
// 	p->SetValue(5);
// 	// std::cout << p->GetValue() << std::endl;
// }
// v4 smart pointer
// void CreateInteger(){
// 	InitPtr p = new Integer;	// Smart pointer!! Automatically frees memory.
// 	(*p).SetValue(5);
// 	// std::cout << p->GetValue() << std::endl;
// }
// v5 true smart pointer
// void CreateInteger() {
// 	std::unique_ptr<Integer> p(new Integer);
// 	//auto p2(p);	// Not allowed
// 	(*p).SetValue(3);
// 	//std::cout << p->GetValue() << std::endl; 
// }
// v6 shared pointers
void CreateInteger() {
	// std::unique_ptr<Integer> p(new Integer);
	//auto p2(p);	// Not allowed
	// (*p).SetValue(3);
	// Process(p);				// Not compile, passing unique pointer by value (copy)
	std::shared_ptr<Integer> p(new Integer);
	(*p).SetValue(3);
	// Process(std::move(p));		// Transfer ownership.
	//std::cout << p->GetValue() << std::endl; 
}

/**
 * \fn Process
 */
// void Process(Integer val) {
// }
void Process(std::unique_ptr<Integer> ptr) {
	std::cout << "Process() " << std::endl << ptr->GetValue() << std::endl;
}

/**
 * \fn Print
 */
// void Print(Integer a){

// }
// void Print(const Integer &a){

// }

/**
 * 
 * \fn main
 * 
 */
int main() {
	/**
	 * Video 59
	 */
	std::cout << std::endl << std::endl<< "Video 59: " << std::endl; 
	/*Plus +*/
	Integer a(1), b(3);
	Integer sum = a + b;	// Overloaded operator
	std::cout << a.GetValue() << " + " << b.GetValue() << " = " << sum.GetValue() << std::endl;
	/*Increment ++*/
	std::cout << "Pre-Increment value:" << std::endl;
	++sum;	// More efficient
	std::cout << sum.GetValue() << std::endl;
	std::cout << "Post-Increment value:" << std::endl;
	sum++;
	std::cout << sum.GetValue() << std::endl;
	/*Decrement --*/
	std::cout << "Pre-Decrement value:" << std::endl;
	--sum;	// More efficient
	std::cout << sum.GetValue() << std::endl;
	std::cout << "Post-Decrement value:" << std::endl;
	sum--;
	std::cout << sum.GetValue() << std::endl;
	/*Equal ==*/
	if(a == b){
		std::cout << a.GetValue() << " == " << b.GetValue() << std::endl;
	}
	else{
		std::cout << a.GetValue() << " != " << b.GetValue() << std::endl;
	}

	/**
	 * Video 60
	 */
	std::cout << std::endl << std::endl<< "Video 60: " << std::endl;
	Integer c;
	// a = a;
	c = a;
	std::cout << std::endl << c.GetValue() << std::endl << std::endl;


	/**
	 * Video 61
	 */
	std::cout << std::endl << std::endl<< "Video 61: " << std::endl; 
	Integer d(1), e(3);
	Integer sum1 = d + e;
	// Integer sum1 = d + 5;	// a.operator + (5)
	// Integer sum2 = 5 + e;	// Overload as global function
	// std::cout << a.GetValue() << " + 5 = "<< sum1.GetValue() << std::endl;
	// std::cout  << "5 + "<< a.GetValue() << " = " << sum2.GetValue() << std::endl;
	// <<
	std::cout << sum1 << std::endl;	// Overload as globaal function
	// operator <<(std::cout, sum2).operator<<(std::endl);
	// >>
	std::cin >> a;
	std::cout << a << std::endl;
	// ()
	a();

	/**
	 * Video 62
	 */
	// See Integer.h 'friend'

	/**
	 * Video 63..64
	 */
	std::cout << std::endl << std::endl<< "Video 63..64: " << std::endl;
	CreateInteger();

	/**
	 * Video 65
	 * 
	 * Rules:
	 * 	- Associativity, precedence & arity (operand count) do not change
	 *  - Operator functions should be non-static
	 * 		+ except for new & delete
	 *  - One argument should be user defined type
	 *  - Global overload if first oüerand is primitive type
	 *  - Not all operators can be overloaded
	 * 		+ . ?: .* sizeof
	 *  - Cannot define new operators
	 *  - Overloaded for conventional behavior only
	 */

	/**
	 * Video 666..68 Type conversions
	 */
	std::cout << std::endl << std::endl<< "Video 66..68: " << std::endl;
	
	/*Primitive to primitive casting*/
	
	/*static_cast*/
	int xa{5}, xb{2};
	// float f = xa;
	// float f = xa/xb;
	// float f = (float)(xa)/xb;	// C-Type
	float f = static_cast<float>(xa)/xb;	// Check if valid cast
	std::cout << f << std::endl;
	/*reinterpret_cast*/
	// char* p = a;							// Not allowed
	// char* p = (char*)a;					// C-stylediscards qualifiers
	// char* p = static_casat<char*>a;		// NOt allowed
	
	char* p = reinterpret_cast<char*>(xa);
	/*reinterpret_cast*/
	const int x = 3;						
	// int* x_p = (int*)&x;					// Buggy
	// int* x_p = reinterpret_cast<int*>(&x);	// Not work
	int* x_p = const_cast<int*>(&xa);
	
	/*Primitive to user defined casting*/

	/*Init*/
	Integer integ1{1};
	Integer integ2 = 5;
	// Integer integ2 = "123";	// Invoke parametrized constructor
	// Print(5);
	/*Assignment*/
	integ1 = 7;

	/*User define to primitive casting*/

	/*Init*/
	// intx = static_cast<int>(integ1);	
	int xs = integ1;	// type conversion operator function
	
	/*Return*/
	std::cout << std::endl << "End!!" << std::endl;
	return 0;
}