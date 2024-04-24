#include<iostream>
#include<cstring>
#include<exception>
#include "Vehicle.h"

int main() {
    Vehicle v;
    try {
        std::cin>>v;
    } catch(std::exception &e) {
        std::cout<<e.what();
    }
    std::cout<<"********************"<<std::endl;
    std::cout<<v;
}