#include<iostream>
#include<limits>
#include "Sell.h"
#include "LowBalanceException.h"

int main() {
    Sell s1;
    while(s1.getAmount() > 0) {
        s1.sellItem();//itemCost
        try {
            std::cout<<"Enter how many items you want to buy : "<<std::endl;
            int number;
            std::cin>>number;
            if(number < 0 || std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                throw std::runtime_error("Please enter a valid number...");
            } else if(s1.getItemCost()*number > s1.getAmount()) {
                throw LowBalanceException("Balance Insufficient...");
            } else {
                s1.setAmount(s1.getAmount() - number*s1.getItemCost());
                std::cout<<"Item Purchased..."<<std::endl;
                std::cout<<"Remaining Balance : "<<s1.getAmount()<<std::endl;
            }

        } catch(LowBalanceException &e) {
            std::cout<<e.what()<<std::endl;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
    }
}