/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:41:41 by bperez            #+#    #+#             */
/*   Updated: 2022/01/27 14:05:20 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

void	print_numbers(int &i)
{
	std::cout << i << std::endl;
}

void	iter(int &i)
{
	i += 1;
}

void print_string(std::string &str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int	array[3] = {10, 20, 30};

	iter<int>(array, 3, print_numbers);
	iter<int>(array, 3, iter);
	iter<int>(array, 3, print_numbers);

	std::cout << std::endl;
	std::string array2[4] = {"hi", "hello", "hola", "bonjour"};

	iter<std::string>(array2, 4, print_string);
	iter<std::string>(array2, 4, templ_func);
	std::cout << std::endl;
	iter<std::string>(array2, 4, print_string);
	return (0);
}
