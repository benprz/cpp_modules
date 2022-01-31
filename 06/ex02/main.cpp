/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:16:45 by bperez            #+#    #+#             */
/*   Updated: 2022/01/26 11:01:58 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	int n = rand() % 3;

	if (n == 0)
	{
		std::cout << "A class generated" << std::endl;
		return (static_cast<Base *>(new A()));
	}
	else if (n == 1)
	{
		std::cout << "B class generated" << std::endl;
		return (static_cast<Base *>(new B()));
	}
	else if (n == 2)
	{
		std::cout << "C class generated" << std::endl;
		return (static_cast<Base *>(new C()));
	}
	return NULL;
}

void identify(Base* p)
{
	if (p == NULL)
	{
		std::cout << "idenfity(Base *): given pointer is NULL" << std::endl;
		return ;
	}
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "identify(Base *): A class" << std::endl; 
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "identify(Base *): B class" << std::endl; 
	else
		std::cout << "identify(Base *): C class" << std::endl; 
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
	}
	catch (std::bad_cast)
	{
		try 
		{
			(void)dynamic_cast<B &>(p);
		}
		catch (std::bad_cast)
		{
			std::cout << "identify(Base &): C class" << std::endl; 
			return ;
		}
		std::cout << "identify(Base &): B class" << std::endl; 
		return ;
	}
	std::cout << "identify(Base &): A class" << std::endl; 
}

int main()
{
	std::srand(std::time(NULL));
	for (int i = 0; i < 10; i ++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		std::cout << std::endl;
		delete base;
	}
	return 0;
}
