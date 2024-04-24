#include<iostream>
#include<cstring>
#include "SalesPerson.h"

SalesPerson::SalesPerson() {
    //Here, First base class default constructor will be called
    std::cout<<"SalesPerson ctor..."<<std::endl;
}
//sequence should be same as parameterized ctor of Employee class
SalesPerson::SalesPerson(int id, std::string name, double d, double amount, double comm) : 
    Employee(id,name,d), salesAmount(amount), commRate(comm)
{
    
}
SalesPerson::~SalesPerson() {
    std::cout<<"SalesPerson dtor..."<<std::endl;
}
double SalesPerson::calNetSalary()
{
    return Employee::calNetSalary() + salesAmount*commRate;
}
void SalesPerson::print()
{
    std::cout<<"SalesPerson print..."<<std::endl;
}
void SalesPerson::display()
{
    Employee::display();
    std::cout<<"Sales Amount : "<<salesAmount<<std::endl;
    std::cout<<"Commision Rate : "<<commRate<<std::endl;
}
