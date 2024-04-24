#include "Bill.h"
#include<iostream>
#include<cstring>
#include<exception>
#include<limits>

Bill::Bill() : billNumber(1)
{
    
}

Bill::~Bill()
{
    
}

void Bill::accept()
{
    while(true) {
        try  {
            std::cout<<"Enter Bill Number : "<<std::endl;
            int number;
            std::cin>>number;
            if(std::cin.fail() || number < 1) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                throw std::runtime_error("Please enter a valid bill number...");
            }
            setBillNumber(number);
            std::cout<<"Enter Bill amount : "<<std::endl;
            int amount;
            std::cin>>amount;
            if(std::cin.fail() || amount <= 0) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                throw std::runtime_error("Enter a valid amount...");
            }
            setBillAmount(amount);
            break; 
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
        // break;
    }
    customerInfo.accept();
    billDate.accept();
}

std::ostream &operator<<(std::ostream &os, const Bill &obj)
{
    os<<"Bill Number : "<<obj.billNumber<<std::endl;
    os<<obj.customerInfo;
    os<<obj.billDate;
    os<<"Bill Amount : "<<obj.billAmount<<std::endl;
    return os;
}
