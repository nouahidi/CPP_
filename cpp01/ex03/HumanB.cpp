/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:09:45 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/03 20:37:02 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = NULL;
};
HumanB::~HumanB(){};

void	HumanB::attack(){
	if (this->weapon)
	std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}

void HumanB:: setWeapon(Weapon &w)
{
	this->weapon = &w;
} 
