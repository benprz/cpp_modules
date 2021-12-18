/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:08 by bperez            #+#    #+#             */
/*   Updated: 2021/12/18 03:46:31 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"  
	
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}
	
Brain::Brain(Brain &c)
{
	std::cout << "Brain constructor copy called" << std::endl;
	*this = c;
}

Brain &Brain::operator=(Brain &c)
{
	std::cout << "Brain assignement operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}