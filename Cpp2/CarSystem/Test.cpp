#include<iostream>
#include<cstring>
#include<exception>
// #include "CarSpecification.h"
#include "ElectricCar.h"
#include "DieselCar.h"

enum carTpe {};

int main() {
    ElectricCar *ec = new ElectricCar();
    std::cin>>*ec;
    std::cout<<"******************"<<std::endl;

    DieselCar *dc = new DieselCar();
    std::cin>>*dc;
    std::cout<<"******************"<<std::endl;
    
    std::cout<<*ec;
    std::cout<<"******************"<<std::endl;
    std::cout<<*dc;
    //free memory
    delete ec;
    delete dc;

    return 0;
}