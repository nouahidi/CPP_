#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
		Bureaucrat *a = new Bureaucrat("Noureddine", 1);
		Form *b = new Form("list", -18);
		std::cout << a;
		std::cout << b;
		try
		{
			b->beSigned(a);
			a->signForm(b);
		}
		catch(const std::exception &e)
		{
			std::cerr <<"\033[31m"<<e.what()<<"\033[0m"<< std::endl;
		}
		std::cout << a;
		std::cout << b;
		delete a;
		delete b;
	return 0;
}