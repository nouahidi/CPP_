#include "Data.hpp"

Data::Data(){
    this->value = 42;
}
Data::Data(int value) : value(value){}
Data::Data(const Data &Obj){
    *this = Obj;
}
Data    &Data::operator=(const Data &Obj){
    if (this != &Obj)
        *this = Obj;
    return (*this);
}
int Data::getvalue(){
    return (value);
}
Data::~Data(){}