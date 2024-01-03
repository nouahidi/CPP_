# ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	private:
		unsigned int		N;
		std::vector<int>	Cont;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &Obj);
		~Span();
		Span	&operator=(const Span &Obj);
		void	addNumber(int Elem);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	ft_print_cont();
};

# endif