#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include<cstring>

enum ProductType{ACCESSORIES=1,SHOPPING};

class Inventory {
    std::string description_of_product;
    int balance_stock;
    int productCode;
    ProductType type;   //enum object
    public:
        Inventory();    //default constructor
        Inventory(std::string,int,int,ProductType); //parameterized constructor
        void purchaseProduct(int);
        void saleProduct(int);

        std::string descriptionOfProduct() const { return description_of_product; }
        void setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

        int balanceStock() const { return balance_stock; }
        void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

        int getProductCode() const { return productCode; }
        void setProductCode(int productCode_) { productCode = productCode_; }

        ProductType getType() const { return type; }
        void setType(const ProductType &type_) { type = type_; }
        
};

#endif // INVENTORY_H
