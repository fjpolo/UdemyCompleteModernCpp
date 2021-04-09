#include "Transaction.h"
#include <iostream>
#include "Checking.h"

/**
 * \fn
 * 
 * \brief
 */
// void Transact(Checking * pAccount) {
void Transact(Account * pAccount) {
    std::cout << "Transaction started" << std::endl;
    std::cout << "Initial balance:" << pAccount->GetBalance() << std::endl;
	pAccount->Deposit(100);
	pAccount->AccumulateInterest();

	/*Video 102*/
	// if(typeid(*pAccount) == typeid(Checking)){
	// 	Checking *pChecking = static_cast<Checking*>(pAccount);	// Donwcast
	// 	std::cout << "Minimum balance of Checking:" << pChecking->GetMinimumBalance() << std::endl;
	// }

	/*Video 103*/
	Checking *pChecking = dynamic_cast<Checking*>(pAccount);	// Donwcast
	if (pChecking != nullptr) {
		std::cout << "Minimum balance of Checking:" << pChecking->GetMinimumBalance() << std::endl;
	}

    pAccount->Withdraw(170);
	std::cout << "Interest rate:" << pAccount->GetInterestRate() << std::endl;
	std::cout << "Final balance:" << pAccount->GetBalance() << std::endl;
}


void Transact(Account &pAccount) {
    std::cout << "Transaction started" << std::endl;
    std::cout << "Initial balance:" << pAccount.GetBalance() << std::endl;
	pAccount.Deposit(100);
	pAccount.AccumulateInterest();

	/*Video 102*/
	// if(typeid(*pAccount) == typeid(Checking)){
	// 	Checking *pChecking = static_cast<Checking*>(pAccount);	// Donwcast
	// 	std::cout << "Minimum balance of Checking:" << pChecking->GetMinimumBalance() << std::endl;
	// }
 
	/*Video 103*/
	Checking &pChecking = dynamic_cast<Checking&>(pAccount);	// Donwcast
	std::cout << "Minimum balance of Checking:" << pChecking.GetMinimumBalance() << std::endl;

    pAccount.Withdraw(170);
	std::cout << "Interest rate:" << pAccount.GetInterestRate() << std::endl;
	std::cout << "Final balance:" << pAccount.GetBalance() << std::endl;
}
