#include "BitcoinExchange.hpp"

int  main (int ac, char **av) {
	try {
		if (ac != 2)
			return (std::cout<<"ERROR"<<std::endl, 1);
		Bitcoin bt;
		bt.setData(av[1]);
	}
	catch (const std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
}