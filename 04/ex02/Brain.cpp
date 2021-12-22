/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:08 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 13:47:56 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"  

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	_ideas[0] = "manon";
}

Brain::Brain(Brain &c)
{
	std::cout << "Brain constructor copy called" << std::endl;
	*this = c;
}

Brain::Brain(std::string *ideas)
{
	std::cout << "Brain ideas constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}

Brain &Brain::operator=(Brain &c)
{
	std::string *ideas = c.getIdeas();

	std::cout << "Brain assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string	*Brain::getIdeas()
{
	return (_ideas);
}

std::string Brain::getIdea()
{
	return (_ideas[0]);
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}
