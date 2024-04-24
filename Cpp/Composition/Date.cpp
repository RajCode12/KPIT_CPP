#include<iostream>
#include<cstring>
#include "Date.h"

Date::Date() : day(1), month(1), year(2001){
    
}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {
    
}
void operator<<(std::ostream &ob, const Date &obj)
{
    ob<<obj.day<<"-"<<obj.month<<"-"<<obj.year<<std::endl;
}

Date::~Date()
{
}

