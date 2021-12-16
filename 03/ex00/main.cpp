/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:40:06 by bperez            #+#    #+#             */
/*   Updated: 2021/12/16 20:00:20 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap p1("Player1");
	ClapTrap p2("Player2");

	p1.attack(p2.getName());
	p1.takeDamage(p2.getHitpoints());
	p2.beRepaired(10);
	return (0);
}
