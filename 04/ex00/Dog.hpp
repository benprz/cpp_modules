/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:32 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:09:42 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
	
#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:

		Dog();
		Dog(Dog &c);
		Dog &operator=(Dog &c);
		~Dog();

		void	makeSound() const;
};
#endif