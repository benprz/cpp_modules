/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:03:29 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 17:02:21 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

#include <iostream>

int main()
{
	Bureaucrat a("a", 6);
	Bureaucrat b("b", 150);
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

	PresidentialPardonForm ppform("t1");
	RobotomyRequestForm rrform("t2");
	ShrubberyCreationForm scform("t3");
	ShrubberyCreationForm scform2("t3-bis");

	b.signForm(ppform);
	b.executeForm(ppform);
	a.executeForm(ppform);
	b.decreaseGrade(100);
	b.signForm(rrform);
	b.executeForm(rrform);
	a.executeForm(rrform);
	a.signForm(rrform);
	a.executeForm(rrform);
	a.signForm(scform);
	//b.executeForm(scform);
	std::cout << scform << std::endl;
	std::cout << scform2 << std::endl;
	scform2 = scform;
	std::cout << scform2 << std::endl;

	Intern  someRandomIntern;
	Form	*f;
	Form	*invalid;

	try
	{
		f = someRandomIntern.makeForm("Robotomy request", "Bender");
		a.signForm(*f);
		a.executeForm(*f);
		delete f;
		f = someRandomIntern.makeForm("Presidential pardon", "President");
		a.signForm(*f);
		a.executeForm(*f);
		delete f;
		invalid = someRandomIntern.makeForm("invalid form", "exception");
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
