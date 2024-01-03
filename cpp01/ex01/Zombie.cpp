/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:28:17 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/26 17:43:23 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
};
Zombie::Zombie(){
	this->name = "";
};
Zombie::~Zombie(){};

void    Zombie::annonce(void){
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void){
	return (this->name);
}

void	Zombie::set_name(std::string name){
	this->name = name;
}
