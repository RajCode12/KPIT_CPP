#include<cstring>

class Customer {
    int id;
    char* name;
    double itemPrice[3];
    static int gst;
    public:
        Customer(); //constructor
        Customer(int id, const char* name,const double* getItemPrice); //parameterized constructor
        void display(); //non-static function
        double calCharges();
        ~Customer();    //destructor
        Customer(const Customer &);

        int getId() const { return id; }
        void setId(int id_) { id = id_; }

        const char* getName() const { return name; }
        void setName(const char* name_) { strcpy(name,name_); }

        const double* getItemPrice() const { return itemPrice; }
        void setItemPrice(double itemPrice_[3]) {
            for(int i = 0; i < 3; i++) {
                itemPrice[i] = itemPrice_[i];
            }
         }
};