/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:06:37 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/26 17:30:15 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void    annonce(void);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif