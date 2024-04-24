#include<iostream>
#include<cstring>
#include "Date.h"
#include<exception>
#include<limits>

Date::Date() : day(1), month(1), year(2023)
{
}

Date::Date(int d, int m, int y) : day(d), month(m), year(y)
{
}

void Date::accept()
{
    while(true) {
        try {
            std::cout<<"Enter Year : "<<std::endl;
            int y;
            std::cin>>y;
            if(std::cin.fail() || (y < 1 || y > 100000)) {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                throw std::runtime_error("Please Enter a valid year...");
            }
            setYear(y);
            int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
            if((y % 400 == 0) || (y % 4 == 0 && y % 100 == 0)) {
                arr[1] += 1; 
            }
            std::cout<<"Enter Month : "<<std::endl;
            int m;
            std::cin>>m;
            if(std::cin.fail() || (m < 1 || m > 12)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                throw std::runtime_error("Please enter a valid month...");
            }
            setMonth(m);
            std::cout<<"Enter day : "<<std::endl;
            int d;
            std::cin>>d;
            if(std::cin.fail() || (d < 1 || d > arr[m-1])) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                throw std::runtime_error("Please enter a valid date...");
            }
            setDay(d);
            break;
        } catch (std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const Date &obj)
{
    os<<"Date : "<<obj.day<<"-"<<obj.month<<"-"<<obj.year<<std::endl;
    return os;
}
