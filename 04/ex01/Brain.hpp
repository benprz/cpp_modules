/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:04 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 10:41:43 by bperez           ###   ########lyon.fr   */
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
		Brain &operator=(Brain &c);
		~Brain();

		Brain	*getIdeas();
};

#endif
