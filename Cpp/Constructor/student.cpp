#include<iostream>
#include<cstring>
#include "student.h"

Student::Student() {

}
Student::Student(int roll, const char* name, double marks[3]) {
    this->roll=roll;
    strcpy(this->name,name);
    for(int i = 0; i < 3; i++) {
        this->marks[i] = marks[i];
    }
}
double Student::getAverage() {
    double sum = 0;
    for(int i = 0; i < 3; i++) {
        sum += marks[i];
    }
    return sum/3; 
}