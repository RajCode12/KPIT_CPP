#include<iostream>
#include "student.h"
#include<cstring>

Student::Student() {
}
void Student::display()
{
    std::cout<<roll<<" "<<name<<" "<<marks<<std::endl;
}