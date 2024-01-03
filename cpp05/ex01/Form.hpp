#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	Name;
		bool				Signing;
		const int			GradeSigne;
		const int			GradeExecute;
	public:
		Form();
		Form(std::string Name, int grade);
		Form(const Form &Obj);
		~Form();
		Form	&operator=(const Form &Obj);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		std::string	getName();
		bool		getSigning();
		int			getGradeSigne();
		int			getGradeExecute();
		void		checkGrade();
		void		beSigned(Bureaucrat *bureaucrat);
};

std::ostream&	operator<<(std::ostream& out, Form *form);

#endif