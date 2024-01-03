#ifndef SHRUBBERYVREATIONFORM_HPP
# define SHRUBBERYVREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Name);
		ShrubberyCreationForm(const ShrubberyCreationForm &Obj);
		~ShrubberyCreationForm();

		class Unsigned : public std::exception {
			public:
				const char*				what() const throw();
		};

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &Obj);
		void					beSigned(Bureaucrat const & executor) ;
		void					execute(Bureaucrat const & executor)const;
};

#endif