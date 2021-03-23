#include "../Integer/Integer.h"

/**
 * \class Number
 */
class Number{
	Integer m_Value{} ;
public:
	Number()=default ;
	Number(int value):m_Value{value}{
	}
	/*
	Number(const Number &n):m_Value{n.m_Value}{
	}
	*/
	/*
	~Number(){
	}
	*/
	/*
	Number(Number &&n):m_Value{std::move(n.m_Value)}
	*/
	/*Copy operations*/
	Number(Number &&n) = default ;
	Number(const Number &n) = default ;
	// Number(const Number &n) = default ;
	/*Sinthesyze default implementation of move assignment*/
	Number & operator=(Number&&)=default ;
	/*Sinthesyze default implementation of copy assignment*/
	Number & operator=(const Number&)=default ;
};

/**
 * \fn CreateNumber
 */
Number CreateNumber(int num){
	Number n{num} ;
	return n ;
}

/**
 * \fn main
 */
int main(){
	/*Watch constructors*/
	// Number n1{1};
	Number n1;
	auto n2{n1} ;
	n2 = n1 ;
	
	/*Watch Assignments*/
	auto n3{CreateNumber(3)} ;
	n3 = CreateNumber(3) ;
	return 0;
}
