/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:58:49 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/22 19:42:58 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type){
	this->type = type;
}
Weapon::~Weapon(){};
std::string& Weapon::getType(){
	return (this->type);
}
void	Weapon::setType(std::string type){
	this->type = type;
}