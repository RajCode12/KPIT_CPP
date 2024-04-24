#include<iostream>
#include<cstring>
#include "employee.h"

Employee::Employee()
{

}

Employee::Employee(int, std::string, double)
{
}

void Employee::calTotalSalary()
{
}

Employee::Employee(int id, const char *name, double salary)  
{
    this->id=id;
    strcpy(this->name,name);
    this->salary=salary;
}
void Employee::display() {
    std::cout<<id<<" "<<name<<" "<<salary<<std::endl;
}



