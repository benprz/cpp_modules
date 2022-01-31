/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 08:17:10 by bperez            #+#    #+#             */
/*   Updated: 2022/01/29 10:08:35 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class ValueNotFoundException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Value not found in container";
		}
};

template<class T>
typename T::iterator	easyfind(T &container, int tofind)
{
	typename T::iterator value = std::find(container.begin(), container.end(), tofind);
	if (value != container.end())
		return (value);
	throw ValueNotFoundException();
}

#endif
