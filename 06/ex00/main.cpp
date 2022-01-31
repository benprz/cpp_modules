/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 07:51:53 by bperez            #+#    #+#             */
/*   Updated: 2022/01/26 10:41:47 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

void	printChar(std::string number)
{
	int c;

	std::cout << "char : ";
	try
	{
		c = std::stoi(number);
		if (c < 0 || c > 255)
		{
			throw (1);
		}
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (!isprint(c))
	{
		std::cout  << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
}

void	printInt(std::string number)
{
	int i;

	std::cout << "int : ";
	try
	{
		i = std::stoi(number);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;
}

void	printFloat(std::string number)
{
	float f;

	std::cout << "float : ";
	try
	{
		f = std::stof(number);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << f;
	if (f - (int)f == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	printDouble(std::string number)
{
	float d;

	std::cout << "double : ";
	try
	{
		d = std::stod(number);
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << d;
	if (d - (int)d == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
    std::string number;

    if (argc > 1)
    {
        number = argv[1];
        if (number.length() > 0)
		{
			printChar(number);
			printInt(number);
			printFloat(number);
			printDouble(number);
		}
    }
    return 0;
}
