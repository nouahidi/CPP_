/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:02:00 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/25 17:41:25 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av){
    Harl    harl;
    if (ac == 2)
        harl.complain(av[1]);
    else
        std::cout<<"ERROR"<<std::endl;
}
