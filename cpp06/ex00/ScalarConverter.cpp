#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter:: ScalarConverter(const  ScalarConverter &Obj){
   *this = Obj;
}
ScalarConverter	 &ScalarConverter::operator=(const  ScalarConverter &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

int	check_nb(const std::string inp) {
	int	flag = 0;
	int i = 0;
	if (inp.empty())
		return (puts(0), 0);
    for (;  inp[i] && (inp[i] == ' ' || inp[i] == '\t'); i++){}
	if (i == (int)inp.size())
		return (0);
	if (inp[i] == '-' || inp[i] == '+')
		i++;
	for (; inp[i]; i++) {
		if (inp[i] == '.') {
			flag++;
			if (flag > 1 || !isdigit(inp[i + 1]) || !isdigit(inp[i - 1]))
				return (0);
		}
		if (inp[i] == ' ' || inp[i] == '\t' || inp[i] == 'f') {
			i++;
			for (; inp[i]; i++)
				if (inp[i] && inp[i] != ' ' && inp[i] != '\t')
					return (0);
			return (1);
		}
		if (flag > 1 || (!isdigit(inp[i]) && inp[i] != 'f' && inp[i] != '.'))
			return (0);
	}
	return (1);
}

int	check_digit(std::string	inp) {
	for (int i = 0; inp[i]; i++) {
		if (isdigit(inp[i]))
			return (0);
	}
	return (1);
}

int	my_atoi(std::string inp, bool *flags) {
	int		i = 0;
	int		r = 1;
	long	nb = 0;

	*flags = 0;
	while ((inp[i] >= 9 && inp[i] <= 13) || inp[i] == ' ')
		i++;
	if (inp[i] == '+' || inp[i] == '-')
	{
		if (inp[i] == '-')
			r = -1;
		i++;
	}
	while (inp[i] >= '0' && inp[i] <= '9')
	{
		nb = (nb * 10) + (inp[i++] - '0');
		if (nb - 1 >= INT_MAX)
			*flags = true;
	}
	if (nb > INT_MAX || -nb < INT_MIN)
		*flags = true;
	return (nb * r);
}

void	ScalarConverter::scalarConverter(std::string inp){
//print char
	try {
	    int intValue = std::atoi(inp.c_str());
		if (intValue > 127 || intValue < -128)
            	throw std::invalid_argument("Invalid character");
        char charValue = static_cast<char>(intValue);
	    if (isprint(charValue))
	        std::cout << "char: '" << charValue << "'" << std::endl;
		else
	        std::cout << "char: Non displayable" << std::endl;
	}
	catch (const std::invalid_argument&) {
	    std::cout << "char: Impossible" << std::endl;
	}
//print int
	try {
		int	intValue;
		bool	flags;
		if (check_nb(inp)) {
			intValue = my_atoi(inp, &flags);
			if (!flags)
				std::cout << "int: " << static_cast<int>(intValue) << std::endl;
			else
            	throw std::invalid_argument("Not an integer");
		}
		else
            throw std::invalid_argument("Not an integer");
	}
	catch (const std::invalid_argument&) {
		std::cout << "int: Impossible" << std::endl;
	}
//print float
	try {
		float floatValue = 0.0;
		if (check_nb(inp))
			floatValue = std::atof(inp.c_str());
		else if (check_digit(inp)) {
			if (std::atof(inp.c_str()) == 0.0)
				throw std::invalid_argument("Not an integer");
			floatValue = std::atof(inp.c_str());
		}
		else
			throw std::invalid_argument("Not an integer");
		if (floatValue == static_cast<int>(floatValue))
			std::cout << "float: " << floatValue << ".0f" << std::endl;
		else
			std::cout << "float: " << floatValue << "f" << std::endl;
	}
	catch (const std::invalid_argument&) {
		std::cout << "float: Impossible" << std::endl;
	}
//print double
	try {
		double doubleValue;
		if (check_nb(inp))
			doubleValue = std::atof(inp.c_str());
		else if (check_digit(inp)) {
			if (std::atof(inp.c_str()) == 0.0)
				throw std::invalid_argument("Not an integer");
			doubleValue = std::atof(inp.c_str());
		}
		else
			throw std::invalid_argument("Not an integer");
		if (doubleValue == static_cast<int>(doubleValue))
			std::cout << "double: " << doubleValue << ".0" << std::endl;
		else
			std::cout << "double: " << doubleValue << std::endl;
	}

	catch (const std::invalid_argument&) {
		std::cout << "double: Impossible" << std::endl;
	}
}
