#include<cstring>
#include<iostream>

class Student {
    int roll;
    char name[20];
    double marks;
    public:
        Student();
        void display();


        int getRoll() const { return roll; }
        void setRoll(int roll_) { roll = roll_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        double getMarks() const { return marks; }
        void setMarks(double marks_) { marks = marks_; }
};