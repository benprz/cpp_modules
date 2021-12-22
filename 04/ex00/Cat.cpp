/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:54 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 00:17:32 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"  
	
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;	
	_type = "Cat";
}
	
Cat::Cat(Cat &c)
{
	std::cout << "Cat copy constructor called" << std::endl;	
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
}

void	Cat::makeSound() const
{
	std::cout << "Woof wo.. Ops Meooow meow !" << std::endl;
}
