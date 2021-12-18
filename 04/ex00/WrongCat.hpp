/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:48 by bperez            #+#    #+#             */
/*   Updated: 2021/12/17 22:36:17 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
	
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	private:

	public:

		WrongCat();
		WrongCat(WrongCat &c);
		WrongCat &operator=(WrongCat &c);
		~WrongCat();

		void	makeSound() const;
};
#endif