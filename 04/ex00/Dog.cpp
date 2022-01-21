/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:35 by bperez            #+#    #+#             */
/*   Updated: 2022/01/09 20:00:40 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"  
	
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;	
	type = "Dog";
}
		
Dog::Dog(Dog &c)
{
	std::cout << "Dog constructor called" << std::endl;	
	*this = c;
}

Dog &Dog::operator=(Dog &c)
{
	type = c.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;	
}

void	Dog::makeSound() const
{
	std::cout << "Coin coin" << std::endl;
}
