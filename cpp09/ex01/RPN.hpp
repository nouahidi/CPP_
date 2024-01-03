#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<int> nb;
	public:
		RPN();
		~RPN();
		RPN(std::string str);
		RPN(const RPN &Obj);
		RPN	&operator=(const RPN &Obj);
};

long long	calc(size_t nb1, size_t nb2, char op);
bool		isoperator(char c);
void		ft_calcule(std::stack<int> &nb, char c);
std::string	skip_Space(std::string str);

#endif