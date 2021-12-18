/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 23:11:04 by bperez            #+#    #+#             */
/*   Updated: 2021/12/18 02:00:16 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
	
#include <iostream>

class Brain  
{
	protected:
		std::string ideas[100];
	public:

		Brain();
		Brain(Brain &c);
		Brain &operator=(Brain &c);
		~Brain();

};

#endif