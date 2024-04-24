#include "Sell.h"
#include<iostream>
#include<cstring>
#include<limits>
#include<exception>

Sell::Sell() : amount(100), itemCost(10)
{
    itemName = new char[20];
    strcpy(itemName,"Burger");
}

Sell::Sell(const char * name, int am)
{
    strcpy(itemName,name);
    amount = am;
}

Sell::~Sell()
{
    delete[] itemName;
}

void Sell::sellItem()
{
    while(true) {
        try {
            std::cout<<"Enter Item you want to purchase... \n";
            std::cout<<"Enter 1 for Burger, 2 for Pizza : \n";
            int num;
            std::cin>>num;
            if(std::cin.fail() || (num != 1 && num != 2)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                throw std::runtime_error("Please Enter 1 or 2 only...");
            } else {
                switch(num) {
                    case 1: itemCost = 10; break;
                    case 2: itemCost = 50; break;
                    default: break;
                }
            }
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Sell &obj)
{
    std::cout<<"Finish...";
}
