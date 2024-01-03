#include "ScalarConverter.hpp"

int main(int ac , char ** av)
{
    if(ac == 2)
        ScalarConverter::scalarConverter(av[1]);
    else 
        std::cerr << "ERROR" << std::endl;
}