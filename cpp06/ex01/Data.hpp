#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
    private:
        int value;
    public:
        Data();
        Data(int value);
        Data(const Data &Obj);
        ~Data();
        Data    &operator=(const Data &Obj);
        int     getvalue();
};

#endif