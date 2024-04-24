#include<iostream>
#include "student.h"

void maxAvgOfStudents(Student st[3]) {
    double res = 0;
    for(int i = 0; i < 3; i++) {
        double avg = st[i].getAverage();
        if(avg > res) {
            res = avg;
        }
    }
    std::cout<<res<<std::endl;
}

int main() {
    double marks1[3] = {78,89,90};
    double marks2[3] = {90,99,94};
    double marks3[3] = {67,78,98};
    Student s[3] = {Student(1,"Raj",marks1),Student(2,"Dev",marks2),Student(3,"Aditya",marks3)};
    
    maxAvgOfStudents(s);
    return 0;
}