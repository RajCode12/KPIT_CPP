#ifndef BILLNOTFOUNDEXCEPTION_H
#define BILLNOTFOUNDEXCEPTION_H

#include<string>
#include<exception>

class BillNotFoundException : public std::exception{
    std::string err;
    public:
        BillNotFoundException() {}
        BillNotFoundException(std::string message) {
            err = message;
        }
        const std::string what() {
            return err;
        }
};

#endif // BILLNOTFOUNDEXCEPTION_H
