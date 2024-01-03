/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:57:49 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/13 11:55:25 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>

int main(int ac, char **av) {
	int i = 0;
	if (ac > 1)
	{
		while (i++ < ac - 1)
		{
			std::string str = av[i];
			std::transform(str.begin(), str.end(),str.begin(), ::toupper);
			std::cout << str;
			if (i != ac -1)
				std::cout<<' ';
		}
	}
	return 0;
}
