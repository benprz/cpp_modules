/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:59:01 by bperez            #+#    #+#             */
/*   Updated: 2021/12/13 19:53:37 by bperez           ###   ########lyon.fr   */
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
    Fixed(const float i);
    Fixed& operator=(const Fixed &c);
    Fixed& operator<<(float number);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

#endif
