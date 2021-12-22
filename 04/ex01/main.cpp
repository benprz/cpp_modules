/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:36:30 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 01:38:27 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main()
{
	Animal *animals[4] = { new Dog(), new Cat(), new Dog(), new Cat()};
	std::string ideas[dd5] = { "manon", "benjamin", "anton", "aurélie", "milou" };

	animals[1] 
	

	for (int i = 0; i < 4; i ++)
		delete (animals[i]);
}
