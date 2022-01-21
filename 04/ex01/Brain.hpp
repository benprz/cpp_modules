/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:04 by bperez            #+#    #+#             */
/*   Updated: 2022/01/09 21:47:48 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
	
#include <iostream>

class Brain  
{
	private:
		std::string _ideas[100];
	public:

		Brain();
		Brain(Brain &c);
		Brain(std::string *ideas);
		Brain &operator=(Brain &c);
		~Brain();

		std::string	*getIdeas();
		void	setIdeas(std::string *ideas);
};

#endif
