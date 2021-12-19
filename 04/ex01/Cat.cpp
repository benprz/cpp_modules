/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:54 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 19:04:51 by bperez           ###   ########lyon.fr   */
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
	*this = c;
}

Cat &Cat::operator=(Cat &c)
{
	_type = c.getType();
	_brain = c._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;	
	delete _brain;
}

void	Cat::setBrain(std::string idea)
{
	_brain = idea;
}

void	Cat::makeSound() const
{
	std::cout << "Woof wo.. Ops Meooow meow !" << std::endl;
}
