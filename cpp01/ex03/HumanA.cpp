/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:59:43 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/02 00:49:27 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon){
    this->name = name;
};
HumanA::~HumanA(){};

void	HumanA::attack(){
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}