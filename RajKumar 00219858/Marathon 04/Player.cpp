#include "Player.h"
#include<exception>
#include<limits>

Player::Player() : numberOfMatchesPlayed(2)
{
    arr = new int[2]{20,30};
}

Player::Player(int number) : numberOfMatchesPlayed(number)
{
    numberOfMatchesPlayed++;
}

Player::Player(const Player &obj)
{
    setNumberOfMatchesPlayed(obj.numberOfMatchesPlayed);
    delete name;
    delete[] arr;
    arr = new int[obj.numberOfMatchesPlayed];
    for(int i = 0; i < obj.numberOfMatchesPlayed; i++) {
        arr[i] = obj.arr[i];
    }
    setName(obj.name);
    strcpy(name,obj.name);
    setType(obj.type);
}

Player::~Player()
{
    delete[] arr;
    delete[] name;
}

float Player::averageScore()
{
   float avg = 0;
   for(int i = 0; i < numberOfMatchesPlayed; i++) {
        avg += arr[i];
   } 
   avg /= 3;
   return avg;
}

bool Player::operator==(Player &obj)
{
    if(averageScore() == obj.averageScore()) {
        return true;
    } else {
        return false;
    }
}

void Player::operator=(const Player &obj)
{
    setNumberOfMatchesPlayed(obj.numberOfMatchesPlayed);
    delete name;
    delete[] arr;
    arr = new int[obj.numberOfMatchesPlayed];
    for(int i = 0; i < obj.numberOfMatchesPlayed; i++) {
        arr[i] = obj.arr[i];
    }
    setName(obj.name);
    strcpy(name,obj.name);
    setType(obj.type);
}

int &Player::operator[](int index)
{
    return arr[index];
}

std::ostream &operator<<(std::ostream &os, const Player &obj)
{
    os<<"Player Name : "<<obj.name<<std::endl;
    switch(obj.getType()) {
        case ARCHIEVERS:
            os<<"Player Type : ARCHIEVERS"<<std::endl;
            break;
        case EXPLORERS:
            os<<"Player Type : EXPLORERS"<<std::endl;
            break;
        default:
            break;
    }
    os<<"Number of Matches Played : "<<obj.numberOfMatchesPlayed<<std::endl;
    os<<"Scores : "<<std::endl;
    for(int i = 0; i < obj.numberOfMatchesPlayed; i++) {
        std::cout<<obj.arr[i]<<" ";
    }
    std::cout<<" "<<std::endl;
}

bool alphaNumeric(char* n) {
    for(int i = 0; i < strlen(n); i++) {
        if(!((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z'))) {
            return false;
        } else {
            return true;
        }
    }
}

std::istream &operator>>(std::istream &is, Player &obj)
{
    while(true) {
        try {
            std::cout<<"Enter Player Name : "<<std::endl;
            char* n = new char[20];
            is>>n;
            if(is.fail() || !alphaNumeric(n)) {
                throw std::runtime_error("Please enter valid name...");
            }
            obj.setName(n);

            std::cout<<"Enter Player Type...."<<std::endl;
            std::cout<<"1 -> ARCHIEVERS ....... 2 -> EXPLORERS"<<std::endl;
            int num;
            is>>num;
            if(is.fail() || (num != 1 && num != 2)) {
                throw std::runtime_error("Please enter 1 or 2...");
            }
            switch(num) {
                case 1: 
                    obj.setType(ARCHIEVERS);
                    break;
                case 2:
                    obj.setType(EXPLORERS);
                    break;
                default:
                    break;
            }
            
            std::cout<<"Enter Number of Matches Played : "<<std::endl;
            int num2;
            is>>num2;
            if(is.fail() || (num2 < 1 || num2 > 100)) {
                throw std::runtime_error("Enter matches in range 1-100");
            }
            obj.setNumberOfMatchesPlayed(num2);

            std::cout<<"Enter scores of "<<num2<<" matches played..."<<std::endl;
            //const int *arr2[num2];
            for(int i = 0; i < num2; i++) {
                int val;
                is>>val;
                if(is.fail() || val < 0) {
                    throw std::runtime_error("Please enter valid scores....");
                }
                obj.arr[i] = val;
            }
            //obj.setArr(arr2);
            delete[] n;
            break;
        } catch(std::exception &e) {
            std::cout<<e.what()<<std::endl;
            is.clear();
            is.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }
}
