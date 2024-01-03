#include "Span.hpp"

Span::Span() : N(1) {}
Span::Span(unsigned int N) : N(N){}
Span::~Span() {}
Span::Span(const Span &Obj) {
	*this = Obj;
}

Span    &Span::operator=(const Span &Obj) {
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

void    Span::addNumber(int Elem) {
	if (Cont.size() < N)
		Cont.push_back(Elem);
	else
		throw   std::out_of_range("Span Is Full");
}

int     Span::longestSpan(void) {
	if (Cont.size() < 2)
		throw   std::logic_error("Cannot find span with fewer than 2 numbers.");
	std::sort(Cont.begin(), Cont.end());
	return (Cont[Cont.size() - 1] - Cont[0]);
}

int     Span::shortestSpan(void) {
	if (Cont.size() < 2)
		throw   std::logic_error("Cannot find span with fewer than 2 numbers.");
	std::sort(Cont.begin(), Cont.end());
	int tmp = Cont[1] - Cont[0];
	for (unsigned int i = 1; i < Cont.size(); i++)
		if (Cont[i] - Cont[i - 1] < tmp)
			tmp = Cont[i] - Cont[i - 1];
	return (tmp);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->Cont.size() + std::distance(begin, end) <= this->N)
        this->Cont.insert(this->Cont.end(), begin, end);
    else
        throw std::logic_error("distance between begin and end is large !!");
}

void	Span::ft_print_cont(void) {
	 for (std::vector<int>::iterator it = Cont.begin(); it != Cont.end(); ++it) {
        std::cout << "Cont = " << *it << std::endl;
    }
}