#include<iostream>
#include "Hospital.h"

int main() {
    Hospital h1("Apolo",10,15,20,Doctor(101,"Raj",Date(1,1,2003)));
    Hospital h2("AIIMS",20,25,30,Doctor(102,"Dev",Date(1,2,2003)));
    Hospital h3("PMCH",40,27,56,Doctor(103,"Aditya",Date(1,3,2003)));
    Hospital h[3] = {h1,h2,h3};
    //std::cout<<h1<<h2<<h3;
    for(int i = 0; i < 3; i++) {
        std::cout<<h[i];
        std::cout<<"***************"<<std::endl;
    }
    //Checking the hospital Name entered by user exists or not
    std::string name;
    std::cout<<"Enter Hospital Name to be Search : ";
    std::cin>>name;
    bool isFound = false;
    Hospital h4;
    for(int i = 0; i < 3; i++) {
        if(h[i].getHospitalName() == name) {
            isFound = true;
            h4 = h[i];
            break;
        }
    }
    if(isFound) {
        std::cout<<"Hospital Found..."<<std::endl;
        std::cout<<h4;
    } else {
        std::cout<<"Hospital Not Found...";
    }
    // Date d;
    // Doctor doc;
    // std::cout<<h;
}