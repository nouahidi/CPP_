#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

extern int _flags;

class Form;

class Bureaucrat {
	private:
		const std::string	Name;
		int					Grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &Obj);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &Obj);
		class 		GradeTooHighException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		class		GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		std::string	getName(void);
		int			getGrade(void);
		void		IncrementGrade();
		void		DecrementGrade();
		void		CheckRange(void)const;
		void		signForm(Form *f);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat* Bureaucrat);

#endif