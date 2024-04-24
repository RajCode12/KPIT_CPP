#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include<cstring>
#include "Employee.h"

class Manager : public Employee{
    int numberOfSubordinates;
    int incrementPerSub;
    public:
        Manager();
        Manager(int,int);
        ~Manager();
        void Incentive();

        int getNumberOfSubordinates() const { return numberOfSubordinates; }
        void setNumberOfSubordinates(int numberOfSubordinates_) { numberOfSubordinates = numberOfSubordinates_; }

        int getIncrementPerSub() const { return incrementPerSub; }
        void setIncrementPerSub(int incrementPerSub_) { incrementPerSub = incrementPerSub_; }
        
};

#endif // MANAGER_H
