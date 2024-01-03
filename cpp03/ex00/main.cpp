/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:29:35 by nouahidi          #+#    #+#             */
/*   Updated: 2023/10/28 16:58:06 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap a;
    ClapTrap clap("Nouahidi");
    
    for(int i = 0; i < 6; i++){
        clap.attack("elfany");
        clap.takeDamage(3);
        clap.beRepaired(5);
        std::cout<<"energy = "<<clap.getEnergyPoint()<<std::endl;
        std::cout<<"Hitpoint = "<<clap.getHitPoint()<<std::endl;
        std::cout<<"attack damage = "<<clap.getAttackDamage()<<std::endl;
    }
}