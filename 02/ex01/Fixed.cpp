/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:58:57 by bperez            #+#    #+#             */
/*   Updated: 2021/12/13 20:08:38 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed &c)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = c;
}

Fixed& Fixed::operator=(const Fixed &c)
{
    std::cout << "Assignation operator called" << std::endl;
    _value = c.getRawBits();
    return (*this);
}

Fixed& Fixed::operator<<(float number)
{
    std::cout << _value << "." << _number_bits;
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
    return (_value);
}

int Fixed::toInt(void) const
{
    return (_value);
}