/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:13:48 by bperez            #+#    #+#             */
/*   Updated: 2021/12/20 14:27:02 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
	
#include "Animal.hpp"

class Cat : public Animal 
{
	private:
		Brain	*_brain;
		
	public:

		Cat();
		Cat(Cat &c);
		Cat &operator=(Cat &c);
		~Cat();

		void	setBrain(std::string *ideas);
		void	addIdea(std::string idea);
		void	getIdeas();
		void	makeSound() const;

};
#endif
