#include<iostream>
#include "bankaccount.h"

void maxRateOfInterest(int n, BankAccount bAcc[3]) {
    double max = 0;
    for(int i = 0; i < n; i++) {
        double roi = bAcc[i].calInterest();
        if(roi > max) {
            max = roi;
        }
    } 
    std::cout<<"Maximum rate of interest : "<<max<<std::endl;
}

int main() {
    //Methods to create bankAccount object

    //first
    BankAccount bAcc1(101,"Raj",20000); //bAcc1 in stack memory

    //second
    BankAccount *bAcc2 = new BankAccount(102,"Dev",30000);  // bAcc2 in stack but object is in heap
    
    //third for array of objects
    int n;
    std::cout<<"Enter number of Users: "<<std::endl;
    std::cin>>n;
    int accNumber;
    char* name = new char[20];
    double amount;
    
    BankAccount bAcc[n];
    for(int i = 0; i < n; i++) {
        std::cout<<"Enter "<<i+1<<" bank account details..."<<std::endl;
        
        std::cin>>accNumber;
        bAcc[i].setAccountNumber(accNumber);

        std::cin>>name;
        bAcc[i].setAccountHolderName(name);

        std::cin>>amount;
        bAcc[i].setAccountBalance(amount);
    }
    
    //displary all acounts
    std::cout<<"All Bank Account Details..."<<std::endl;
    bAcc1.showAccountDetails(); //to show objects in stack
    bAcc2->showAccountDetails(); //to show objects in heap
    for(int i = 0; i < n; i++) {
        bAcc[i].showAccountDetails();
    }

    //calculate maxInterest
    maxRateOfInterest(n,bAcc);

    //free memory space
    // delete[] bAcc;// bAcc is a pointer
    // delete[] name;
    delete bAcc2;
    
    return 0;
}