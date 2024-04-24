#include <iostream>
#include <cstring>
#include "SavingAccount.h"
#include "Exception.h"

SavingAccount::SavingAccount() : interestRate(10), minBalance(3000)
{
    std::cout << "Saving Account ctor..." << std::endl;
}
SavingAccount::SavingAccount(double rate, double min) : interestRate(rate), minBalance(min)
{
}
SavingAccount::SavingAccount(int num, std::string name, double amount, double rate, double min) : 
    BankAccount(num, name, amount), interestRate(rate), minBalance(min)
{
}
SavingAccount::SavingAccount(BankAccount obj, double rate, double min) : 
    bAcc(obj), interestRate(rate), minBalance(min)
{
}
SavingAccount::~SavingAccount()
{
    std::cout << "Saving Account dtor..." << std::endl;
}
void SavingAccount::withdraw()
{
    bool flag = false;
    while (true)
    {
        std::cout << "Enter amount to be withdrawn..." << std::endl;
        double amount;
        std::cin >> amount;
        try
        {
            if (amount >= minBalance && BankAccount::getBalance() >= amount + minBalance)
            {
                BankAccount::setBalance(BankAccount::getBalance() - amount);
                std::cout << "Withdraw done..." << std::endl;
                std::cout << "Remaining Balance : " << BankAccount::getBalance() << std::endl;
                flag = true;
            }
            else
            {
                throw LowBalanceException("Minimum Balance should be greater than or equal to 3000");
            }
        }
        catch (LowBalanceException e)
        {
            std::cout << e.what() << std::endl;
        }
        if(flag) break;
    }
}
double SavingAccount::calInterest()
{
    return BankAccount::getBalance() * interestRate;
}
void SavingAccount::display()
{
    std::cout << "Saving Account Details..." << std::endl;
    BankAccount::display();
    std::cout << "Interest Rate : " << interestRate << std::endl;
    std::cout << "Minimum Balance : " << minBalance << std::endl;
}
