#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

/**
 * \class Employee
 * 
 * \brief
 */
class Employee {
	std::string m_Name;
	int m_Id;
	std::string m_ProgLang;
public:
	Employee(const std::string &n, int id, const std::string &pl) :
		m_Name(n), 
		m_Id(id),
		m_ProgLang(pl){

	}
	const std::string & GetName()const {
		return m_Name;
	}
	int GetId()const {
		return m_Id;
	}
	const std::string & GetProgrammingLanguage()const {
		return m_ProgLang;
	}
	bool operator <(const Employee &e)const {
		return m_Id < e.m_Id;
	}
};

/**
 * \fn EmpCompare
 * 
 * \brief
 */
//Custom comparator for associative containers
struct EmpCompare {
	bool operator ()(const Employee &e1, const Employee &e2)const {
		return e1.GetId() < e2.GetId();
	}
};
/**
 * \fn Set
 * 
 * \brief
 */
void Set(){
	std::set<Employee, EmpCompare> v{
		Employee{"Umar", 101, "C++"},
		Employee{"Bobby", 200, "Pascal"},
		Employee{"Anna", 300, "Q#"}
	};
	for(const auto &e : v){
		std::cout 
		<< "ID: " << e.GetId() 
		<< " | Name: " << e.GetName() 
		<< " | Language: " << e.GetProgrammingLanguage()  
		<< std::endl;
	}
}

/**
 * \fn EmpIds
 * 
 * \brief
 */
struct EmpIds {
	std::vector<int> m_Ids;
	void operator()(const Employee &emp) {
		if (emp.GetProgrammingLanguage() == "C++")
			m_Ids.push_back(emp.GetId());
	}
};

/**
 * \fn UserDefined
 * 
 * \brief
 */
void UserDefined(){
	std::vector<Employee> v{
		Employee{"Umar", 101, "C++"},
		Employee{"Bobby", 200, "Go"},
		Employee{"Anna", 120, "Q#"},
		Employee{"Diana", 340, "C++"},
		Employee{"Rogelio de la Vega", 322, "C++"}

	};
	std::sort(v.begin(), v.end(), [](const auto &e1, const auto &e2){return e1.GetName() < e2.GetName();});
	for(const auto &e : v){
		std::cout 
		<< "ID: " << e.GetId() 
		<< " | Name: " << e.GetName() 
		<< " | Language: " << e.GetProgrammingLanguage()  
		<< std::endl;
	}

	/*Count C++*/
	int cppCount{};
	/*Using for*/
	// // for(const auto &e : v){
	// // 	if(e.GetProgrammingLanguage() == "C++"){
	// // 		++cppCount;
	// // 	}
	// // }
	/*Using count*/
	// cppCount = std::count(v.begin(), v.end(), Employee{"", 0, "C++"});
	/*Using count and callback*/
	cppCount = std::count_if(v.begin(), v.end(), [](const auto &e){return e.GetProgrammingLanguage() == "C++";});
	std::cout << "C++ Count: " << cppCount << std::endl;
	
	/*Find sometin*/
	auto itr = std::find_if(v.begin(), v.end(), [](const auto &e){
		return e.GetProgrammingLanguage() == "Go";
	});
	if(itr != v.end()){
		std::cout << itr->GetName() << " is a Gopher!!!" << std::endl;
	}

	/*For each - Generic for algo*/
	std::for_each(v.begin(), v.end(), [](const auto &e){
		std::cout << e.GetName() << std::endl;
	});
	auto foundIds = std::for_each(v.begin(), v.end(), EmpIds());
	std::cout << std::endl << "No C++" << std::endl;
	for(int id : foundIds.m_Ids){
		std::cout << "Id: " << id << std::endl;
	}
}




/**
 * \fn main
 * 
 * \brief
 */
int main() {
	/**
	 * Video 167 - STL Algorithms
	 */
	// UserDefined();
	// Set();

	/**
	 * Video 168
	 */
	UserDefined();


	return 0;
}