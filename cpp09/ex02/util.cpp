#include "PmergeMe.hpp"

void recursiveSort(std::vector<std::pair<int, int> >& pairVector, int index) {
	if (index < static_cast<int>(pairVector.size())) {
		int minIndex = index;
		for (int cmp = index + 1; cmp < static_cast<int>(pairVector.size()); ++cmp) {
			if (pairVector[cmp].first < pairVector[minIndex].first) {
				minIndex = cmp;
			}
		}
		if (minIndex != index) {
			std::swap(pairVector[index], pairVector[minIndex]);
		}
		recursiveSort(pairVector, index + 1);
	}
}

std::string	skip_Space(std::string str) {
	size_t start = str.find_first_not_of(" \t");
	if (start == std::string::npos)
		return str;
	size_t end = str.find_last_not_of(" \t");
	return (str.substr(start, end - start + 1));
}

size_t  MyAtoi(std::string str, bool *flag) {
	size_t  nbr = 0;
	int     i = 0;

	str = skip_Space(str);
	if (str[0] == '+')
		i++;
	if (i == (int)str.size())
			return (*flag = 1, 0);
	for (int j = i; j < (int)str.size(); j++)
		if (!isdigit(str[j]))
			return (*flag = 1, 0);
	for (; i < (int)str.size(); i++)
		nbr = (10 * nbr) + (str[i] - '0');
	return (*flag = 0, nbr);
}

std::vector<long long>	GenerateJacobsthalNb(int	len) {
	std::vector<long long>	Jacob;
	long long				Jn_1 = 1;
	long long				Jn_2 = 0;

	for (int i = 0; i < len; i++) {
		Jacob.push_back(Jn_1 + (2 * Jn_2));
		Jn_2 = Jn_1;
		Jn_1 = Jacob[Jacob.size() - 1];
	}
	return (Jacob);
}

void	binarySearch_Vec(std::vector<int> &Cont1, std::deque<int> &Cont2) {
	std::vector<long long>	Jacob = GenerateJacobsthalNb((int)Cont2.size() + 1);
	
	long long					first = Jacob[0];
	long long					last = Jacob[1];
	std::vector<int>::iterator	it;
	int							i = 1;
	int							len = Cont1.size() + Cont2.size() - 1;

	for (;i < (int)Jacob.size();i++) {
		first = Jacob[i - 1];
		last = Jacob[i];
		for (;first < last;) {
			if ((int)Cont1.size() >= len)
				break ; 
			if (Cont2.size() <= (size_t)last)
				last = Cont2.size();
			if (last <= first)
				break ;
			it = std::lower_bound(Cont1.begin(), Cont1.end(), Cont2[last - 1]);
			Cont1.insert(it, Cont2[last - 1]);
			last--;
		}
		if ((int)Cont1.size() >= len)
			break ; 
	}
}

void	binarySearch_Deq(std::deque<int> &Cont1, std::vector<int> &Cont2) {
	std::vector<long long>	Jacob = GenerateJacobsthalNb((int)Cont2.size() + 1);
	
	long long					first = Jacob[0];
	long long					last = Jacob[1];
	std::deque<int>::iterator	it;
	int							i = 1;
	int							len = Cont1.size() + Cont2.size() - 1;

	for (;i < (int)Jacob.size();i++) {
		first = Jacob[i - 1];
		last = Jacob[i];
		for (;first < last;) {
			if ((int)Cont1.size() >= len)
				break ; 
			if (Cont2.size() <= (size_t)last)
				last = Cont2.size();
			if (last <= first)
				break ;
			it = std::lower_bound(Cont1.begin(), Cont1.end(), Cont2[last - 1]);
			Cont1.insert(it, Cont2[last - 1]);
			last--;
		}
		if ((int)Cont1.size() >= len)
			break ; 
	}
}

void	Sort_Nbr_Vec(std::vector<int> &chain, std::deque<int> &pend, std::vector<int> Inp, bool tmpFlag, int tmp) {
	tmpFlag = 0;
	if (Inp.empty() || Inp.size() < 2)
		return ;
	if (Inp.size() % 2) {
		tmp = Inp[Inp.size() - 1];
		Inp.erase(Inp.end() - 1);
		tmpFlag = 1;
	}
	std::vector<std::pair<int, int> > pairVector;
	for (int i = 0;i < (int)Inp.size();i += 2) {
		if (Inp[i] > Inp[i + 1])
			pairVector.push_back(std::make_pair(Inp[i],Inp[i + 1]));
		else
			pairVector.push_back(std::make_pair(Inp[i + 1],Inp[i]));
	}
	recursiveSort(pairVector, 0);
	chain.push_back(pairVector[0].second);
	for (int i = 0;i < (int)pairVector.size();i++)
		chain.push_back(pairVector[i].first);
	for (int i = 0;i < (int)pairVector.size();i++)
		pend.push_back(pairVector[i].second);
	binarySearch_Vec(chain, pend);
	if (tmpFlag) {
		std::vector<int>::iterator	it;
		it = std::lower_bound(chain.begin(), chain.end(), tmp);
		chain.insert(it, tmp);
	}
}

void	Sort_Nbr_Deq(std::deque<int> &chain, std::vector<int> &pend, std::vector<int> Inp, bool tmpFlag, int tmp) {
	tmpFlag = 0;
	if (Inp.empty() || Inp.size() < 2)
		return ;
	if (Inp.size() % 2) {
		tmp = Inp[Inp.size() - 1];
		Inp.erase(Inp.end() - 1);
		tmpFlag = 1;
	}
	std::vector<std::pair<int, int> > pairVector;
	for (int i = 0;i < (int)Inp.size();i += 2) {
		if (Inp[i] > Inp[i + 1])
			pairVector.push_back(std::make_pair(Inp[i],Inp[i + 1]));
		else
			pairVector.push_back(std::make_pair(Inp[i + 1],Inp[i]));
	}
	recursiveSort(pairVector, 0);
	chain.push_back(pairVector[0].second);
	for (int i = 0;i < (int)pairVector.size();i++)
		chain.push_back(pairVector[i].first);
	for (int i = 0;i < (int)pairVector.size();i++)
		pend.push_back(pairVector[i].second);
	binarySearch_Deq(chain, pend);
	if (tmpFlag) {
		std::deque<int>::iterator	it;
		it = std::lower_bound(chain.begin(), chain.end(), tmp);
		chain.insert(it, tmp);
	}
}
