/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:35 by bperez            #+#    #+#             */
/*   Updated: 2021/12/18 00:07:31 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"  
	
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;	
	_type = "Dog";
	_brain = new Brain();
}
		
Dog::Dog(Dog &c)
{
	*this = c;
}

Dog &Dog::operator=(Dog &c)
{
	_type = c.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;	
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Coin coin" << std::endl;
}