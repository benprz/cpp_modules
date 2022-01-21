/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:54 by bperez            #+#    #+#             */
/*   Updated: 2022/01/09 21:59:43 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"  
	
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;	
	_type = "Cat";
	_brain = new Brain();
}
	
Cat::Cat(Cat &c)
{
	std::cout << "Cat copy constructor called" << std::endl;	
	_brain = NULL;
	*this = c;
}

Cat &Cat::operator=(Cat &c)
{
	std::cout << "Cat assignement operator called" << std::endl;	
	_type = c.getType();
	delete	_brain;
	_brain = new Brain(c._brain->getIdeas());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;	
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Woof wo.. Ops Meooow meow !" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (_brain);
}

void	Cat::setBrain(std::string *ideas)
{
	_brain->setIdeas(ideas);
}
