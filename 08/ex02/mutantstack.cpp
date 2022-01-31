/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:06:46 by bperez            #+#    #+#             */
/*   Updated: 2022/01/31 13:29:02 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &c)
{ 
	*this = c;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs) 
{
	if (this != rhs)
		this->c = rhs.c;
	return (*this);
}
