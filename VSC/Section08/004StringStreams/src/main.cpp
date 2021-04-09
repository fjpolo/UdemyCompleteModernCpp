#include <iostream>
#include <sstream>

/**
* \fn main
*/

int main() {
	std::cout << "Writing" << std::endl;
	int a{5};
	int b{6};
	int sum = a + b;
	// std::cout << a << " + " << b << " = " << sum << std::endl;
	/*Output for textbox*/
	// std::string output = "Sum of " + a + " & " + b + "is " + sum; // Won't work
	/*Using string streams*/
	std::stringstream ss;
	// std::istringstream is;
	// std::ostringstream os;
	ss <<  a << " + " << b << " = " << sum << std::endl;
	std::string s = ss.str();
	std::cout << s << std::endl;
	/*Clear and print sum*/
	ss.str("");
	ss << sum;
	auto ssum = ss.str();
	std::cout << ssum << std::endl;
	/*C++11*/
	ss.str("");
	auto ssum2 = std::to_string(sum);
	std::cout << ssum2 << std::endl;

	/*Parsing*/
	std::cout << "Parsing" << std::endl;
	std::string data = "5 7 98";
	int numy;
	std::stringstream ss2;
	ss2.str(data);
	// while(!ss2.fail()){
	// 	ss2 >> numy;
	// 	std::cout << numy << std::endl;
	// }
	while( ss2 >> numy ){
		std::cout << numy << std::endl;
	}
	int x = std::stoi("666");
	
	return 0;
}