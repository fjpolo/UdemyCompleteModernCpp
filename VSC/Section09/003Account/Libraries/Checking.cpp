#include "Checking.h"
#include <iostream>

/**
 * \class Checking : public Account
 * 
 * \brief
 */
Checking::Checking(const std::string &name, float balance, float minbal)
:Account(name, balance),
m_MinimumBalance(minbal)
{
	std::cout << "Checking(const std::string &name, float balance)" << std::endl;

}
Checking::~Checking(){
	std::cout << "~Checking()" << std::endl;

}
void Checking::Withdraw(float amount){
    if ((m_Balance - amount) > m_MinimumBalance) {
		Account::Withdraw(amount);
	}
	else {
		std::cout << "Invalid amount" << std::endl; 
	}
}
float Checking::GetMinimumBalance()const{
    return m_MinimumBalance;
}