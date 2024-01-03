/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:58:24 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/08 22:01:01 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){};
Contact::~Contact(){};
void Contact::set_index(int index){
	this->index = index;
}
void Contact::set_first_name(std::string str){
	this->first_name = str;
}
void Contact::set_last_name(std::string str){
	this->last_name = str;
}

void Contact::set_nickname(std::string str){
	this->nickname = str;
}
void Contact::set_phone_number(std::string str){
	this->phone_number = str;
}
void Contact::set_darkest_secret(std::string str){
	this->darkest_secret = str;
}
std::string Contact::get_first_name(){
	return this->first_name;
}
std::string Contact::get_last_name(){
	return this->last_name;
}
std::string Contact::get_nickname(){
	return this->nickname;
}
std::string Contact::get_phone_number(){
	return this->phone_number;
}
std::string Contact::get_darkest_secret(){
	return this->darkest_secret;
}
int Contact::get_index(){
	return (this->index);
}
