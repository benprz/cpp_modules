/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 05:07:11 by bperez            #+#    #+#             */
/*   Updated: 2021/12/07 05:48:08 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
{
	_name = name;
	_Weapon = &Weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
}
