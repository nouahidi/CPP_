#include "RPN.hpp"

int main (int ac, char **av) {
	try {
		if (ac != 2)
			return (std::cout<<"Input Error"<<std::endl, 1);
		RPN rpn(av[1]);
	}
	catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
}
