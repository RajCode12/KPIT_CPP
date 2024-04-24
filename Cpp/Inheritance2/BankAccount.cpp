#include<iostream>
#include<cstring>
#include "BankAccount.h"

BankAccount::BankAccount() : accountNumber(101), accountHolderName("Raj"), balance(10000){
    std::cout<<"BankAccount ctor..."<<std::endl;
}
BankAccount::BankAccount(int num, std::string name, double amount) : 
    accountNumber(num), accountHolderName(name), balance(amount)
{
    
}
BankAccount::~BankAccount() {
    std::cout<<"BankAccount dtor..."<<std::endl;
}
void BankAccount::withdraw(double amount) {
    std::cout<<"Withdrawing..."<<std::endl;
    balance -= amount;
    std::cout<<"Withdraw done..."<<std::endl;
    std::cout<<"Current Balance : "<<balance;
}
void BankAccount::deposit(double amount) {
    balance += amount;
    std::cout<<"Deposit done..."<<std::endl;
    std::cout<<"Current Balance : "<<balance;
}

void BankAccount::display()
{
    std::cout<<"BankAccount Details..."<<std::endl;
    std::cout<<"Account Number : "<<accountNumber<<std::endl;
    std::cout<<"Account Holder Name : "<<accountHolderName<<std::endl;
    std::cout<<"Account Balance : "<<balance<<std::endl;
}
