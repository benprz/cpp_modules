/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:16:35 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 12:40:37 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"  
	
Bureaucrat::Bureaucrat() : _name("default")
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
}

Bureaucrat::Bureaucrat(Bureaucrat &c)
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
	*this = c;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &c)
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
	_grade = c.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
}

std::string	Bureaucrat::getName()
{
	return (_name);
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade > 1)
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade < 150)
		_grade--;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &c)
{
	o << c.getName() << ", bureaucrat grade " << c.getGrade() << std::endl;
	return (o);
}
