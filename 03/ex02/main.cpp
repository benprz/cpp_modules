/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:40:06 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 01:38:47 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap p1("Player1");
	ScavTrap p2("Player2");
	FragTrap p3("Player3");

	p2.attack(p1.getName());
	p1.attack(p2.getName());
	p3.attack(p3.getName());

	p2.takeDamage(p1.getHitpoints());
	p1.takeDamage(p2.getHitpoints());
	p3.takeDamage(p3.getHitpoints());
	
	p2.beRepaired(p2.getHitpoints());
	p1.beRepaired(p1.getHitpoints());
	p3.beRepaired(0);
	
	ScavTrap p4("DeadPlayer");
	p2 = p4;
	p2.attack(p1.getName());
	p1.takeDamage(p2.getHitpoints());
	
	p2.guardGate();
	return (0);
}
