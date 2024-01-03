#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base *generate(void) {
    int choice = std::rand() % 3;

    switch (choice) {
    case 0: return (new A());
    case 1: return (new B());
    puts("here");
    case 2: return (new C());
    default: return (nullptr);
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A";
    else if (dynamic_cast<B*>(p))
        std::cout << "B";
    else if (dynamic_cast<C*>(p))
        std::cout << "C";
    else
        std::cout << "cast failed";
}

void identify(Base& p) {
    identify(&p);
}