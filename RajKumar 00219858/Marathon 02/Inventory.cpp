#include "Inventory.h"
#include<exception>

Inventory::Inventory() : description_of_product("Product Details"), balance_stock(25), 
                productCode(101), type(ProductType::ACCESSORIES)    //default value
{
}

Inventory::Inventory(std::string val, int stock, int code, ProductType pt) : 
description_of_product(val), productCode(code), type(pt)//member initializer list
{
    if(stock < 20) {
        balance_stock += (20-stock);
    } else {
        balance_stock = stock;
    }
}

void Inventory::purchaseProduct(int purchase)
{
    balance_stock += purchase;
    std::cout<<"Purchase Successful..."<<std::endl;
    std::cout<<"Balance stock : "<<balance_stock<<std::endl;
}

void Inventory::saleProduct(int sale)
{
    balance_stock -= sale;
    if(balance_stock < 20) {
        std::cout<<"Balance stock : "<<balance_stock<<std::endl;
        throw std::runtime_error("Low Stock Level");
    } else {
        std::cout<<"Sale Successful..."<<std::endl;
        std::cout<<"Current Stock : "<<balance_stock<<std::endl;
    }
}
