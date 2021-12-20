/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:08 by bperez            #+#    #+#             */
/*   Updated: 2021/12/20 14:28:38 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <string.h>

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
	Brain	*new_brain;

	std::cout << "Brain assignement operator called" << std::endl;
	delete this;
	new_brain = new Brain();
	memcpy((void *)new_brain, (void *)&c, 100);
	return (*new_brain);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::addIdea(std::string idea)
{
	int i = 0;

	while (ideas[i] != "" && i < 100)
		i++;
	if (i == 99)
		i = 0;
	if (i < 100)
		ideas[i] = idea;
}

void	Brain::setBrain(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

void	Brain::getIdeas()
{
	for (int i = 0; ideas[i] != "" && i < 100; i++)
	{
		std::cout << "ideas[" << i << "] = " << ideas[i] << std::endl;
	}
}
