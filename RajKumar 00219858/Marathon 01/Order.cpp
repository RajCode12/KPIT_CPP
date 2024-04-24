#include "Order.h"
#include<cstring>

int Order::count = 0; // static variable initialization
Order::Order() : orderId(1), orderValue(1000), discount(10), type(OrderType::MARKET)
{
    count++;
    std::cout<<"\n ddd";
}

Order::Order(int id, double value, double dis, OrderType ty) : orderId(id), orderValue(value),
         discount(dis), type(ty) //member initializer list
{
    count++;
    std::cout<<"\n para ";
}

int Order::numberOfOrders()
{
    return count;
}

void Order::display()
{
    std::cout<<"Order Type : "<<getType()<<std::endl; //to get enum type
    std::cout<<"Order Id : "<<orderId<<std::endl;
    std::cout<<"Order Value : "<<orderValue<<std::endl;
    std::cout<<"Discount : "<<discount<<std::endl;
    std::cout<<"Total Orders : "<<count<<std::endl;
}


