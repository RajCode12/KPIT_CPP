#include<iostream>
#include<cstring>
#include<exception>
#include<limits>
#include "OnlineExam.h"
#include "OfflineExam.h"

int main() {
    //onlineExam array of size 3
    std::cout<<"****************************"<<std::endl;
    OnlineExam *online[3];
    try {
        Date date1(1,7,2020);
        Date date2(2,11,2022);
        Date date3(3,9,2023);
        online[0] = new OnlineExam(METTL,101,date1);
        online[1] = new OnlineExam(SYNAP,102,date2);
        online[2] = new OnlineExam(METTL,103,date3);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }

    //display onlineExam array
    std::cout<<"****************************"<<std::endl;
    for(int i = 0; i < 3; i++) {
        if(online[i]->examPlatform() == METTL) {
            online[i]->display();
            std::cout<<"****************************"<<std::endl;
        }
    }
    //offlineExam array of size 3
    std::cout<<"****************************"<<std::endl;
    OfflineExam offline[3];
    try {
        offline[0] = {Address("Pune",1012),101,Date(1,7,2020)};
        offline[1] = {Address("Delhi",1023),102,Date(2,9,2022)};
        offline[2] = {Address("Noida",1045),103,Date(12,12,2023)};
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
    //display onlineExam based on city
    std::cout<<"****************************"<<std::endl;
    try {
        bool flag = false;
        std::string city;
        std::cout<<"Enter City to be found : "<<std::endl;
        std::cin>>city;
        if(std::cin.fail() || city.empty()) {
            throw std::runtime_error("Please enter a valid city");
        }
        for(int i = 0; i < 3; i++) {
            if(offline[i].examLocation().getCity() == city) {
                flag = true;
                offline[i].display();
                std::cout<<"****************************"<<std::endl;
            }
        }
        if(!flag) {
            throw std::runtime_error("Exam Details of entered city not found...");
        }
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    //free memory
    delete online;

    return 0;
}