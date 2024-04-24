#include<iostream>
#include<cstring>
#include "Person.h"

Person::Person() {
    
}
Person::Person(std::string n,std::string c,std::string e,Address add, Vehicle v) :
name(n), contact(c), email(e), address(add), vehicle(v)
{

}
Person::~Person() {

}
void Person::setPerson()
{
    std::string n;
    std::cout<<"Person Name : ";
    std::cin>>n;
    std::string c;
    std::cout<<"Contact : ";
    std::cin>>c;
    std::string e;
    std::cout<<"Email : ";
    std::cin>>e;
    name = n;
    contact = c;
    email = e;
}
std::ostream &operator<<(std::ostream &os, const Person &obj)
{
    os<<"Person Name : "<<obj.name<<std::endl;
    os<<"Contact : "<<obj.contact<<std::endl;
    os<<"Email : "<<obj.email<<std::endl;
    std::cout<<obj.address;
    std::cout<<obj.vehicle;
}