#include<iostream>
#include "book.h"

int main() {

  //  Book b; //stack memory
    //Book *b1 = new Book();  //heap memory
   // Book *b2 = new Book("Angular",3000);
    //Book b3(b); -> gives segmentation fault bcoz Book b has a pointer (pointer address will be copied)
    // this is called shallow copy
    // we have to do deep copy
    Book b22("aaa",600);
    Book b23("bbb",900);
    Book b3(b22);

    // char nm[20];
    // int p;

    // std::cout<<"Enter Book Name : "<<std::endl;
    // std::cin>>nm;
    // b.setBookName(nm);

    // std::cout<<"Enter Price of "<<nm<<" : "<<std::endl;
    // std::cin>>p;
    // b.setPrice(p);

    // b.display();
    // b1->display();
    b22.display();
    b3.display();
    b23.display();

    //+ operator overload
    Book b1 = b22 + b23;
    b1.display();

    //assignment operator overload
    b23 = b22;
    b23.display();

   // delete b1;  // to indicate the destructor to free the heap memory first
   // delete b2;

  //  Book *b1 = new Book();
  //  Book *b2[5];

  //  delete b1;
  //  delete b2;
    return 0;
}