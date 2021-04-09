/**
 * Includes
 */
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

/**
 * Defines 
 */
#define _CRT_SECURE_NO_WARNINGS //Suppress compiler errors for usage of non-secure C functions

/**
 * Types
 */
enum class Case{
	SENSITIVE, 
	INSENSITIVE
};

/**
 * \fn  ToUpper
 *
 * \brief takes a string an returns one in upper case.-
 */
std::string ToUpper(const std::string &str){
	std::string auxStr(str); 
	for(auto &ch : auxStr){
		// std::cout << ch << std::endl;
		ch = std::toupper(ch);
		// std::cout << ch << std::endl;
	}
	return auxStr;
}

/**
 * \fn  ToLower
 *
 * \brief takes a string an returns one in lower case.-
 */
std::string ToLower(const std::string &str){
	std::string auxStr(str); 
	for(auto &ch : auxStr){
		// std::cout << ch << std::endl;
		ch = std::tolower(ch);
		// std::cout << ch << std::endl;
	}
	return auxStr;
}

/**
 * \fn  Find
 *
 * \brief 	 Return position of the first character of the substring, 
 * 			else std::string::npos
 */
size_t Find(
 const std::string &source,         	//Source string to be searched
 const std::string &search_string,  	//The string to search for
 Case searchCase = Case::INSENSITIVE,	//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                	//Start the search from this offset
	/**
	 *  Note that, we don't have direct write access to the raw string inside 
	 * std::string.
	 */

	/*Switch searchCase*/
	switch(searchCase){
		case Case::SENSITIVE:
		{
			std::size_t found = source.find(search_string, offset);
			if (found!=std::string::npos){
				// std::cout << search_string << " found at: " << found << '\n';
				return found;
			}
			break;
		}
		case Case::INSENSITIVE:
		{
			std::string str1 = ToLower(source);
			std::string str2 = ToLower(search_string);
			std::size_t found = str1.find(str2, offset);
			if (found!=std::string::npos){
				// std::cout << search_string << " found at: " << found << '\n';
				return found;
			}
			break;
		}
		default:
		{
			return  std::string::npos;
			break;
		}
	}
	return  std::string::npos;
}

/**
 * \fn main
 *
 * \brief 	 Return indices of found strings,
 * 		 	else an empty vector
 */
std::vector<int> FindAll(
	const std::string &target,         		//Target string to be searched
	std::string search_string,         		//The string to search for
	Case searchCase = Case::INSENSITIVE,	//Choose case sensitive/insensitive search
	size_t offset = 0						//Start the search from this offset
){                

	/*Vector holding positions*/
	std::vector<int> positions{};
	size_t aux_offset = offset;

	/*Switch searchCase*/
	switch(searchCase){
		case Case::SENSITIVE:
		{
			std::size_t found = target.find(search_string, aux_offset);
			while(found!=std::string::npos){
				positions.push_back(static_cast<int>(found));
				aux_offset = found+1;
				found = target.find(search_string, aux_offset);
			}
			return positions;
			break;
		}
		case Case::INSENSITIVE:
		{
			std::string str1 = ToLower(target);
			std::string str2 = ToLower(search_string);
			std::size_t found = str1.find(str2, aux_offset);
			while(found!=std::string::npos){
				positions.push_back(static_cast<int>(found));
				aux_offset = found+1;
				found = str1.find(str2, aux_offset);
			}
			return positions;
			break;
		}
		default:
		{
			return positions;
			break;
		}
	}
	return positions;
}


/**
 * \fn main
 *
 * \brief
 */
int main() {
	/**
	 *  Add one more function called FindAll, that returns the starting indices of 
	 * all the found substrings in a target string. Return the indices in a vector. 
	 * Support case sensitive/insensitive search.
	 *
	 */
	std::string str1("Hola amigo que tal amigo como estas amigo, eh amigo te sobra una moneda amigo?");
	std::string str2("como");
	std::string str3("HOLA");
	std::string str4("Amigo");
	std::string str5("amigo");
	auto found = Find(str1, str2, Case::INSENSITIVE, 0);
	std::cout << "Original string: " << str1 << std::endl;
	std::cout << str2 << " found at position " << found << std::endl;
	found = Find(str1, str3, Case::INSENSITIVE, 0);
	std::cout << str3 << " found at position " << found << std::endl;
	found = Find(str1, str4, Case::SENSITIVE, 0);
	std::cout << str4 << " found at position " << found << std::endl;
	auto found_all = FindAll(str1, str5, Case::SENSITIVE, 0);
	for(auto _ : found_all){
		std::cout << str5 << " found at positions " << _ << std::endl;
	}


	return 0 ;
}
