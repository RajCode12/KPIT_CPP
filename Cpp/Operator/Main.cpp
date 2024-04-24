#include<iostream>
#include "Pair.h" 

int main() {
    Pair p1(2,5);
    Pair p2(3,4);

    Pair p3 = p1+p2;
    Pair p4 = p1-p2;
    Pair p5 = -p4;
    bool r1 = p1==p2;
    bool r2 = p1!=p2;
    Pair p6;
    std::cin>>p6;
    
    std::cout<<p1<<p2;
    std::cout<<p3;
    std::cout<<p4;
    std::cout<<p5;
    std::cout<<p6;
    std::cout<<r1;
    std::cout<<r2;
}