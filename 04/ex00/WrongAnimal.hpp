/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:18:24 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:23:33 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
	
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal &c);
		WrongAnimal &operator=(WrongAnimal &c);
		~WrongAnimal();

		const std::string &getType() const;
		void	makeSound() const;
};
#endif