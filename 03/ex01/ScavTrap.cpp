/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:18:38 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 17:00:54 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "default";
	_hitpoints = 100; 
	_energy_points = 100; 
	_attack_damage = 30;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitpoints = 100; 
	_energy_points = 50; 
	_attack_damage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &c)
{
	*this = c;
}

ScavTrap &ScavTrap::operator=(ScavTrap &c)
{
	_name = c.getName();
	_hitpoints = c.getHitpoints();
	_energy_points = c.getEnergyPoints();
	_attack_damage = c.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have entered in Gate keeper mode." << std::endl;
}

