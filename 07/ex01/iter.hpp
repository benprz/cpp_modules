/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:22 by bperez            #+#    #+#             */
/*   Updated: 2022/01/27 14:04:06 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, std::size_t length, void (*f)(T &))
{
	for (std::size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	templ_func(T &var)
{
	var += var;
}

#endif
