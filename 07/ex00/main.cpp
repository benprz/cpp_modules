/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 06:24:55 by bperez            #+#    #+#             */
/*   Updated: 2022/01/27 10:36:06 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int main()
{
	int i = 1;
	int j = 2;

	std::cout << "i = " << i << " j = " << j << std::endl;
	std::cout << "min = " << min(i, j) << std::endl;
	std::cout << "max = " << max(i, j) << std::endl;
	swap(i, j);
	std::cout << "i = " << i << " j = " << j << std::endl;
	std::cout << "min = " << min(i, j) << std::endl;
	std::cout << "max = " << max(i, j) << std::endl;
	
	std::cout << std::endl;
	// tests du sujet
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
