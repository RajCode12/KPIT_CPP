#include<iostream>
#include<cstring>

Student::Student() : roll(1) {
    this.name = new char[20];
}
Student::Student(int r, const char* n, double mark[3]) : roll(r) {
    this.name = new char[20];
    strcpy(name,n);
    for(int i = 0; i < 3; i++) {
        marks[i] = mark[i];
    }
}
Student::~Student() {
    delete name;
}
Student::Student(const Student &obj) {
    roll.setRoll(obj.roll);
    this.name = new char[20];
    name.setName(obj.name);
    for(int i = 0; i < 3; i++) {
        marks[i].setMarks(obj.marks[i]);
    }
}