#include <iostream>
#include <mutex>

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
template<typename T>
class Data{
	public:
		Data(const T &t){
			std::cout << "Data(const T &t)" << std::endl;
		}
};
Data(const char*) -> Data<std::string>;

/**
 * \fn 
 * 
 * \brief 
 */





/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 17 - Class Template Argument Deduction
	 *
	 */

	/*std::pair*/
	std::pair<int, int> p1{2, 6};
	auto p2 = std::make_pair(2, 5);
	std::pair p3{2, 5};
	
	/*std::vector*/
	std::vector v1{1, 2, 3, 4, 5};
	
	/*std::mutex*/
	std::mutex m;

	/*std::lock_guard*/
	std::lock_guard lck{m};

	/*Custom*/
	Data<int> d{5};
	Data d2{7.2f};
	auto d3 = new Data{'c'};
	auto d4 = new Data{"Hello"};


	
	return 0;
}