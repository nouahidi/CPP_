#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern &Obj);
		Intern  &operator=(const Intern &Obj);

		AForm	*makeForm(std::string FormName, std::string target);
};

#endif