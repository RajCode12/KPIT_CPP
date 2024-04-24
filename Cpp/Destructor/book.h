#include<cstring>

class Book {
    char* bookName;
    int price;
    public:
        Book();//constructor
        Book(const char* ,int);//parameterized constructor
        ~Book();//destructor
        Book(const Book &);//copy constructor
        void display();

        void operator=(const Book &obj);
        Book operator+(const Book &obj);

        const char* getBookName() const { return bookName; }
        void setBookName(const char* bookName_) { strcpy(bookName,bookName_); }

        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }
    
};