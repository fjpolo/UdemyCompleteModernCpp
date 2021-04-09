/**
 * Includes
 */ 
#include <iostream>
#include "../Libraries/Account.h"
#include "../Libraries/Savings.h"
#include "../Libraries/Checking.h"
#include "../Libraries/Transaction.h"
#include <typeinfo>


/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 93
     */
    // Account acc("Bob", 500);
    // std::cout << "Initial balance: " << acc.GetBalance() << std::endl;
    // acc.Deposit(5000);
    // acc.Withdraw(10000);
    // acc.Withdraw(500);
    // std::cout << "Current balance: " << acc.GetBalance() << std::endl;

    /**
     * Video 94
     */
    // Savings acc("Bob", 500, 0.01f);
    // std::cout << "Initial balance: " << acc.GetBalance() << std::endl;
    // acc.Deposit(5000);
    // acc.Withdraw(10000);
    // acc.Withdraw(500);
    // std::cout << "Current balance: " << acc.GetBalance() << std::endl;

    /**
     * Assignment I - Video 95
     */
    // Checking acc("Bob", 500);
    // std::cout << "Initial balance: " << acc.GetBalance() << std::endl;
    // acc.Deposit(5000);
    // acc.Withdraw(10000);
    // acc.Withdraw(500);
    // std::cout << "Current balance: " << acc.GetBalance() << std::endl;

    /**
     * Video 96 - Polymorphism
     */
    // // Checking acc("Bob", 100);
    // // Transact(&acc);
    // Savings acc("Bob", 100, 0.01);
    // Transact(&acc);

     /**
     * Video 98_99 - Runtime polymorphism
     */
    // Savings acc("Bob", 100, 0.01);
    // Transact(&acc);
    // std::cout << "Size of account: " << sizeof(Account) << " bytes" << std::endl;
    // Savings *acc = new Savings("Bob", 100, 0.01);
    // Transact(acc);
    // std::cout << "Size of account: " << sizeof(Account) << " bytes" << std::endl;
    // delete acc;
    // Account *acc = new Savings("Bob", 100, 0.01);
    // Transact(acc);
    // std::cout << "Size of account: " << sizeof(Account) << " bytes" << std::endl;
    // delete acc;

    /**
     * Video 100 🎉 - override and final
     */
    /**
     * override keyword overrides a virtual method implemented by base class.-
     * final keyword prevents a child class from overriding a method implemented by a base class.-
    */
    // Account *acc = new Savings("Bob", 100, 0.01);
    // Transact(acc);
    // std::cout << "Size of account: " << sizeof(Account) << " bytes" << std::endl;
    // delete acc;

    /**
     * Video 101 🐶 - Upcosting? Object slicing! 🔪
     */
    // Checking ch("Bob", 100);
    // Account *pAccount = &ch;
    // // Transact(pAccount);
    // // Checking *pCheck = pAccount;    // Error
    // Checking *pCheck = static_cast<Checking*>pAccount;      // Downcasting
    

    /**
     * Video 102 - typeid
     */
    // // Checking acc("Bob", 100, 50);
    // Savings acc("Bob", 100, 0.01f);
    // Account *p = &acc;
    // Transact(&acc);

    // int i{};
    // float f{};
    // const std::type_info &ti = typeid(i);       // Compile time
    // std::cout << ti.name() << std::endl;
    // const std::type_info &tf = typeid(f);       // Compile time
    // std::cout << tf.name() << std::endl;
    // const std::type_info &ts = typeid(acc);     // Runtime
    // std::cout << ts.name() << std::endl;
    // const std::type_info &ta = typeid(*p);       // Runtime
    // std::cout << ta.name() << std::endl;
    // /**/
    // if(ti == typeid(Savings)){
    //     std::cout << "p points to savings object" << std::endl;
    // }
    // else{
    //     std::cout << "Not pointing to savings object" << std::endl;
    // }

    /**
     * Video 103 - dynamic_cast
     */
    // // Checking acc("Bob", 100, 50);
    // Savings acc("Bob", 100, 0.01f);
    // Transact(&acc);
    /*Reference exception*/
    Savings acc("Bob", 100, 0.01f);
    try{
        Transact(acc);
    }catch(std::exception &ex){
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    

    return 0;
}
 
