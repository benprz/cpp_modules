/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:17:18 by bperez            #+#    #+#             */
/*   Updated: 2022/01/26 08:47:35 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	private:
		Data();
		const int &_value;

	public:
		Data(const int &value) : _value(value) {};
		~Data() {};

		int	getValue() const { return (_value); };
};

#endif
