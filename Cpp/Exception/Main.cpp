#include<iostream>
#include<cstring>
#include "AgeLimitException.h"
#include "Vote.h"

int main() {
    int count = 0;
    bool flag = true;
    while(true) {
        try {
            std::cout<<"Enter Your Age : "<<std::endl;
            int age;
            std::cin>>age;
            Vote v(age);
            v.canVote();
            flag = true;
        } catch(AgeLimitException e) {
            std::cout<<e.what()<<std::endl;
            flag = false;
        }
        count++;
        if(flag || count == 3) break;
    }
}