/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:28:12 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/03 20:38:20 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	{
		Zombie  *zombie;
		zombie = newZombie("hello");
		zombie->annonce();
		delete zombie;
	}
	{
		std::string str= "noureddine";
		randomChump(str);
	}
}
