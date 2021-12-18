/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:18:38 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 02:51:30 by ben              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "default";
	_hitpoints = 100; 
	_energy_points = 100; 
	_attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitpoints = 100; 
	_energy_points = 100; 
	_attack_damage = 30;
	std::cout << "FragTrap string constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &c)
{
	*this = c;
}

FragTrap &FragTrap::operator=(FragTrap &c)
{
	_name = c.getName();
	_hitpoints = c.getHitpoints();
	_energy_points = c.getEnergyPoints();
	_attack_damage = c.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " just made you a high fives !" << std::endl;
}

