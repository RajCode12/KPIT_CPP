#include<iostream>
#include "Person.h"

int main() {
    // Person p;
    // std::cout<<"**********************"<<std::endl;
    // std::cout<<p;

    Person p1("Raj","123-456-789","raj@gmail.com",Address("Patna",34043,"Bihar"),Vehicle(4394,4,Date(1,2,2023),"Creta"));
    Person p2("Dev","134-439-540","dev@gmail.com",Address("Noida",45934,"Up"),Vehicle(2303,6,Date(11,2,2022),"SUV"));
    Person p3("Aditya","908-943-540","aditya@gmail.com",Address("Pune",54903,"Maharastra"),Vehicle(9089,4,Date(20,9,2021),"Harrier"));

    Person p[3] = {p1,p2,p3};
    for(int i = 0; i < 3; i++) {
        std::cout<<p[i];
        std::cout<<"****************"<<std::endl;
    }
    Person p4;
    bool flag = false;
    int number;
    std::cout<<"Enter Vehicle Number : ";
    std::cin>>number;
    for(int i = 0; i < 3; i++) {
        if(p1.getVehicle().getVehicleNumber() == number) {
            flag = true;
            p4 = p[i];
            break;
        }
    }
    if(flag) {
        std::cout<<"..........Vehicle Found.........."<<std::endl;
        std::cout<<p4;
    } else {
        std::cout<<"..........Vehicle Not Found.........."<<std::endl;
    }
}