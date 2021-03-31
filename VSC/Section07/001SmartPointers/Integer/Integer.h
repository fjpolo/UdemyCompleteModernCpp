#pragma once
#include <iostream>


/**
 *\class Integer
 */
class Integer {
	int *m_pInt;
public:
	//Default constructor
	Integer();
	//Parameterized constructor
	Integer(int value);
	// explicit Integer(int value);	// Prevent the compiler to use primitive types casting
	//Copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);
	int GetValue()const;
	void SetValue(int value);
	~Integer();
	// ++
	Integer & operator ++();					// Pre-Increment operator
	Integer operator ++(int);					// Post-Increment operator
	// --
	Integer & operator --();					// Pre-Decrement operator
	Integer operator --(int);					// Post-Decrement operator
	// == 
	bool operator ==(const Integer &a)const;

	// = 
	Integer & operator =(const Integer &a);		//Copy assignment
	Integer & operator =(Integer &&a);			//Move assignment
	// +
	Integer operator +(const Integer & a)const;	//Copy assignment
	// ()
	void operator ()();
	operator int();
	// explicit operator int();	/// Disable explicit ocnversion

	// friends
	// friend std::ostream & operator <<(std::ostream & out, const Integer &a);
	// friend std::istream & operator >> (std::istream &input, Integer &a);
	// friend class Printer;	// Don't use: buggy acces to all attributes
};
Integer operator +(int x, const Integer &y);
std::ostream & operator <<(std::ostream & out, const Integer &a);
std::istream & operator >> (std::istream &input, Integer &a);


/**
 * Rule of 5:
 * 	- Copy constructor
 * 	- Destructor
 * 	- Assignment operator
 *  - Move constructor
 *  - Move assignment
 * 
*/