/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 08:26:34 by bperez            #+#    #+#             */
/*   Updated: 2022/01/29 09:59:33 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int main()
{
	std::vector<int> list;

	list.push_back(1);
	list.push_back(10);
	list.push_back(100);

	try
	{
		std::cout << *easyfind<std::vector<int> >(list, 10) << std::endl;
		std::cout << *easyfind<std::vector<int> >(list, 1000) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
