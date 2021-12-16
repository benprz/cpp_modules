/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:58:57 by bperez            #+#    #+#             */
/*   Updated: 2021/12/16 09:48:35 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    _value = i << _number_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _number_bits));
}

Fixed& Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    _value = c.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _number_bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _number_bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &c)
{
     stream << c.toFloat();
	 return (stream);
}
