#include <iostream>

//Returns r-value
int Add(int x, int y) {
	return x + y;
}
//Return l-value
int & Transform(int &x) {
	x *= x;
	return x;
}
void Print(int &x) {
	std::cout << "Print(int&)" << std::endl; 
}
void Print(const int &x) {
	std::cout << "Print(const int&)" << std::endl;
}
void Print(int &&x) {
	std::cout << "Print(int &&)" << std::endl;
}


/**
 * 
 * main()
 * 
 */
int main() {
	//x is lvalue
	int x = 10;
	
	//ref is l-value reference
	int &ref = x ;
	//Transform returns an l-value
	int &ref2 = Transform(x) ;
	//Binds to function that accepts l-value reference
	Print(x);
	// Modify

	//rv is r-value reference
	int &&rv = 8 ;

	//
	int &&r1 = 10;
	int &&r2 = Add(3, 2);
	int aux{3};
	// int &&3r = aux;	// forbidden
	
	//Add returns a temporary (r-value)
	int &&rv2 = Add(3,5) ;
	//
	Print(aux);
	//Binds to function that accepts a temporary, i.e. r-value reference
	Print(3);
	return 0;
}

