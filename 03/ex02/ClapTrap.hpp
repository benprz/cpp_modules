/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:41:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 00:28:32 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitpoints;
		int _energy_points;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &c);
		ClapTrap &operator=(ClapTrap &c);
		~ClapTrap();

		std::string	getName();
		int	getHitpoints();
		int	getEnergyPoints();
		int	getAttackDamage();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
