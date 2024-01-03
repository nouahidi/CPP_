   #include "easyfind.hpp"

int main () {
	std::vector<int> tab;

	tab.push_back(1);
	tab.push_back(2);
	tab.push_back(3);
	tab.push_back(4);
	tab.push_back(5);
	try {
		easyfind(tab, 1);
		std::cout<<"\033[32m"<<"This value is in the container"<<"\033[0m"<<std::endl;
	}
	catch(const std::exception &e){
		std::cout<<"\033[31m"<<e.what()<<"\033[0m"<<std::endl;
	}
} 