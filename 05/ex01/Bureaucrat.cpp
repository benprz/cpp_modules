/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:20:26 by bperez            #+#    #+#             */
/*   Updated: 2022/01/20 10:25:02 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	_grade = 0;
	decreaseGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &c)
{
	_grade = c.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &c)
{
	_grade = c.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName()
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return (_grade);
}

void Bureaucrat::increaseGrade(int amount)
{
	if (_grade - amount <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (_grade - amount > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade -= amount;
}

void Bureaucrat::decreaseGrade(int amount)
{
	increaseGrade(-amount);
}

void Bureaucrat::signForm(Form &c)
{
	try
	{
		c.beSigned(*this);
		std::cout << *this << " signs " << c << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << *this << " cannot sign " << c << "because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &c)
{
	o << c.getName() << ", bureaucrat grade " << c.getGrade();
	return (o);
}
