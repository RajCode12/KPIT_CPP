#ifndef SALESPERSON_H
#define SALESPERSON_H

#include<iostream>
#include<cstring>
#include "Employee.h"

//All the members of the base class is inherited in derived class
//But private data members are never accessible in derived class
class SalesPerson : public Employee {
    double salesAmount, commRate;
    public:
        SalesPerson();
        SalesPerson(int,std::string,double,double,double);
        ~SalesPerson();
        void display();
        double calNetSalary();
        void print();
};

#endif // SALESPERSON_H
