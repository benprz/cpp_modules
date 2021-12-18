/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:54 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:35:51 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"  
	
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;	
	_type = "WrongCat";
}
	
WrongCat::WrongCat(WrongCat &c)
{
	*this = c;
}

WrongCat &WrongCat::operator=(WrongCat &c)
{
	_type = c.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;	
}

void	WrongCat::makeSound() const
{
	std::cout << "Woof wo.. Ops Meooow meow !" << std::endl;
}