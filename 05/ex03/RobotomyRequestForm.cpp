/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:44:31 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 16:55:53 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &c) : Form(c)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &c)
{
	Form::operator=(c);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action()
{
	std::srand(std::time(NULL));
	std::cout << "Making annoying working noises... #^$%§  ~~~  ";
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotized!" << std::endl;
	else
		std::cout << "Failed robotizing " << this->getTarget() << std::endl;
}
