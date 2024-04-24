#include<iostream>
#include<cstring>
#include<exception>
#include<limits>
#include "Player.h"

float findMinAvgScore(Player parr[2], int size) {
    float min = parr[0].averageScore();
    for(int i = 1; i < size; i++) {
        if(parr[i].averageScore() > min) {
            min = parr[i].averageScore();
        }
    }
    return min;
}

void showPlayers(Player parr[2], int size, playerType tp) {
    bool flag = false;
    for(int i = 0; i < size; i++) {
        if(parr[i].getType() == tp) {
            flag = true;
            std::cout<<parr[i];
            std::cout<<"****************"<<std::endl;
        }
    }
    if(!flag) {
        throw std::runtime_error("No Player Found...");
    }
}

int main() {

    //player array of size 2
    Player p[2];
    for(int i = 0; i < 2; i++) {
        std::cout<<"Enter "<<i+1<<" Player Details...."<<std::endl;
        std::cin>>p[i]; //input operator overloaded for custom objects
    }
    std::cout<<"******************************"<<std::endl;

    // == operator check
    bool res = p[0] == p[1];
    if(res) {
        std::cout<<"Player 1 Average Score match with Player 2 Average Score"<<std::endl;
    } else {
        std::cout<<"Player 1 Average Score does not match with Player 2 Average Score"<<std::endl;
    }
    std::cout<<"******************************"<<std::endl;

    // findMinAverage check
    float avg = findMinAvgScore(p,2);
    std::cout<<"Minimum Average Score : "<<avg<<std::endl;
    std::cout<<"******************************"<<std::endl;

    // show Players
    int n;
    try {
        std::cout<<"Enter Player Type : "<<std::endl;
        std::cout<<"1 -> ARCHIEVERS ....... 2 -> EXPLORERS"<<std::endl;
        std::cin>>n;
        if(std::cin.fail() || (n != 1 && n != 2)) {
            throw std::runtime_error("Please enter 1 or 2...");
        }
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    playerType t;
    switch (n)
    {
    case 1:
        t = ARCHIEVERS;
        break;
    case 2:
        t = EXPLORERS;
        break;
    default:
        break;
    }
    try {
        showPlayers(p,2,t);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
        std::cout<<"******************************"<<std::endl;
    }

    // [] operator check
    int idx;
    try {
        std::cout<<"Enter index value to be found : "<<std::endl;
        std::cin>>idx;
        if(std::cin.fail() || (idx < 0 || idx > 1)) {
            throw std::runtime_error("Index out of range...");
        }
        int ans = p->getArr()[0];
        std::cout<<"Player score at index "<<idx<<" is : "<<ans<<std::endl;
        std::cout<<"******************************"<<std::endl;
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    // copy constructor check
    Player p1(p[0]);
    std::cout<<p1;
    std::cout<<"******************************"<<std::endl;

    // = operator check
    Player p2 = p[1];
    std::cout<<p2;
    std::cout<<"******************************"<<std::endl;

    return 0;
}