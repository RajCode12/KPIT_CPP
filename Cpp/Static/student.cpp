#include<iostream>
#include<cstring>
#include "student.h"

int Student::count;

Student::Student() {
    count++;
}
Student::Student(int roll, const char* name, double marks) {
    this->roll=roll;
    strcpy(this->name,name);
    this->marks=marks;
    count++;
}
void Student::display() {
    std::cout<<"Count : "<<count<<std::endl;
}