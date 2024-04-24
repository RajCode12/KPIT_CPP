#include "CarSpecification.h"
#include<iostream>
#include<cstring>
#include<exception>
#include<limits>

CarSpecification::CarSpecification()
{
    
}

CarSpecification::CarSpecification(char * n, char * a, char * t)
{
    setName(n);
    setAcceleration(a);
    setTopSpeed(t);
}

CarSpecification::~CarSpecification()
{
    delete[] name;
    delete[] acceleration;
    delete[] topSpeed;
}

std::ostream &operator<<(std::ostream &os, const CarSpecification &obj)
{
    os<<"Car Name : "<<obj.name<<std::endl;
    os<<"Acceleration : "<<obj.acceleration<<std::endl;
    os<<"Top Speed : "<<obj.topSpeed<<std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, CarSpecification &obj)
{
    while(true) {
        try {
            std::cout<<"Enter Car Name : "<<std::endl;
            char* name = new char[20];
            is>>name;
            for(int i = 0; i < strlen(name); i++) {
                if((name[i] < 65 && name[i] > 90) || (name[i] < 97 && name[i] > 122)) {
                    throw std::runtime_error("Please Enter a valid car name...");
                }
            }
            obj.setName(name);
            
            std::cout<<"Enter Acceleration : "<<std::endl;
            char* acc = new char[20];
            is>>acc;
            // for(int i = 0; i < strlen(name); i++) {
            //     if((name[i] < 65 && name[i] > 90) || (name[i] < 97 && name[i] > 122)) {
            //         throw std::runtime_error("Please Enter a valid car name...");
            //     }
            // }
            obj.setAcceleration(acc);

            std::cout<<"Enter Top Speed : "<<std::endl;
            char* speed = new char[20];
            is>>speed;
            // for(int i = 0; i < strlen(name); i++) {
            //     if((name[i] < 65 && name[i] > 90) || (name[i] < 97 && name[i] > 122)) {
            //         throw std::runtime_error("Please Enter a valid car name...");
            //     }
            // }
            obj.setTopSpeed(speed);

            delete[] name;
            delete[] acc;
            delete[] speed;
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            is.clear();
            is.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        return is;
    }
}
