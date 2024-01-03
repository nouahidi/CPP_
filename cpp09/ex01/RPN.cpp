#include "RPN.hpp"

RPN::RPN(){
	std::cout<<"0"<<std::endl;
}

RPN::RPN(std::string str){
	str = skip_Space(str);
		for (int i = 0; i < (int)str.size(); i++) {
		if (std::isdigit(str[i]))
			nb.push(str[i] - '0');
		else if (isoperator(str[i]))
			ft_calcule(nb, str[i]);
		else if (str[i] != ' ' && str[i] != '\t')
			throw	std::invalid_argument("ERROR");
	}
	if (nb.size() != 1)
		throw	std::invalid_argument("ERROR");
	std::cout<<nb.top()<<std::endl;
}

RPN::~RPN() {};

RPN::RPN(const RPN &Obj) {
	*this = Obj;
};

RPN	&RPN::operator=(const RPN &Obj) {
	if (this != &Obj)
		*this = Obj;
	return (*this);
};