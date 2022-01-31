/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:03:45 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 03:13:29 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signGrade(150), _execGrade(150)
{
	_signed = 0;
}

Form::Form(std::string const &name, int const &signGrade, int const &execGrade, std::string const &target) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
	_signed = 0;
}

Form::Form(Form &c) : _name(c.getName()), _signGrade(c.getSignGrade()), _execGrade(c.getExecGrade()), _target(c.getTarget())
{
	_signed = c.getSigned();
}

Form &Form::operator=(Form &c)
{
	_signed = c.getSigned();
	return (*this);
}

Form::~Form()
{
}

void Form::beSigned(Bureaucrat &c)
{
	if (c.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::string Form::getName()
{
	return (_name);
}

bool Form::getSigned()
{
	return (_signed);
}

int Form::getSignGrade()
{
	return (_signGrade);
}

int Form::getExecGrade()
{
	return (_execGrade);
}

std::string Form::getTarget()
{
	return (_target);
}

void Form::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > _execGrade)
		throw Form::GradeTooLowException();
	if (_signed == false)
		throw Form::NotSignedException();
}

std::ostream &operator<<(std::ostream &o, Form &c)
{
	o << "Form <" << c.getName() << "> := (signed=" << c.getSigned() << ", signGrade=" << c.getSignGrade() << ", execGrade=" << c.getExecGrade() << ")";
	return (o);
}
