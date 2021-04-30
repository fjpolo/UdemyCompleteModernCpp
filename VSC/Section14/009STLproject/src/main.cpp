#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>

enum class GroupType{
			Friends,
			Family,
			Coworker, 
			Aquaintance
		};	

/**
 * \class Agenda
 * 
 * \brief
 */
class Agenda{
	private:	
		std::string name;
		std::string surname;
		int primaryPhoneNumber;
		int secondaryPhoneNumber;
		std::string emailAddress;
		std::string address;
		std::string company;
		GroupType group;	
	public:
		Agenda(
			std::string _name, 
			std::string _surname, 
			int _primaryPhoneNumber, 
			int _secondaryPhoneNumber, 
			std::string _emailAddress, 
			std::string _address,
			std::string _company,
			GroupType _group
			)
			:name(_name), 
			surname(_surname), 
			primaryPhoneNumber(_primaryPhoneNumber), 
			secondaryPhoneNumber(_secondaryPhoneNumber),  
			emailAddress(_emailAddress),
			address(_address),
			company(_company),
			group(_group)
			{}
		~Agenda(){}
	const std::string & GetName()const {
		return name;
	}
	const std::string & GetSurname()const {
		return surname;
	}
	const int & GetPrimaryPhoneNumber() const{
		return primaryPhoneNumber;
	}
	const std::string & GetCompany()const {
		return company;
	}
};

/**
 * \fn DisplaySortedContacts
 * 
 * \brief Display all contacts sorted by first or last name (provide an option that users can choose).-
 */
void DisplaySortedContacts(std::vector<Agenda> vect, bool sortByLastName=false){
	
	if(sortByLastName){
		std::sort(vect.begin(), vect.end(), [](const auto &e1, const auto &e2){return e1.GetSurname() < e2.GetSurname();});
		for(const auto &e : vect){
			std::cout 
			<< "Name: " << e.GetName() 
			<< " | Surname: " << e.GetSurname() 
			<< std::endl;
		}
	}
	else{
		std::sort(vect.begin(), vect.end(), [](const auto &e1, const auto &e2){return e1.GetName() < e2.GetName();});
		for(const auto &e : vect){
			std::cout 
			<< "Name: " << e.GetName() 
			<< " | Surname: " << e.GetSurname() 
			<< std::endl;
		}
	}
}

/**
 * \fn DisplayFirstNameAndPhone
 * 
 * \brief Display only first name with primary number.-
 */
void DisplayFirstNameAndPhone(std::vector<Agenda> &v){
	std::for_each(v.begin(), v.end(), [](const auto &e){
		std::cout << "Name: " << e.GetName() 
		<< " | Primary phone number: " << e.GetPrimaryPhoneNumber()
		<< std::endl;
	});
}


/**
 * \fn DisplaySameCompany
 * 
 * \brief Display contacts from the same company only.-
 */
void DisplaySameCompany(std::vector<Agenda> &v, std::string company){
	// auto itr = std::for_each(v.begin(), v.end(), [](const auto &e){
	// 	return e.GetCompany() == company;
	// });
	// for(int namey : itr.name){
	// 	std::cout << "Name: " << namey << std::endl;
	// }

}

/**
 * \fn DisplayGroupBased
 * 
 * \brief Display contacts based on group type-
 */
void DisplayGroupBased(std::vector<Agenda> &v){}

/**
 * \fn Search
 * 
 * \brief Display contacts based on group type-
 */
void Search(std::vector<Agenda> &v, std::string name_surname, bool isSearchBySurname=false){
	if(!isSearchBySurname){
		auto itr = std::find_if(v.begin(), v.end(), [name_surname](const auto &e){
			return e.GetName() == name_surname;
		});
		if(itr != v.end()){
			std::cout << itr->GetName() << " found!" << std::endl;
		}
		else{
			std::cout << name_surname << " not found..." << std::endl;
		}
	}
	else{
		auto itr = std::find_if(v.begin(), v.end(), [name_surname](const auto &e){
			return e.GetSurname() == name_surname;
		});
		if(itr != v.end()){
			std::cout << itr->GetSurname() << " found!" << std::endl;
		}
		else{
			std::cout << name_surname << " not found..." << std::endl;
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
	 * Create a contacts application that allows users to store contact information:
	 * 		First Name
	 * 		Last Name
	 * 		Primary phone number
	 * 		Secondary phone number
	 * 		Email id
	 * 		Address
	 * 		Company
	 * 		Group (Friends, Family, Coworker, Acquaintance)
	 * 	
	 * Provide the following features:
	 * 
	 *		✅ Display all contacts sorted by first or last name (provide an option that users can choose)
	 *		✅ Display only first name with primary number
	 *		❎ Display contacts from the same company only
	 *		❎ Display contacts based on group type
	 *		✅ Allow contact search by first or last name
	 *		❎ Display count of contacts by company and group.
	 *		
	 * Decide carefully about the usage of containers and algorithms.
	 * 
	 */
	std::vector<Agenda> AgendaVector{
		{"Jorge", "Lanata", 4290459, 0, "Jorgitogloton@hotmail.com", "Santa Fe 203", "Telefé", GroupType::Aquaintance},
		{"Benito", "Camelas", 4290259, 0, "Benitocamelas@hotmail.com", "Santa Cruz 2203", "Canal 13", GroupType::Aquaintance},
		{"Arturo Zacarias", "Zuasquita", 15534728, 4290212, "AZZtop@hotmail.com", "Juan De la Veracruz 112", "Telefé", GroupType::Aquaintance}
	};
	std::cout << "Order by name: " << std::endl;
	DisplaySortedContacts(AgendaVector, false);
	std::cout << std::endl;
	
	std::cout << "Order by surname: " << std::endl;
	DisplaySortedContacts(AgendaVector, true);
	std::cout << std::endl;
	
	std::cout << "Print name and phone: " << std::endl;
	DisplayFirstNameAndPhone(AgendaVector);
	std::cout << std::endl;

	std::cout << "Print same company people: " << std::endl;
	DisplaySameCompany(AgendaVector, "Telefé");
	std::cout << std::endl;

	std::cout << "Search name and surname: " << std::endl;
	Search(AgendaVector, "Francesco", false);
	Search(AgendaVector, "Camelas", true);
	std::cout << std::endl;

	return 0;
}