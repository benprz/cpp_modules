/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:40:01 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 16:28:57 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "String constructor called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(ClapTrap &c)
{
	*this = c;
}

ClapTrap &ClapTrap::operator=(ClapTrap &c)
{
	_name = c.getName();
	_hitpoints = c.getHitpoints();
	_energy_points = c.getEnergyPoints();
	_attack_damage = c.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (_name);
}

int	ClapTrap::getHitpoints()
{
	return (_hitpoints);
}

int	ClapTrap::getEnergyPoints()
{
	return (_energy_points);
}

int ClapTrap::getAttackDamage()
{
	return (_attack_damage);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " is repaired of " << amount << " energy points!" << std::endl;
}
