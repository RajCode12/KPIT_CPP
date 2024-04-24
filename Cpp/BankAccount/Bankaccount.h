#include<iostream>
#include<cstring>

class BankAccount {
    int accountNumber;
    char* accountHolderName;
    double accountBalance;
    static double rateOfInterest;
    public:
        BankAccount();  //constructor
        BankAccount(int accountNumber, const char* getAccountHolderName, double accountBalance); //parameterized constructor
        const void showAccountDetails();      //non-static function
        double calInterest();  

        BankAccount(const BankAccount &);//copy constructor
        ~BankAccount(); //destructor
        

        int getAccountNumber() const { return accountNumber; }
        void setAccountNumber(int accountNumber_) { accountNumber = accountNumber_; }

        const char* getAccountHolderName() const { return accountHolderName; }
        void setAccountHolderName(const char* accountHolderName_) { strcpy(accountHolderName,accountHolderName_); }

        double getAccountBalance() const { return accountBalance; }
        void setAccountBalance(double accountBalance_) { accountBalance = accountBalance_; }
        
};