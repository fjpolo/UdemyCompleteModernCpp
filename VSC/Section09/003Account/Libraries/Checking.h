#pragma once
#include "Account.h"

/**
 * \class Checking : public Account
 * 
 * \brief
 */
class Checking : public Account {
	private:
		float m_MinimumBalance;
	public:
		using Account::Account;	// Inherit constructor
		Checking(const std::string &name, float balance);
		Checking(const std::string &name, float balance, float minbal);
		~Checking();
		void Withdraw(float amount)override;
		float GetMinimumBalance()const;

};

