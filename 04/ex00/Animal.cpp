/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:09 by bperez            #+#    #+#             */
/*   Updated: 2022/01/09 20:00:28 by bperez           ###   ########lyon.fr   */
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
	std::cout << "Animal copy constructor called" << std::endl;
	*this = c;
}

Animal &Animal::operator=(Animal &c)
{
	type = c.getType();
	return (*this);
}

Animal::~Animal()
{
	
	std::cout << "Animal destructor called" << std::endl;	
}

const std::string	&Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "I'm an animal but I don't make sound" << std::endl;
}
