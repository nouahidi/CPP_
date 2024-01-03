#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
		throw	std::runtime_error("ERROR");
}

PmergeMe::PmergeMe(char **av, int ac) {
	size_t  nbr = 0;
	bool    flag = 0;
	for (int i = 1; i < ac; i++) {
		if (!av[i][0])
			throw	std::runtime_error("ERROR");
		nbr = MyAtoi(av[i], &flag);
		if (flag || nbr > INT_MAX)
			throw	std::runtime_error("ERROR");
		Inp.push_back(nbr);
	}
}

PmergeMe::PmergeMe(const PmergeMe &Obj) {
	*this = Obj;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &Obj) {
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

PmergeMe::~PmergeMe() {
	int 	len;
	len = Inp.size();
	if (tmpFlag)
		len++;
	double timeVector = static_cast<double>(VecEndTime - VecStartTime)/CLOCKS_PER_SEC * 1e6;
	double timeDeque = static_cast<double>(DeqEndTime - DeqStartTime)/CLOCKS_PER_SEC * 1e6;
	std::cout << "Time to process a range of " << len << " elements with std::"<<"[vector] : "<<timeVector<<" ms" << std::endl;
	std::cout << "Time to process a range of " << len << " elements with std::"<<"[deque] : "<<timeDeque<<" ms" << std::endl;
}

void	PmergeMe::Display_Nbr() {
	std::cout<<"Befor: ";
	for (int i = 0; i < (int)Inp.size();i++)
		std::cout<<Inp[i]<<" ";
	if (tmpFlag)
		std::cout<<tmp<<" ";
	std::cout<<std::endl;
}

void	PmergeMe::Display_Sort_Nbr() {
	VecStartTime = clock();
	Sort_Nbr_Vec(Cont1, Cont2, Inp, tmpFlag, tmp);
	VecEndTime = clock();
	std::cout<<"After: ";
	if (Inp.size() < 2)
		std::cout<<Inp[0]<<" ";
	for (int i = 0; i < (int)Cont1.size();i++)
		std::cout<<Cont1[i]<<" ";
	std::cout<<std::endl;
	Cont1.clear();
	Cont2.clear();
	DeqStartTime = clock();
	Sort_Nbr_Deq(Cont2, Cont1, Inp, tmpFlag, tmp);
	DeqEndTime = clock();
}
