#include "Bureaucrat.hpp"

int main() {
	Bureaucrat *bureaucrat = new Bureaucrat("ouahidi", 151);
	std::cout << bureaucrat;
	try {
		bureaucrat->IncrementGrade();
		std::cout<<"\033[32m"<<"Valid Grade"<<"\033[0m"<<std::endl;
	}
	catch (std::exception & e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() << bureaucrat->getGrade()<<"\033[0m"<<std::endl;
	}
	std::cout << bureaucrat;
	try {
		bureaucrat->DecrementGrade();
		std::cout<<"\033[32m"<<"Valid Grade"<<"\033[0m"<<std::endl;
	}
	catch (std::exception & e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() << bureaucrat->getGrade()<<"\033[0m"<<std::endl;
	}
	std::cout << bureaucrat;
	delete bureaucrat;
	return 0;
}