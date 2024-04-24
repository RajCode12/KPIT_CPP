#include<iostream>
#include<cstring>
#include "SalesPerson.h"
#include "Manager.h"
#include<typeinfo>

int main() {
    
    // SalesPerson sp1(1,"Raj",20000,1000000,0.02);
    // sp1.display();

    // SalesPerson *sp2 = new SalesPerson(1,"Raj",20000,1000000,0.02);
    // sp2->display;
    // delete sp2;

    //Parent-child -> only the data of Employee class
    //Compile-time Binding -> It will always call the display function a/o to type of pointer(left side)

    // Employee *e1 = new SalesPerson(1,"Raj",20000,1000000,0.02);
    // e1->display();
    // std::cout<<e1->calNetSalary()<<std::endl;
    
    //First solution is type casting -> But have to write for every object created
    //Second solution is virtual function 
    //In java, this function is automatically considered as virtual
    //After writting virtual, this is now Run-time binding -> display function a/o to type of object(right side)

    //If we create 5 objects -> Vptr is create 5 times(per object) but Vtable is created only once(per Class)

    //Note: Static and Friend function cannot be made virtual
    //Constructor also cannot be virtual
    //But Destructor can be virtual
    //Use virtual only for base class funtion -> derived class function will become virtual automatically
    //If we use virtual keyword with derived class function but not with the base class,
    

    //delete e1;
    //It will not call the destructor of SalesPerson(child) class
    //Problem : What if SalesPerson has pointer data member -> memory leakage
    //Solution : Destructor has to be made virtual in base class

    //Type casting
    //dynamic cast returns 0 on failure if it is pointer
    //dynamic cast throw exception if it is reference
    
    Employee e* = new Manager();
    Manager *m = dynamic_cast<Manager*>(e);

    //lsp
    //Parent ref - child object
    //default working -> common function(overriden function) + base class function
    //problem : special function of child class are not accessible although the object created is of child class
    //solution : typecaste the base ref to child class using dynamic casting

    return 0;
}
