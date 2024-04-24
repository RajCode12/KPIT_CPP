#include<iostream>
#include<cstring>
#include "Date.h"

Date::Date() {
    
}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {

}
Date::~Date() {
    
}
void Date::setDate() {
    int y;
    std::cout<<"Enter year : ";
    std::cin>>y;
    int m;
    std::cout<<"Enter Month : ";
    std::cin>>m;
    int d;
    std::cout<<"Enter Day : ";
    std::cin>>d;
    day = d;
    month = m;
    year = y;
}
std::ostream& operator<<(std::ostream& os, const Date &obj) {
    os<<"Date : "<<obj.day<<"-"<<obj.month<<"-"<<obj.year<<std::endl;
}