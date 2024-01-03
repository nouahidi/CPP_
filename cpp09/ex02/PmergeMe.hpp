#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <limits>
#include <utility>
#include <time.h>
#include <sys/time.h>


class PmergeMe {
	private:
		bool				tmpFlag;
		size_t				tmp;
		std::vector<int>	Cont1;
		std::deque<int>		Cont2;
		std::vector<int>	Inp;
		clock_t				VecStartTime;
		clock_t				VecEndTime;
		clock_t				DeqStartTime;
		clock_t				DeqEndTime;
	public:
		PmergeMe();
		PmergeMe(char **av, int ac);
		PmergeMe(const PmergeMe &Obj);
		PmergeMe	&operator=(const PmergeMe &Obj);
		~PmergeMe();
		void	Display_Nbr();
		void	Display_Sort_Nbr();
};

void		recursiveSort(std::vector<std::pair<int, int> >& pairVector, int index);
void	Sort_Nbr_Vec(std::vector<int> &chain, std::deque<int> &pend, std::vector<int> Inp, bool tmpFlag, int tmp);
void	Sort_Nbr_Deq(std::deque<int> &chain, std::vector<int> &pend, std::vector<int> Inp, bool tmpFlag, int tmp);
size_t 		MyAtoi(std::string str, bool *flag);
std::vector<long long>	GenerateJacobsthalNb(int	len);
std::string	skip_Space(std::string str);

# endif