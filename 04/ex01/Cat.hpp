/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:48 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:09:38 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
	
#include "Animal.hpp"

class Cat : public Animal 
{
	private:

	public:

		Cat();
		Cat(Cat &c);
		Cat &operator=(Cat &c);
		~Cat();

		void	makeSound() const;

};
#endif