/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:38:47 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/26 17:57:29 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class  Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		std::string &getType();
		void	setType(std::string type);
};

#endif