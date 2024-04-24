#include<iostream>
#include<cstring>
#include<exception>
#include<limits>
#include "Inventory.h"

void find(Inventory arr[3], int size, int code) {
    bool flag = false;
    for(int i = 0; i < size; i++) {
        if(arr[i].getProductCode() == code) {
            flag = true;
            std::cout<<"Product Code : "<<arr[i].getProductCode()<<std::endl;
            std::cout<<"Description : "<<arr[i].descriptionOfProduct()<<std::endl;
            std::cout<<"Balance Stock : "<<arr[i].balanceStock()<<std::endl;
            switch (arr[i].getType())
            {
            case 1:
                std::cout<<"Product Type : ACCESSORIES"<<std::endl;
                break;
            case 2:
                std::cout<<"Product Type : SHOPPING"<<std::endl;
                break;
            default:
                break;
            }
            break;
        }
    }
    if(!flag) {
        throw std::runtime_error("Product Not Found...");
    }
}

int main() {

    //Test1
    std::cout<<"************Test 1***********"<<std::endl;
    //single object of inventory
    Inventory inv("Product is about accessories",30,105,ACCESSORIES);
    
    //purchase test
    inv.saleProduct(5);
    std::cout<<"***********************"<<std::endl;
    inv.saleProduct(4);
    std::cout<<"***********************"<<std::endl;
    inv.purchaseProduct(10);

    //sale test
    std::cout<<"***********************"<<std::endl;
    try {
        inv.saleProduct(25);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }

    //Test2
    std::cout<<"***********Test 2************"<<std::endl;
    Inventory inv3("Product is about shoping",50,104,SHOPPING);

    //purchase test
    std::cout<<"***********************"<<std::endl;
    inv3.purchaseProduct(10);

    //sale test
    std::cout<<"***********************"<<std::endl;
    try {
        inv3.saleProduct(45);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
    
    //Test3 
    std::cout<<"***********Test 3************"<<std::endl;
    //inventory of size 3
    Inventory inv2[3] = {Inventory("Product 1",20,102,ACCESSORIES), 
                        Inventory("Product 2",30,103,SHOPPING),
                        Inventory("Product 3",40,104,ACCESSORIES)};

    //search test
    std::cout<<"***********************"<<std::endl;
    try {
        find(inv2,3,102);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }
    std::cout<<"***********************"<<std::endl;
    try {
        find(inv2,3,109);
    } catch(std::exception &e) {
        std::cout<<e.what()<<std::endl;
    }

    //display all Shoping Products
    std::cout<<"***********************"<<std::endl;
    for(int i = 0; i < 3; i++) {
        if(inv2[i].getType() == 2) {
            switch (inv2[i].getType())
            {
            case 1:
                std::cout<<"Product Type : ACCESSORIES"<<std::endl;
                break;
            case 2:
                std::cout<<"Product Type : SHOPPING"<<std::endl;
                break;
            default:
                break;
            }
            std::cout<<"Product Code : "<<inv2[i].getProductCode()<<std::endl;
            std::cout<<"Description : "<<inv2[i].descriptionOfProduct()<<std::endl;
            std::cout<<"Balance Stock : "<<inv2[i].balanceStock()<<std::endl;
        }
    }
}