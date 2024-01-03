/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:10:49 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/28 19:27:03 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout<<"\033[32m"<<"      <<<Memory address>>>"<<std::endl;
	std::cout<<"\033[0m"<<"Memory address of the string variable: \033[31m"<<&string<<"\033[0m"<<std::endl;
	std::cout<<"Memory address held by stringPTR: \033[31m"<<stringPTR<<"\033[0m"<<std::endl;
	std::cout<<"Memory address held by stringREF: \033[31m"<<&stringREF<<"\033[0m"<<std::endl;
	std::cout<<"\033[32m"<<"          <<<Value>>>"<<std::endl;
	std::cout<<"\033[0m"<<"Value of the string variable: \033[33m"<<string<<"\033[0m"<<std::endl;
	std::cout<<"Value pointed to by stringPTR: \033[33m"<<*stringPTR<<"\033[0m"<<std::endl;
	std::cout<<"Value pointed to by stringREF: \033[33m"<<stringREF<<"\033[0m"<<std::endl;
}
