#ifndef SELL_H
#define SELL_H

#include<iostream>
#include<cstring>

enum dishType{Burger=1,Pizza};

class Sell {
    char* itemName;
    int itemCost;
    int amount;
    dishType dish;
    public: 
        Sell();
        Sell(const char* , int);
        ~Sell();
        void sellItem();

        const char* getItemName() const { return itemName; }
        void setItemName(char* itemName_) { 
            itemName = new char[20];
            strcpy(itemName,itemName_);
         }

        int getItemCost() const { return itemCost; }
        void setItemCost(int itemCost_) { itemCost = itemCost_; }

        int getAmount() const { return amount; }
        void setAmount(int amount_) { amount = amount_; }
        
        friend std::ostream& operator<<(std::ostream &os, const Sell &obj);
};

#endif // SELL_H
