/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 05:07:11 by bperez            #+#    #+#             */
/*   Updated: 2021/12/07 05:49:01 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	_Weapon = &Weapon;
}