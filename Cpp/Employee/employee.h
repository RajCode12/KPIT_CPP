#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<cstring>
#include<iostream>

class Employee {
    int id;
    char name[20];
    double salary;
    public:
        Employee();
        Employee(int id,const char* name,double salary);
        void display();

        // << and >> are binary operators
        friend void operator<<(std::ostream &os, const Complex &obj);
        friend void operator>>(std::istream &is, const Complex &obj);

        //subsricpt operator overloading
        char operator[](int index) {    
            return name[index];
        }

        int getId() const { return id; }
        void setId(int id_) { id = id_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        double getSalary() const { return salary; }
        void setSalary(double salary_) { salary = salary_; }
};

#endif // EMPLOYEE_H
