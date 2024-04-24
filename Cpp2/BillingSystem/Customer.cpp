#include<iostream>
#include<cstring>
#include "Customer.h"
#include<exception>
#include<limits>

Customer::Customer() 
{
    customerName = new char[20];
    strcpy(customerName,"Raj Kumar");
}

Customer::Customer(const char *name)
{
    customerName = new char[20];
    strcpy(customerName,name);
}

Customer::Customer(const Customer &obj)
{
    delete customerName;
    customerName = new char[strlen(obj.customerName)+1];
    strcpy(customerName,obj.customerName);
}

void Customer::accept()
{
    while(true) {
        try {
            std::cout<<"Enter Your Name : "<<std::endl;
            char* name = new char[20];
            std::cin>>name;
            for(int i = 0; i < strlen(name); i++) {
                if((name[i] < 97 && name[i] > 122) || (name[i] < 65 && name[i] > 90) || std::cin.fail()) {
                    std::cin.clear(); // Clear error flags
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                    throw std::runtime_error("Please Enter correct name : ");
                }
            }
            setCustomerName(name);
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
       
    }
}

Customer::~Customer()
{
    delete[] customerName;
}

std::ostream& operator<<(std::ostream &os, const Customer &obj) {
    os<<"Customer name : "<<obj.customerName<<std::endl;
    return os;
}
