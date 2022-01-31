/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:18:49 by bperez            #+#    #+#             */
/*   Updated: 2022/01/28 08:05:49 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try 
	{
		Array<int>	array(3);
		array[0] = 10;
		array[1] = 20;
		array[2] = 30;
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		std::cout << array[2] << std::endl;

		Array<int>	array2(3);
		array2[0] = 15;
		array2[1] = 25;
		array2[2] = 35;
		array = array2;
		array2[0] = 100;
		array2[1] = 200;
		array2[2] = 300;
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		std::cout << array[2] << std::endl;
		std::cout << array[3] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
