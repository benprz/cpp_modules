/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 06:25:30 by bperez            #+#    #+#             */
/*   Updated: 2022/01/27 09:30:18 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	c = a;

	a = b;
	b = c;
}

template<typename T>
T	min(T const &a, T const &b)
{
	if (b <= a)
		return (b);
	return (a);
}

template<typename T>
T	max(T const &a, T const &b)
{
	if (b >= a)
		return (b);
	return (a);
}

#endif
