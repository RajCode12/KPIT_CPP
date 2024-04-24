#include<iostream>
#include<cstring>
#include "Employee.h"

Employee::Employee() : empId(1), empName("Raj"), salary(20000) {
    std::cout<<"Employee ctor..."<<std::endl;
    calAllowance();
}
Employee::Employee(int id, std::string name, double s) : empId(id), empName(name), salary(s) {
    calAllowance();
}
Employee::~Employee() {
    std::cout<<"Employee dtor..."<<std::endl;
}
double Employee::calNetSalary() {
    return salary-hra-ma-ptax;
}
void Employee::display() {
    std::cout<<"Emp Id : "<<empId<<std::endl;
    std::cout<<"Emp Name : "<<empName<<std::endl;
    std::cout<<"Emp Salary : "<<salary<<std::endl;
}

