/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:22:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 10:29:55 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int	main(void)
{
	Zombie	*zHorde;

	zHorde = zombieHorde(5, "zumbeeeees");
	for (int i = 0; i < 5; i++)
	{
		zHorde[i].announce();
	}
	return (EXIT_SUCCESS);
}