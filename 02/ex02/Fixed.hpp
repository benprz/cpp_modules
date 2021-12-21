/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:59:01 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 15:33:16 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _value;
    static const int _number_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &c);
    Fixed(const int i);
    Fixed(const float f);

    Fixed& operator=(const Fixed &c);
    bool operator<(const Fixed &c);
    bool operator>(const Fixed &c);
    bool operator<=(const Fixed &c);
    bool operator>=(const Fixed &c);
    bool operator==(const Fixed &c);
    bool operator!=(const Fixed &c);
    Fixed operator+(const Fixed &c);
	Fixed operator-(const Fixed &c);
    Fixed operator*(const Fixed &c);
    Fixed operator/(const Fixed &c);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
	static Fixed &min(Fixed &c1, Fixed &c2);
	const Fixed &min(const Fixed &c1, const Fixed &c2);
	static Fixed &max(Fixed &c1, Fixed &c2);
	const Fixed &max(const Fixed &c1, const Fixed &c2);
};

std::ostream & operator<<(std::ostream &stream, const Fixed &c);

#endif

