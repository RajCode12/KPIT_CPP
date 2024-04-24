#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<cstring>

enum playerType{ARCHIEVERS=1,EXPLORERS};

class Player {
    int* arr;
    unsigned int numberOfMatchesPlayed;
    char* name;
    playerType type;
    public:
        Player();
        Player(int);
        Player(const Player &);
        ~Player();
        float averageScore();

        int* getArr() const { return arr; }
        void setArr(const int* arr_) {
            delete[] arr;
            arr = new int[numberOfMatchesPlayed];
            for(int i = 0; i < numberOfMatchesPlayed; i++) {
                arr[i] = arr_[i];
            }
         }

        unsigned int getNumberOfMatchesPlayed() const { return numberOfMatchesPlayed; }
        void setNumberOfMatchesPlayed(unsigned int numberOfMatchesPlayed_) { numberOfMatchesPlayed = numberOfMatchesPlayed_; }

        char* getName() const { return name; }
        void setName(const char* name_) { 
            delete name;
            name = new char[20];
            strcpy(name,name_);
        }

        playerType getType() const { return type; }
        void setType(const playerType &type_) { type = type_; }

        bool operator==(Player &obj);
        void operator=(const Player &obj);
        int &operator[](int);
        
        friend std::ostream& operator<<(std::ostream& os, const Player &obj);
        friend std::istream& operator>>(std::istream& is, Player &obj);
};

#endif // PLAYER_H
