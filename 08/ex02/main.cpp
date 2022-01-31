/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicmain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:57:54 by bperez            #+#    #+#             */
/*   Updated: 2022/01/31 13:13:03 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

#include <iostream>
#include <list>

int main()
{
	//tests avec std::list
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	std::cout << "list.back()=" << list.back() << std::endl;
	list.push_back(19);
	list.push_back(50);
	list.push_back(88);
	list.push_back(16);
	std::cout << "list.back()=" << list.back() << std::endl;
	std::list<int>::iterator current = list.begin();

	while (current != list.end())
	{
		std::cout << *current << std::endl;
		current++;
	}

	std::cout << std::endl;
	//tests du main
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it; }
	std::stack<int> s(mstack); 

	return 0;
}
