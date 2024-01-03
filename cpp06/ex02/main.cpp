#include "Fonctions.hpp"

int main() {
    std::srand(std::time(0));
    Base* obj = generate();
    identify(obj);
    std::cout << std::endl;
    identify(*obj);
    std::cout << std::endl;
    delete obj;
    return 0;
}