/**
 * Includes
 */ 
#include <iostream>
#include <string>
#include <limits>
#include <memory>
#include <vector>

/**
 * \class
 * 
 * \brief
 */ 
class Test{
    public:
        Test(){
            std::cout << "Test()" << std::endl;
        }
        ~Test(){
            std::cout << "~Test()" << std::endl;
        }
};

/**
 * \fn ProcessRecords
 * 
 * \brief
 */ 
void ProcessRecords(int count) {
	std::unique_ptr<Test> t(new Test);
	if (count < 10)
		throw std::out_of_range("Count should be greater than 10");

	std::vector<int> p;
	p.reserve(count);
	std::vector<int> records;
	records.reserve(count);
	//Process the records
	for (int i = 0; i < count; ++i) {
		records.push_back(i);
	}
	std::default_random_engine eng;
	std::bernoulli_distribution dist;
	int errors{};
	for (int i = 0; i < count; ++i) {
		try {
			std::cout << "Processing record # : " << i << " ";
			if (!dist(eng)) {
				++errors;
				throw std::runtime_error("Could not process the record");
			}
			std::cout << std::endl;
		}
		catch (std::runtime_error &ex) {
			std::cout << "[ERROR " << ex.what() << "]" << std::endl;
			if (errors > 4) {
				std::runtime_error err("Too many errors. Abandoning operation");
				ex = err;
				throw;
			}
		}
	}
}




/**
 * \fn main
 * 
 * \brief
 */
int main(){
    try {
		//ProcessRecords(std::numeric_limits<int>::max());
		ProcessRecords(10);
	}
	catch (std::runtime_error &ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (std::out_of_range &ex) {
		std::cout << ex.what() << std::endl;
	}
	catch (std::bad_alloc &ex) {
		std::cout << ex.what() << std::endl;

	}

	/*
	std::exception is the base class for all standard
	exception classes. It can be used as a handler if
	the exception handling code is same for all child
	class exception objects
	*/
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	/*
	All-catch handler. Avoid as it does not give any
	information about the exception, so it is difficult
	to take any preventative action
	*/
	catch (...) {
		std::cout << "Exception" << std::endl;
	}



    return 0;
}
 
