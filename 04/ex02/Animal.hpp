/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:24 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 15:02:14 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
	
#include "Brain.hpp"

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		Brain		*_brain;

	public:

		Animal();
		Animal(Animal &c);
		Animal &operator=(Animal &c);
		virtual ~Animal() = 0;

		const std::string &getType() const;
		virtual void	makeSound() const;

};
#endif