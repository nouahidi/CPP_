#include "PmergeMe.hpp"

int main (int ac, char **av) {
	try {
		if (ac < 2)
			throw std::runtime_error("Invalid input");
		else {
			PmergeMe	pm(av, ac);
			pm.Display_Nbr();
			pm.Display_Sort_Nbr();
		}
	}

	catch (std::exception &e) {
		std::cerr<<e.what()<<std::endl;
	}
}