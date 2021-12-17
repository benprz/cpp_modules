/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:40:06 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 02:26:48 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap p1("Player1");
	ScavTrap p2("Player2");
	FragTrap p3("Player3");
	DiamondTrap p4("DiamondTrap");

	std::cout << std::endl;
	std::cout << p4.getName() << " " << p4.getHitpoints() << " " << p4.getEnergyPoints() << " " << p4.getAttackDamage();
	std::cout << std::endl;
	p4.attack(p1.getName());
	p4.attack(p2.getName());
	p4.attack(p2.getName());
	std::cout << std::endl;
	
	p4.guardGate();
	p4.highFivesGuys();
	p4.whoAmI();
	return (0);
}
