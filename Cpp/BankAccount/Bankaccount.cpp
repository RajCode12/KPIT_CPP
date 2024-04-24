#include<iostream>
#include<cstring>
#include "Bankaccount.h"
#include "Address.h"
#include "Date.h"

double BankAccount::rateOfInterest=10;

BankAccount::BankAccount() {
    accountNumber=100;
    accountHolderName = new char[20];   // compulsory to assign space since we are using pointer
    strcpy(accountHolderName,"XYZ");
    accountBalance = 10000;
    
}
BankAccount::BankAccount(int accNo, const char* accHoldName, double amount) {
    accountNumber = accNo;
    accountHolderName = new char[strlen(accHoldName)+1];
    strcpy(accountHolderName,accHoldName);
    accountBalance = amount;
}
BankAccount::~BankAccount() {
    delete[] accountHolderName;
}
BankAccount::BankAccount(const BankAccount &obj) {
    accountNumber = obj.accountNumber;
    accountHolderName = new char[strlen(obj.accountHolderName)+1];
    strcpy(accountHolderName,obj.accountHolderName);
    accountBalance = obj.accountBalance;
}
double BankAccount::calInterest() {
    return (accountBalance*rateOfInterest)/100;
}
const void BankAccount::showAccountDetails() {
    std::cout<<accountNumber<<" "<<accountHolderName<<" "<<accountBalance<<std::endl;
}
