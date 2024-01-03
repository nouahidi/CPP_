/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:25 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/15 17:19:23 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void    Harl::debug(void){
	std::cout<<"I love having extra bacon "<<\
	"for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void    Harl::info(void){
	std::cout<<"I cannot believe adding extra bacon costs more money."<<\
	" You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<std::endl;    
}

void    Harl::warning(void){
	std::cout<<"I think I deserve to have some extra bacon for free."<<\
	" I've been coming for years whereas you started working here since last month."<<std::endl;
}

void    Harl::error(void){
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void    Harl::NOT(void){
	std::cout<<"ERROR: Choose the correct key from the following keys:\n       |DEBUG| |INFO| |WARNING| |ERROR|"<<std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*prt[5])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error,&Harl::NOT};
	std::string t[4] = {"DEBUG","INFO","WARNING","ERROR"};
	int i = 0;
	for (;i < 4 && level != t[i]; i++);
	(this->*prt[i])();
}
