/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:24 by bperez            #+#    #+#             */
/*   Updated: 2022/01/09 22:01:27 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
	
#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:

		Animal();
		Animal(Animal &c);
		Animal &operator=(Animal &c);
		virtual ~Animal() = 0;

		const std::string &getType() const;
		virtual void	makeSound() const;

};
#endif
