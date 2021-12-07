/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:22:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/07 03:12:42 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int	main(void)
{
	Zombie	*zHorde;
	Zombie	*zTmp;

	zHorde = zombieHorde(5, "zumbeeeees");
	while (zHorde)
	{
		zHorde->announce();
		zTmp = zHorde->next;
		delete zHorde;
		zHorde = zTmp;
	}
	return (EXIT_SUCCESS);
}