/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:28:17 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/03 20:32:46 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){};
Zombie::Zombie(){};
Zombie::~Zombie(){
	std::cout<<"\033[32m"<<"operation accomplished successfully"<<"\033[0m"<<std::endl;
};

void    Zombie::annonce(void){
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
