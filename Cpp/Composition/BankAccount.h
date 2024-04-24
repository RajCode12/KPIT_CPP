#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<iostream>
#include<cstring>
#include "Address.h"
#include "Date.h"

class BankAccount {
    Address address;
    Date date;
    int accountNumber;
    char* accountHolderName;
    double accountBalance;
    static double rateOfInterest;
    public:
        BankAccount();  //constructor
        BankAccount(int , const char* , double ); //parameterized constructor
        BankAccount(int , const char* , double , Address , Date);
        const void showAccountDetails();      //non-static function
        double calInterest();  
        ~BankAccount(); //destructor
        

        int getAccountNumber() const { return accountNumber; }
        void setAccountNumber(int accountNumber_) { accountNumber = accountNumber_; }

        const char* getAccountHolderName() const { return accountHolderName; }
        void setAccountHolderName(const char* accountHolderName_) { strcpy(accountHolderName,accountHolderName_); }

        double getAccountBalance() const { return accountBalance; }
        void setAccountBalance(double accountBalance_) { accountBalance = accountBalance_; }
        
};

#endif // BANKACCOUNT_H
