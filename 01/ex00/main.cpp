/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:22:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/06 23:26:25 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

int	main(void)
{
	Zombie	*Zombie1;

	Zombie1 = newZombie("zom1");
	randomChump("zom2");
	Zombie1->announce();
	delete Zombie1;
	return (EXIT_SUCCESS);
}