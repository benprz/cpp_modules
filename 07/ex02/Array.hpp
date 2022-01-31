/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:08:13 by bperez            #+#    #+#             */
/*   Updated: 2022/01/28 08:07:42 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class	Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array()
		{
			_size = 0;
			_array = new T[_size];
		};
		Array(unsigned int length)
		{
			_size = length;
			_array = new T[_size]();
		}
		Array(const Array &c)
		{
			_size = c._size;
			_array = new T[_size];
			for (int i = 0; i < _size; i++)
				_array[i] = c._array[i];
		}
		Array	&operator=(const Array &c)
		{
			if (this != &c)
			{
				this->~Array();
				_size = c._size;
				_array = new T[_size];
				for (size_t i = 0; i < _size; i++)
					_array[i] = c._array[i];
			}
			return *this;
		}
		T	&operator[](unsigned int i)
		{
			if (i < 0 || i >= _size)
				throw OutOfBoundsException();
			return (_array[i]);
		}
		T	&operator[](unsigned int i) const
		{
			if (i < 0 || i >= _size)
				throw OutOfBoundsException();
			return (_array[i]);
		}
		~Array() { delete[] _array; }

		T	*getArray() { return (_array); }
		unsigned int	size() { return (_size); }

		class OutOfBoundsException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Calling out of limits index");
			}
		};
};

#endif
