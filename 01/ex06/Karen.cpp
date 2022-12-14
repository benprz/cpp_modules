/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:26 by bperez            #+#    #+#             */
/*   Updated: 2021/12/20 17:32:06 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "This is a debug message." << std::endl;
	std::cout << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is an info message." << std::endl;
	std::cout << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "This is a warning message." << std::endl;
	std::cout << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is an error message." << std::endl;
	std::cout << std::endl;
}

void	Karen::complain(std::string level)
{
	void		(Karen::*funcptr[])(void) = {DEBUG, INFO, WARNING, ERROR};
	std::string	funcnames[COMPLAINTS_NUMBER] = {C_DEBUG, C_INFO, C_WARNING, C_ERROR};
	int	i = 0;

	while (i < COMPLAINTS_NUMBER)
	{
		if (level.compare(funcnames[i]) == 0)
		{
			(this->*funcptr[i])();
			break ;
		}
		i++;
	}
}
