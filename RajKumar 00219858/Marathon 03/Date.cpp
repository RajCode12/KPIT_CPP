#include "Date.h"
#include<exception>

Date::Date() : day(1), month(1), year(2020)
{
}

Date::Date(int d, int m, int y)
{
    bool flag = false;
    if(y < 1 || y > 10000) {
        throw std::runtime_error("Please enter value in range 2000 - 10000");
    }
    setYear(y);
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 == 0)) {
        flag = true;
    }
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(m < 1 || m > 12) {
        throw std::runtime_error("Please enter value in range 1 - 12");
    }
    setMonth(m);
    if(flag) {
        arr[1] += 1;
    }
    if(d < 1 || d > arr[m-1]) {
        throw std::runtime_error("Please enter valid day value...");
    }
    setDay(d);
}

std::ostream& operator<<(std::ostream &os, const Date &obj) {
    os<<"Date : "<<obj.day<<"-"<<obj.month<<"-"<<obj.year<<std::endl;
}
