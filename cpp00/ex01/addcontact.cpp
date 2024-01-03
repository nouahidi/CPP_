/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addcontact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:59:20 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/12 17:49:21 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_empty_str(std::string str)
{
	if (str.empty())
		return (0);
	for(int i = 0; i < (int)str.size();i++){
		if (str[i] != ' ' && str[i] != '\t')
			return (1);
	}
	return (0);
}

int	contact_data(PhoneBook & phone, int index)
{
	std::string str;
	std::string inf[5];
	for(int i = 0; i < 5; i++){
		if (i == 0){
			std::cout << "First name: ";
			while (1){
				if (!getline(std::cin, str))
					return (1);
				if (ft_empty_str(str) == 0)
					std::cout<<"\x1b[31m"<<"Retype the first name: "<<"\x1b[0m";
				else{
					inf[0] = str;
					break;
				}
			}
		}
		else if (i == 1){
			std::cout << "Last name: ";
			while (1){
				if (!getline(std::cin, str))
					return (1);
				if (ft_empty_str(str) == 0)
					std::cout<<"\x1b[31m"<<"Retype The Last name: "<<"\x1b[0m";
				else{
					inf[1] = str;
					break;
				}
			}
		}
		else if (i == 2){
			std::cout << "Nickname: ";
			while (1){
				if (!getline(std::cin, str))
					return (1);
				if (ft_empty_str(str) == 0)
					std::cout<<"\x1b[31m"<<"Retype The Nickname: "<<"\x1b[0m";
				else{
					inf[2] = str;
					break;
				}
			}
		}
		else if (i == 3){
			std::cout << "Phone number: ";
			while (1){
				if (!getline(std::cin, str))
					return (1);
				else if (ft_empty_str(str) == 0)
					std::cout<<"\x1b[31m"<<"Retype The Phone number: "<<"\x1b[0m";
				else{
					inf[3] = str;
					break;
				}
			}
		}
		else if (i == 4){
			std::cout << "Darkest secret: ";
			while (1){
				if (!getline(std::cin, str))
					return (1);
				if (ft_empty_str(str) == 0)
					std::cout<<"\x1b[31m"<<"Retype The Darkest secret: "<<"\x1b[0m";
				else{
					inf[4] = str;
					break;
				}
			}
		}
	}
	std::cout<<std::endl;
	phone.Add_Contact(inf,index);
	return (0);
}