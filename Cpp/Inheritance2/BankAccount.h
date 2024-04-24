#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<iostream>
#include<cstring>

class BankAccount {
    int accountNumber;
    std::string accountHolderName;
    double balance;
    public:
        BankAccount();
        BankAccount(int,std::string,double);
        ~BankAccount();
        void withdraw(double amount);
        void deposit(double amount);
        virtual void display();

        int getAccountNumber() const { return accountNumber; }
        void setAccountNumber(int accountNumber_) { accountNumber = accountNumber_; }

        std::string getAccountHolderName() const { return accountHolderName; }
        void setAccountHolderName(const std::string &accountHolderName_) { accountHolderName = accountHolderName_; }

        double getBalance() const { return balance; }
        void setBalance(double balance_) { balance = balance_; }
};

#endif // BANKACCOUNT_H
