/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:40:06 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 00:53:31 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap p1("Player1");
	ScavTrap p2("Player2");

	p2.attack(p1.getName());
	p1.attack(p2.getName());

	p2.takeDamage(p1.getHitpoints());
	p1.takeDamage(p2.getHitpoints());
	
	p2.beRepaired(p2.getHitpoints());
	p1.beRepaired(p1.getHitpoints());
	
	ScavTrap p3("DeadPlayer");
	p2 = p3;
	p2.attack(p1.getName());
	p1.takeDamage(p2.getHitpoints());
	
	p2.guardGate();
	return (0);
}
