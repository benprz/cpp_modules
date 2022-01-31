/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 09:19:12 by bperez            #+#    #+#             */
/*   Updated: 2022/01/31 11:51:57 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <iostream>

int main()
{
	// test avec des très grandes listes
	try
	{
		std::vector<int> v;

		for (int i = 0; i < 15000; i++)
			v.push_back(i);
		
		Span sp(15000);

		sp.addNumberList(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (...) {}
	
	std::cout << std::endl;
	// test des exceptions
	try
	{
		Span sp(1);
		
		sp.addNumber(0);
		sp.addNumber(1);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp(1);

		sp.addNumber(2147483647);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	//tests du main
	Span sp = Span(6);

	sp.addNumber(-2147483648);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(2147483647);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span sp2(sp);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}
