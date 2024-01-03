/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:06:37 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/26 17:47:15 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

class Zombie{
	private :
		std::string name;
	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void    	annonce(void);
	void		set_name(std::string name);
	std::string	get_name(void);
};
Zombie* newZombie( std::string name );	
void randomChump( std::string name );
Zombie* zombieHorde(int N, std::string name);
