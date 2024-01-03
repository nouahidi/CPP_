#include <iostream>

class test {
    public:
       virtual ~test(){};
};

class in_test : public test{

};

class out_test : public test{

};

int main (){
    test p;
    in_test l;
    out_test j;
    if (!dynamic_cast<out_test*>(&l))
        puts("here");
}