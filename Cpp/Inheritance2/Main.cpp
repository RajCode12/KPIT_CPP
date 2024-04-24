#include<iostream>
#include<cstring>
#include "SavingAccount.h"

int main() {
    SavingAccount sAcc1(101,"Raj",50000,10,3000);
    sAcc1.display();
    sAcc1.withdraw();


    // BankAccount bAcc1(101,"Raj",50000);
    // BankAccount bAcc2(101,"Raj",50000);
    // BankAccount bAcc3(101,"Raj",50000);

    // SavingAccount sa1[3]= {SavingAccount(bAcc1,10,3000),SavingAccount(bAcc2,10,3000),
    //                         SavingAccount(bAcc3,10,3000)};
    // for(int i = 0; i < 3; i++) {
    //     sa1[i].display();
    //     std::cout<<"*****************"<<std::endl;
    // }


}