#include<algorithm>
#include<iostream>
#include "employee.h"
int main() {
    Employee e[3] = {Employee(1,"Raj",20000),Employee(2,"Dev",25000),Employee(3,"Aditya",30000)};

    // std::cout<<"All Employee Detaisl : "<<std::endl;
    // for(int i = 0; i < 3; i++) {
    //     e[i].display();
    // }
    // int d1;
    // std::cout<<"Enter Id to search : "<<std::endl;
    // std::cin>>d1;
    // bool flag = false;
    // for(int i = 0; i < 3; i++) {
    //     if(e[i].getId() == d1) {
    //         flag = true;
    //         break;
    //     }
    // }
    // if(flag) {
    //     std::cout<<d1<<"th id found"<<std::endl;
    // } else {
    //     std::cout<<d1<<"th id not found"<<std::endl;
    // }
    //std::cout<<e[1];
    Employee e(1,"Dev",90000);
    e.name();
}