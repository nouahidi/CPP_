/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:58:38 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/11 20:48:33 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

void	print_contact(PhoneBook phone)
{
	std::string str;
	int index;
	while(1){
		std::cout<<"Choose a Index: ";
		if (!(std::cin>>str))
			break ;
		if (str.length() > 1 || !isdigit(str[0])){
			std::cout<<"You can enter one number From 1 to 8"<<std::endl;
			std::cin.ignore();
			continue;
		}
		index = atoi(str.c_str());
		if (index > 8 || index <= 0){
			std::cout<<"You can enter one number From 1 to 8"<<std::endl;
			std::cin.ignore();
			continue;
		}
		else{
			phone.get_contact(index - 1);
			std::cin.ignore();
			break ;
		}
	}
}

int main()
{
	PhoneBook phone;
	std::string str;
	int			index = 0;
	std::cout<<std::endl<<"\x1b[32m"<<"      <<<<<WELCOME TO PHONEBOOK>>>>>"<<std::endl;
		std::cout<<"\x1b[0m"<<" ///////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ "<<std::endl;
		std::cout<< "\x1b[32m"<<" ||||||Enter One Of Three Commands|||||| "<<std::endl;
		std::cout<< "\x1b[0m"<<" \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////// "<<std::endl;
		std::cout<<" <ADD>		<SEARCH>	<EXIT>"<<std::endl;
	phone.init_end();
	while (1){
		std::cout<<"-->Command: ";
		if (!getline(std::cin,str))
			break ;
		if (str == "ADD"){
			if (contact_data(phone, index))
				return (1);
			index++;
			if (index == 8) 
				index = 0;
		}
		else if (str == "SEARCH"){
			std::cout<<" -------------------------------------------"<<std::endl;
			std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
			for(int i = 0;i<8;i++)
				phone.Search_Contact(i);
				std::cout<<" -------------------------------------------"<<std::endl;
			print_contact(phone);
		}
		else if (str == "EXIT"){
			std::cout<<">>>>>> GOOD BAY :) <<<<<<\n";
			return (0);
		}
		else
			std::cout<<"\x1b[31m"<<"Please enter the correct command"<<"\x1b[0m"<<std::endl;
	}
}
