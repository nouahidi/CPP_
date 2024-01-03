#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	Name;
		bool				Signing;
		const int			GradeSigne;
		const int			GradeExecute;
	public:
		AForm();
		AForm(std::string Name, int GradeSigne, int GradeExecute);
		AForm(const AForm &Obj);
		virtual	~AForm();
		AForm	&operator=(const AForm &Obj);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		std::string			getName();
		bool				getSigning() const;
		void				setSigning(bool sg);
		int					getGradeSigne();
		int					getGradeExecute()const;
		virtual void		beSigned(Bureaucrat const & executor) = 0;
		virtual void		execute(Bureaucrat const & executor)const = 0;
};

std::ostream&	operator<<(std::ostream& out, AForm *form);

#endif
