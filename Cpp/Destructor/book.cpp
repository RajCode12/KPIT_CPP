#include<iostream>
#include<cstring>
#include "book.h"

Book::Book() {
    bookName = new char[20];
    strcpy(bookName,"Java");
    price = 1000;
}
Book::Book(const char* bookName, int price) {
    this->bookName = new char[strlen(bookName)+1];        // otherwise segmentation fault
    strcpy(this->bookName,bookName);
    this->price = price;
}
Book::Book(const Book &obj) {
    price = obj.price;
    bookName = new char[strlen(obj.bookName)+1];    //assigning space in heap
    strcpy(bookName,obj.bookName);      // then copying the value of memory address
}
Book::~Book() {
    std::cout<<"Destructor called..."<<std::endl;
    delete bookName;
}
void Book::display() {
    std::cout<<bookName<<" "<<price<<std::endl;
}

void Book::operator=(const Book &obj)
{
    this->price = obj.price;
    delete this->bookName;//to avoid memory leakage
    this->bookName = new char[strlen(obj.bookName)+1];// assign new space
    strcpy(this->bookName,obj.bookName);
}

Book Book::operator+(const Book &obj)
{
    Book res;
    res.bookName = new char[(strlen(bookName) + strlen(obj.bookName))+1];
    res.setBookName(strcat(bookName,obj.bookName));
    res.setPrice(price + obj.price);
    return res;
}
