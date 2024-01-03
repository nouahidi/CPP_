/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:58:44 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/11 20:48:06 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->index = 0;
};
PhoneBook::~PhoneBook(){}
void	PhoneBook::set_index(int ind){
	this->index = ind;
}
int		PhoneBook::get_index(){
	return (this->index);
}
void	PhoneBook::Add_Contact(std::string *inf, int index)
{
		this->contact[index].set_first_name(inf[0]);
		this->contact[index].set_last_name(inf[1]);
		this->contact[index].set_nickname(inf[2]);
		this->contact[index].set_phone_number(inf[3]);
		this->contact[index].set_darkest_secret(inf[4]);
		// this->contact[index].set_index(index + 1);
}
void	PhoneBook::init_end(){
	for (int i = 0;i < 8; i++){
		this->contact[i].set_index(i + 1);
	}
}
void	PhoneBook::get_contact(int index){
	std::cout<<"Firte Name: "<<this->contact[index].get_first_name()<<std::endl;
	std::cout<<"Last Name: "<<this->contact[index].get_last_name()<<std::endl;
	std::cout<<"Nickname: "<<this->contact[index].get_nickname()<<std::endl;
	std::cout<<"Phone Number: "<<this->contact[index].get_phone_number()<<std::endl;
	std::cout<<"Darkest_secret: "<<this->contact[index].get_darkest_secret()<<std::endl;
}
void	PhoneBook::Search_Contact(int index)
{
	std::string str;
	std::cout<<" -------------------------------------------"<<std::endl;
	std::cout<<"|         "<<this->contact[index].get_index();
	str = this->contact[index].get_first_name();
	if (str.length() > 10){
		str.resize(9,' ');
		std::cout<<"|"<<str<<'.';
	}
	else{
		str.resize(10,' ');
		std::cout<<"|"<<str;
	}
	str = this->contact[index].get_last_name();
	if (str.length() > 10){
		str.resize(9,' ');
		std::cout<<"|"<<str<<'.';
	}
	else{
		str.resize(10,' ');
		std::cout<<"|"<<str;
	}
	str = this->contact[index].get_nickname();
	if (str.length() > 10){
		str.resize(9,' ');
		std::cout<<"|"<<str<<'.'<<"|"<<std::endl;
	}
	else{
		str.resize(10,' ');
		std::cout<<"|"<<str<<"|"<<std::endl;
	}
}

Contact* PhoneBook::getContacts(){
	return this->contact;
}
