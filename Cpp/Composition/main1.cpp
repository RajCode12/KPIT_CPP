#include<iostream>
#include "BankAccount.h"

int main() {
    BankAccount bAcc1(101,"Raj",20000,Address("Bihar",10011),Date(1,1,2003));
    bAcc1.showAccountDetails();
}