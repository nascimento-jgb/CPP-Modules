/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:38:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/08 07:38:22 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main ()
{
	ClapTrap	instance("TEST");
	ScavTrap	instance2("TEST2");

	instance.attack("enemy");
	instance.setAttackDamage(1);
	instance.attack("another enemy");
	std::cout << instance.getEnergyPoints() << std::endl;
	instance.beRepaired(5);
	std::cout << instance.getEnergyPoints() << std::endl;

	instance2.attack("enemy");
	std::cout << instance2.getEnergyPoints() << std::endl;
	instance2.beRepaired(2);
	std::cout << instance2.getHitPoints() << std::endl;
	instance2.attack("another enemy");
	instance2.guardGate();
	std::cout << instance2.getEnergyPoints() << std::endl;
	return (0);
}
