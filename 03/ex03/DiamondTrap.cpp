/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:18:38 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 02:37:59 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default")
{
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints; 
	_energy_points = ScavTrap::_energy_points; 
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = _name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints; 
	_energy_points = ScavTrap::_energy_points; 
	_attack_damage = FragTrap::_attack_damage;

	std::cout << _name << " " << FragTrap::getHitpoints() << " " << ScavTrap::getEnergyPoints() << " " << FragTrap::getAttackDamage();
	std::cout << "DiamondTrap string constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &c)
{
	*this = c;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &c)
{
	_name = c.getName();
	_hitpoints = c.getHitpoints();
	_energy_points = c.getEnergyPoints();
	_attack_damage = c.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : '" << _name << "' ClapTrap name : '" << ClapTrap::_name << "'" << std::endl;
}

