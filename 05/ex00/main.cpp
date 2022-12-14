/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:06:34 by bperez            #+#    #+#             */
/*   Updated: 2022/01/20 09:05:22 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main()
{
	try
	{
		Bureaucrat a("a", 5);
		Bureaucrat b;
		Bureaucrat c("c", 150);
	
		std::cout << a << std::endl;
		a.increaseGrade(4);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		b = a;
		std::cout << b << std::endl;
		a.increaseGrade(10);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
