#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string Name);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &Obj);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &Obj);

		class Unsigned : public std::exception {
			public:
				const char* 			what() const throw();
		};
		
		void				beSigned(Bureaucrat const & executor);
		void				execute(Bureaucrat const & executor)const;

};

# endif