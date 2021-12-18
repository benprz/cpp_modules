/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:54 by bperez            #+#    #+#             */
/*   Updated: 2021/12/18 00:07:40 by bperez           ###   ########lyon.fr   */
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