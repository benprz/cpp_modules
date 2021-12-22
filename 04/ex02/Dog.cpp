/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:35 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 13:49:53 by bperez           ###   ########lyon.fr   */
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
	std::cout << "Dog copy constructor called" << std::endl;	
	*this = c;
}

Dog &Dog::operator=(Dog &c)
{
	std::cout << "Dog assignement operator called" << std::endl;	
	_type = c.getType();
	delete	_brain;
	_brain = new Brain(c._brain->getIdeas());
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

Brain	*Dog::getBrain()
{
	return (_brain);
}
void	Dog::setBrain(std::string *ideas)
{
	_brain->setIdeas(ideas);
}
