#include<iostream>
#include<cstring>
#include "Date.h"


Date::Date() {
    int y;
    std::cout<<"Enter year : ";
    std::cin>>y;
    // if(y < 1 || y > 10000) {
    //     throw "error";
    // }
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool flag = false;
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        flag = true;
    } else {
        flag = false;
    }
    if(flag) {
        arr[1] = 29;
    }
    int m;
    std::cout<<"Enter month : ";
    std::cin>>m;
    // if(m < 1 || m > 12) {
    //     throw "error";
    // }
    int d;
    std::cout<<"Enter Day : ";
    std::cin>>d;
    // if(d < 1 || d > arr[m-1]) {
    //     throw "error";
    // }
    this->day = d;
    this->month = m;
    this->year = y;
}
Date::Date(int d, int m, int y) : day(d), month(m), year(y){
    
}
void operator<<(std::ostream &os, const Date &obj) {
    os<<"Date : "<<obj.day<<"-"<<obj.month<<"-"<<obj.year<<std::endl;
}
