#include<iostream>
#include<cstring>
#include<exception>
#include<limits>
#include "Order.h"


int main() {
    //Order array of size 3
    Order order[3];
    order[0] = {1,1000,10,MARKET};
    order[1] = {2,2000,20,LIMIT};
    order[2] = {3,3000,30,STOP};

    //Order with highest discount
    std::cout<<"********************"<<std::endl;
    double dis = 0;
    Order ord;
    for(int i = 0; i < 3; i++) {
        if(dis < order[i].getDiscount()) {
            dis = order[i].getDiscount();
            ord = order[i];
        }
    }
    ord.display();
    
    //Order Type and value based on OrderId
    std::cout<<"********************"<<std::endl;
    while(true) {
        try {
            bool flag = false;
            int id;
            std::cout<<"Enter Order Id to be found : "<<std::endl;
            std::cin>>id;
            if(std::cin.fail() || id <= 0) {
                throw std::runtime_error("Please enter a valid orderId : ");
            } else {
                for(int i = 0; i < 3; i++) {
                    if(order[i].getOrderId() == id) {
                        flag = true;
                        std::cout<<"Order Id : "<<id<<std::endl;
                        std::cout<<"Order Value : "<<order[i].getOrderValue()<<std::endl;
                        switch(order[i].getType()) {
                            case 1: 
                                std::cout<<"Order Type : MARKET"<<std::endl;
                                break;
                            case 2:
                                std::cout<<"Order Type : LIMIT"<<std::endl;
                                break;
                            case 3:
                                std::cout<<"Order Type : STOP"<<std::endl;
                                break;
                            default:
                                break;
                        }
                        break;
                    }
                }
            }
            if(!flag) {
                std::cout<<"Order id : "<<id<<" not found..."<<std::endl;
            }
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
    
    //Averge discount
    std::cout<<"********************"<<std::endl;
    double dist = 0;
    for(int i = 0; i < 3; i++) {
        dist += order[i].getDiscount();
        dist /= 3;
    }
    std::cout<<"Average Discount : "<<dist<<std::endl;

    //Number of Orders Placed
    std::cout<<"********************"<<std::endl;
    std::cout<<"Number of Orders Placed : "<<order->numberOfOrders()<<std::endl;
}