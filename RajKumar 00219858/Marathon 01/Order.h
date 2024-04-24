#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include<cstring>

enum OrderType{MARKET=1,LIMIT,STOP};

class Order {
    int orderId;
    double orderValue;
    double discount;
    OrderType type; // enum object
    static int count;
    public:
        Order(); //default constructor
        Order(int,double,double,OrderType); // parameterized constructor
        void display();
        static int numberOfOrders();

        int getOrderId() const { return orderId; }
        void setOrderId(int orderId_) { orderId = orderId_; }

        double getOrderValue() const { return orderValue; }
        void setOrderValue(double orderValue_) { orderValue = orderValue_; }

        double getDiscount() const { return discount; }
        void setDiscount(double discount_) { discount = discount_; }

        OrderType getType() const { return type; }
        void setType(const OrderType &type_) { type = type_; }

        
        
};

#endif // ORDER_H
