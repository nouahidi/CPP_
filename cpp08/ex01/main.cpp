#include "Span.hpp"

int main() {
	try {
		Span span(10000);
		for (int i = 0; i < 10000; i++) {
			span.addNumber(i - 10);
		}
		std::cout << "Longest Span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() <<"\033[0m"<< std::endl;
	}
	std::cout<<"----------------"<<std::endl;
	try {
		Span sp(6);
		std::vector<int> tab;
		tab.push_back(12);
		tab.push_back(13);
		tab.push_back(14);
		tab.push_back(15);
		sp.addNumber(150);
		sp.addNumber(100);
		sp.addNumbers(tab.begin(), tab.end());
		sp.ft_print_cont();
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr <<"\033[31m"<< "Exception: " << e.what() <<"\033[0m"<< std::endl;
	}
	return 0;
}