/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:35:13 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 16:46:51 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &c)
{
	(void)c;
}

Intern &Intern::operator=(Intern &c)
{
	(void)c;
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	ShrubberyCreationForm *scf = new ShrubberyCreationForm(target);
	RobotomyRequestForm *rrf = new RobotomyRequestForm(target);
	PresidentialPardonForm *ppf = new PresidentialPardonForm(target);
	Form *formsList[3] = {scf, rrf, ppf};

	const std::string formsName[3] = {
			"Shrubbery creation", 
			"Robotomy request", 
			"Presidential pardon"
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formsName[i] == name)
		{
			for (int j = 1; i + j < 3; j++)
				delete formsList[i + j];
			std::cout << "Intern creates " << name << std::endl;
			return (formsList[i]);
		}
		else
			delete formsList[i];
	}
	throw Intern::InvalidFormException();
}
