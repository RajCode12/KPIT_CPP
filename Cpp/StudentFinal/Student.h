#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstring>

class Student {
    int roll;
    char* name;
    double marks[3];
    public:
        Student();
        Student(int,const char*, double mark[3]);
        ~Student();
        Student(const Student &obj);
        
        
        
        void operator=(const Student &obj);

        int getRoll() const { return roll; }
        void setRoll(int roll_) { roll = roll_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        const double* getMarks() const { return marks; }
        void setMarks(double marks_[3]) { 
            for(int i = 0; i < 3; i++) {
                marks[i] = marks_[i];
            }
        }
}

#endif // STUDENT_H
