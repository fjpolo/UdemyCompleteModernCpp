#include <chrono>
#include <exception>
#include <iostream>



/**
 * \class 
 * 
 * \brief
 */


/**
 * \fn 
 * 
 * \brief 
 */
void AllocMem(){
	// int *p = (int*)malloc(sizeof(int));
	// if(p != nullptr){
	// 	*p  =50;
	// 	free(p);
	// }

	if(int *p = (int*)malloc(sizeof(int)); p != nullptr){
		*p  =50;
		free(p);
	}

}

/**
 * \fn WriteToStr 
 * 
 * \brief 
 */
void WriteToStr(std::string data){
	// std::ostream out{"file.txt"};
	// if(out){
	// 	if(!data.empty()){
	// 		std::cout << data;
	// 	}
	// 	else{
	// 		std::cout << "No data!";
	// 	}
	// }
	if(std::ostream out{"file.txt"};!data.empty()){
		std::cout << data << std::endl;
	}
	else{
		std::cout << "No data!" << std::endl;
	}
}

/**
 * \fn UsingSwitch 
 * 
 * \brief 
 */
 void UsingSwitch(int errorCode){
	 switch(std::ofstream out{(}"file.txt"};errorCode){
		 case 0:
		 {
			 std::cout << "ERR: Invalid parameter" << std::endl;
			 break;
		 }
		 case 1:
		 {
			 std::cout << "ERR: Could not read from file" << std::endl;
			 break;
		 }
		 default:
		 {
			 break;
		 }

	 }
 }





/**
 * \fn main
 * 
 * \brief
 */
int main() {

	/**
	 * @brief Sectioin 17 - If & Switch with Initialization
	 *
	 */
	 AllocMem();
	 std::string datita{"Mydata"};
	 WriteToStr(datita);
	


	return 0;
}