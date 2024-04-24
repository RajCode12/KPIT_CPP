#include<iostream>
#include<cstring>
#include "BankAccount.h"

double BankAccount::rateOfInterest=10;

BankAccount::BankAccount() : accountNumber(100), accountBalance(10000) {
    accountHolderName = new char[20];   // compulsory to assign space since we are using pointer
    strcpy(accountHolderName,"XYZ");
    
}
BankAccount::BankAccount(int accNo, const char* accHoldName, double amount) : accountNumber(accNo), accountBalance(amount){
    accountHolderName = new char[strlen(accHoldName)+1];
    strcpy(accountHolderName,accHoldName);
}
BankAccount::BankAccount(int accNo, const char *name, double balance, Address add, Date d) :
    accountNumber(accNo), accountBalance(balance), address(add), date(d) // to call parameterized constructor
{
    accountHolderName = new char[strlen(name)+1];
    strcpy(accountHolderName,name);
}
BankAccount::~BankAccount() {
    delete[] accountHolderName;
}
double BankAccount::calInterest() {
    return (accountBalance*rateOfInterest)/100;
}
const void BankAccount::showAccountDetails() {
    std::cout<<accountNumber<<" "<<accountHolderName<<" "<<accountBalance<<std::endl;
    address.display();
    std::cout<<date;
}

