#include<iostream>
#include "student.h"

int main() {
    int n;
    std::cout<<"Enter no of students : "<<std::endl;
    std::cin>>n;
    Student s[n];
    int r;
    char nm[20];
    double m;
    for(int i = 0; i < n; i++) {
        std::cout<<"Enter "<<i+1<< " student id : "<<std::endl;

        std::cin>>r;
        s[i].setRoll(r);

        std::cin>>nm;
        s[i].setName(nm);
        
        std::cin>>m;
        s[i].setMarks(m);
    }
    for(int i = 0; i < n; i++) {
        s[i].display();
    }
    return 0;
}
