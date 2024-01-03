#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Name);
		RobotomyRequestForm(const RobotomyRequestForm & Obj);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm & Obj);

		class Unsigned : public std::exception {
			public:
				const char* 			what() const throw();
		};

		void				beSigned(Bureaucrat const & executor);
		void				execute(Bureaucrat const & executor)const;
};

#endif