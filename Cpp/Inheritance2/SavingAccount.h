#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include<iostream>
#include<cstring>
#include "BankAccount.h"

class SavingAccount : public BankAccount {
    double interestRate;
    double minBalance;
    BankAccount bAcc;
    public: 
        SavingAccount();
        SavingAccount(double,double);
        SavingAccount(int,std::string,double,double,double);
        ~SavingAccount();
        SavingAccount(BankAccount,double,double);

        void display();
        void withdraw();
        double calInterest();

        double getInterestRate() const { return interestRate; }
        void setInterestRate(double interestRate_) { interestRate = interestRate_; }

        double getMinBalance() const { return minBalance; }
        void setMinBalance(double minBalance_) { minBalance = minBalance_; }
};

#endif // SAVINGACCOUNT_H
