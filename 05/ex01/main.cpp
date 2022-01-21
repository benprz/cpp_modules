/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:03:29 by bperez            #+#    #+#             */
/*   Updated: 2022/01/20 09:30:52 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

int main()
{
	Bureaucrat a("a", 5);
	Bureaucrat b;
	Bureaucrat c("c", 150);

	try
	{
		std::cout << a << std::endl;
		b = a;
		a.increaseGrade(4);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << b << std::endl;
		a.increaseGrade(10);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form formA("formA", 15, 1);
	Form formB("formB", 4, 29);
	a.signForm(formA);
	a.decreaseGrade(10);
	b.signForm(formB);
	formB = formA;
	b.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;
}
