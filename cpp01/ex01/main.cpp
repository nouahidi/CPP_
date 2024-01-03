/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:15 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/15 17:04:52 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zombie;
	int		size = 0;
	zombie = zombieHorde(size, "ouahidi");
	if (!zombie)
		return (1);
	for(int i = 0;i < size;i++)
		zombie[i].annonce();
	delete [] zombie;
	return (0);
}
