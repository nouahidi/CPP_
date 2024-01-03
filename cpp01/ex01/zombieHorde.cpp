/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:36:27 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/05 00:28:33 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0){
		std::cout << "N should be positive and deferent 0" << std::endl;
		return(NULL);
	}
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}
