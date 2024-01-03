#include "RPN.hpp"

long long	calc(size_t nb1, size_t nb2, char op) {
	size_t result = 0;
	switch (op) {
		case '+':
			result = nb1 + nb2;
			break;
		case '-':
			result = nb1 - nb2;
			break;
		case '*':
			result = nb1 * nb2;
			break;
		case '/':
			if (nb2 != 0)
				result = nb1 / nb2;
			else {
				std::cerr << "Error: Division by zero." << std::endl;
				exit(1);
			}
			break;	
	}
	return result;
}

bool	isoperator(char c) {
	if (c != '+' && c != '-' && c != '*' && c != '/')
		return (0);
	return (1);
}

void	ft_calcule(std::stack<int> &nb, char c) {
	int		res = 0;
	if (nb.size() < 2)
		throw	std::invalid_argument("ERROR");
	res = nb.top();
	nb.pop();
	res = calc(nb.top(),res, c);
	nb.pop();
	nb.push(res);
}

std::string	skip_Space(std::string str) {
	size_t start = str.find_first_not_of(" \t");
	if (start == std::string::npos)
		return str;
	size_t end = str.find_last_not_of(" \t");
	return (str.substr(start, end - start + 1));
}