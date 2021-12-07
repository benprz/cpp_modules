/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:32:47 by bperez            #+#    #+#             */
/*   Updated: 2021/12/07 02:59:51 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;
	Zombie	*firstZombie;

	zombieHorde = NULL;
	while (N--)
	{
		if (zombieHorde)
		{
			zombieHorde->next = new Zombie(name);
			zombieHorde = zombieHorde->next;
		}
		else
		{
			zombieHorde = new Zombie(name);
			firstZombie = zombieHorde;
		}
		zombieHorde->next = NULL;
	}
	return (firstZombie);
}