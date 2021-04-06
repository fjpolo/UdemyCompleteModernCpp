/**
 * Includes
 */
#include <iostream>
#include <cstring>
#include <string>

/**
 * Defines 
 */
#define _CRT_SECURE_NO_WARNINGS //Suppress compiler errors for usage of non-secure C functions

/**
 * \fn Combine
 *
 * \brief
 */
const char* Combine(const char* pFirst, const char* pLast) {
	char* fullname = new char[strlen(pFirst) + strlen(pLast) + 1] ;
	strcpy(fullname, pFirst) ;
	strcat(fullname, pLast) ;
	return fullname ;
}

/**
 * \fn Combine
 *
 * \brief
 */
std::string Combine(const std::string &first, const std::string &last) {
	std::string fullname = first + last ;
	return fullname ;
}


/**
 * \fn  UsingStdString
 *
 * \brief
 */
void UsingStdString() {
	/*Initialize and assign*/
	std::string s = "Hello";
	s = "Hello";
	
	/*Access*/
	s[0] = 'J';
	char ch = s[0];
	std::cout << ch << std::endl;
	std::cout << s << std::endl;
	// std::cin  >> s;
	// std::getline(std::cin, s);

	/*Size*/
	int s_len = s.length();
	std::cout  << "Length: " << s_len << std::endl;

	/*Insert and concatenate*/
	std::string s1{"Hello"}, s2{" World"};
	s = s1 + s2;
	std::cout  << s << std::endl;
	s += s2;
	std::cout  << s << std::endl;
	s.insert( 17," World");
	std::cout  << s << std::endl;

	/*Comparisson*/
	if(s1 != s2){
		std::cout << s1 << " != " << s2 << std::endl;
	}

	/*Removal*/
	s.erase(5, 10);
	std::cout  << s << std::endl;

	/*Search*/
	auto pos = s.find("Hello");
	if(pos != std::string::npos){
		// Found!
	}
	std::cout << "'Hello' at position: " << pos << std::endl;
	std::cout << std::endl << std::endl;
}




/**
 * \fn main
 *
 * \brief
 */
int main() {

	/**
	 * Video 78
	 */
	// char first[10] ;
	// char last[10] ;
	// std::cout << "Name: " << std::endl;
	// std::cin.getline(first, 10) ;
	// std::cout << "Surname: " << std::endl;
	// std::cin.getline(last, 10) ;
	// const char *pFullName = Combine(first, last) ;
	// //Insert into database
	// std::cout << "Full name: " <<pFullName << std::endl ;
	// delete[] pFullName ;

	/**
	 * Video 79
	 */
	UsingStdString();
	
	/**
	 * 
	 */
	std::string first ;
	std::string last ;
	std::cout << "Name: " << std::endl;
	std::getline(std::cin, first) ;
	std::cout << "Surname: " << std::endl;
	std::getline(std::cin, last) ;
	//std::string fullname = first + last ;
	std::string fullname = Combine(first, last) ;
	// printf("%s", fullname.c_str()) ;
	//Insert into database
	std::cout << "Full name: " << fullname << std::endl ;
	std::string first1 = "Umar" ;
	std::string last1("Lone") ;
	std::string name{"Umar Lone"} ;
	/**/
	using namespace std::string_literals ;
	auto n2 = "Umar Lone"s ;	// c++14
	unsigned int value = 100u ;


	return 0 ;
}
