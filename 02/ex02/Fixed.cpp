/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:58:57 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 15:33:01 by bperez           ###   ########lyon.fr   */
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

bool Fixed::operator<(const Fixed &c)
{
	if (_value < c.getRawBits())
		return (true);
	return (false);	
}

bool Fixed::operator>(const Fixed &c)
{
	if (_value > c.getRawBits())
		return (true);
	return (false);	
}

bool Fixed::operator<=(const Fixed &c)
{
	if (_value <= c.getRawBits())
		return (true);
	return (false);	
}

bool Fixed::operator>=(const Fixed &c)
{
	if (_value >= c.getRawBits())
		return (true);
	return (false);	
}

bool Fixed::operator==(const Fixed &c)
{
	if (_value == c.getRawBits())
		return (true);
	return (false);	
}

bool Fixed::operator!=(const Fixed &c)
{
	if (_value != c.getRawBits())
		return (true);
	return (false);	
}

Fixed Fixed::operator+(const Fixed &c)
{
	Fixed result;

	result.setRawBits(_value + c.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &c)
{
	Fixed result;

	result.setRawBits(_value - c.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &c)
{
	Fixed result(this->toFloat() * c.toFloat());

	return (result);
}

Fixed Fixed::operator/(const Fixed &c)
{
	Fixed result(this->toFloat() / c.toFloat());

	result.setRawBits(_value / c.getRawBits());
	return (result);
}

Fixed &Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed &Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return (tmp);
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

Fixed &Fixed::min(Fixed &c1, Fixed &c2)
{
	if (c1.getRawBits() < c2.getRawBits())
		return (c1);
	return (c2);
}

const Fixed &Fixed::min(const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() < c2.getRawBits())
		return (c1);
	return (c2);
}

Fixed &Fixed::max(Fixed &c1, Fixed &c2)
{
	if (c1.getRawBits() > c2.getRawBits())
		return (c1);
	return (c2);
}

const Fixed &Fixed::max(const Fixed &c1, const Fixed &c2)
{
	if (c1.getRawBits() > c2.getRawBits())
		return (c1);
	return (c2);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &c)
{
     stream << c.toFloat();
	 return (stream);
}

