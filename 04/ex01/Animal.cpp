/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:09 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 14:27:49 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"  
	
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;	
}
		
Animal::Animal(Animal &c)
{
	*this = c;
}

Animal &Animal::operator=(Animal &c)
{
	_type = c.getType();
	return (*this);
}

Animal::~Animal()
{
	
	std::cout << "Animal destructor called" << std::endl;	
}

const std::string	&Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "I'm an animal but I don't make sound" << std::endl;
}
