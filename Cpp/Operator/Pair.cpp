#include<iostream>
#include<cstring>
#include "Pair.h"

Pair::Pair() : a(0), b(0) {

}
Pair::Pair(int a1, int b1) : a(a1), b(b1) {
    
}
void Pair::display() {
    std::cout<<a<<" "<<b<<std::endl;
}

Pair Pair::operator+(const Pair &obj)
{
    Pair res;
    res.setA(a+obj.a);
    res.setB(b+obj.b);
    return res;
}

Pair Pair::operator-(const Pair &obj)
{
    Pair res;
    res.setA(obj.a-a);
    res.setB(obj.b-b);
    return res;
}
bool Pair::operator==(const Pair &obj) {
    if(a == obj.a && b == obj.b) {
        return true;
    }
    return false;
}
bool Pair::operator!=(const Pair &obj) {
    if(a != obj.a || b != obj.b) {
        return false;
    }
    return true;
}
Pair Pair::operator-()
{
    Pair obj;
    obj.setA(-a);
    obj.setB(-b);
    return obj;
}

//pre-increement operator
Pair& Pair::operator++()
{
    ++a;
    ++b;
    return *this;
}

//post-increment operator
Pair Pair::operator++(int) {
    Pair temp;
    temp.setA(a);
    temp.setB(b);
    
    a++;
    b++;
    return temp;
}
//do not use scope resolution in friend function

std::ostream &operator<<(std::ostream &cout, const Pair &obj)
{
    cout<<obj.a<<" "<<obj.b<<std::endl;
    return cout;
}

std::istream &operator>>(std::istream &cin, Pair &obj)
{
    int a1,b1;
    cin>>a1>>b1;
    obj.setA(a1);
    obj.setB(b1);
    return cin;
}
