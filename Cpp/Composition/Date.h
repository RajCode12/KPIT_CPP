#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<cstring>

class Date {
    int day;
    int month;
    int year;
    public: 
        Date();
        Date(int,int,int);
        //use for display
        friend void operator<<(std::ostream &ob, const Date &obj);
};

#endif // DATE_H
