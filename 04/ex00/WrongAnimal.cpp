/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:09 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:04:00 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"  
	
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;	
}
		
WrongAnimal::WrongAnimal(WrongAnimal &c)
{
	*this = c;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &c)
{
	_type = c.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	
	std::cout << "WrongAnimal destructor called" << std::endl;	
}

const std::string	&WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm an animal (the wrong) but I don't make sound" << std::endl;
}