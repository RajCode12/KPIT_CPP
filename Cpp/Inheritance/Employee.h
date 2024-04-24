#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<cstring>

class Employee {
    int empId;
    std::string empName;
    double salary;
    double hra, ma, ptax;
    void calAllowance() {   //private method
        hra = salary*0.05;
        ma = salary*0.02;
        ptax = salary*0.03;
    }
    public:
        Employee();
        Employee(int,std::string,double);
        virtual ~Employee();
        virtual double calNetSalary();

        //pure virtual function
        //All the derived class must inherit calNetSalary() - like interface in java
        //virtual double calNetSalary()=0;

        //void display
        virtual void display(); //run-time binding
};

#endif // EMPLOYEE_H
