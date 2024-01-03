#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
class ScalarConverter {
	private:
		ScalarConverter();
	public:
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &Obj);
		ScalarConverter	&operator=(const  ScalarConverter &Obj);

		static void	scalarConverter(std::string inp);
};

#endif