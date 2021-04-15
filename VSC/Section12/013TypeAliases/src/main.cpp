/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <list>
#include "../Libraries/Integer.h"

/**
 * typedefs
 */
//typedef std::vector < std::list<std::string>> Names;
//template<typename T>
//using Names = std::vector<std::list<T>>;
using Names = std::vector<std::list<std::string>>;


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
// void ShowError(const char *(*pfn)(int)){
//
//}
//typedef const char *(*PFN)(int);
using PFN = const char *(*)(int);
void ShowError(PFN pfn){	
}

/**
 * \fn 
 * 
 * \brief
 */ 
const char * GetErrorMessage(int errorNo) {
	return "Empty";
}

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 140
     */
    // Names<std::string> names;
	// Names<std::string> nnames;
    Names names;
	Names nnames;
	PFN pfn = GetErrorMessage;
	ShowError(pfn);

    return 0;
}
 
